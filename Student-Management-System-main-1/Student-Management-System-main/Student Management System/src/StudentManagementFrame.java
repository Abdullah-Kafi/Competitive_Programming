import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.time.LocalDate;
import java.util.ArrayList;

public class StudentManagementFrame extends JFrame {
    private JTable table;
    private DefaultTableModel tableModel;

    public StudentManagementFrame() {
        setTitle("Student Management System");
        setSize(800, 450);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        JButton addBtn    = new JButton("Add");
        JButton searchBtn = new JButton("Search");
        JButton updateBtn = new JButton("Update");
        JButton deleteBtn = new JButton("Delete");
        JButton refBtn    = new JButton("Refresh");

        JPanel top = new JPanel();
        top.add(addBtn);
        top.add(searchBtn);
        top.add(updateBtn);
        top.add(deleteBtn);
        top.add(refBtn);
        add(top, BorderLayout.NORTH);

        tableModel = new DefaultTableModel(
                new Object[]{"ID","Name","Birthday","Email"}, 0
        );
        table = new JTable(tableModel);
        add(new JScrollPane(table), BorderLayout.CENTER);

        loadStudents();

        addBtn.addActionListener(e -> showAddDialog());
        searchBtn.addActionListener(e -> showSearchDialog());
        updateBtn.addActionListener(e -> showUpdateDialog());
        deleteBtn.addActionListener(e -> showDeleteDialog());
        refBtn.addActionListener(e -> loadStudents());
    }

    private void showAddDialog() {
        JTextField idField    = new JTextField();
        JTextField nameField  = new JTextField();
        JTextField dobField   = new JTextField();
        JTextField emailField = new JTextField();

        JPanel p = new JPanel(new GridLayout(0,1));
        p.add(new JLabel("Student ID:"));               p.add(idField);
        p.add(new JLabel("Name:"));                     p.add(nameField);
        p.add(new JLabel("Birthday (YYYY-MM-DD):"));    p.add(dobField);
        p.add(new JLabel("Email:"));                    p.add(emailField);

        int opt = JOptionPane.showConfirmDialog(
                this, p, "Add Student",
                JOptionPane.OK_CANCEL_OPTION, JOptionPane.PLAIN_MESSAGE
        );
        if (opt != JOptionPane.OK_OPTION) return;

        String id    = idField.getText().trim();
        String name  = nameField.getText().trim();
        String dob   = dobField.getText().trim();
        String email = emailField.getText().trim();

        if (id.isEmpty() || name.isEmpty() || dob.isEmpty() || email.isEmpty()) {
            JOptionPane.showMessageDialog(this,
                    "All fields are required.", "Error", JOptionPane.ERROR_MESSAGE);
            return;
        }

        if (!email.matches("^[^@\\s]+@[^@\\s]+\\.[^@\\s]+$")) {
            JOptionPane.showMessageDialog(this,
                    "Invalid email format.", "Error", JOptionPane.ERROR_MESSAGE);
            return;
        }

        try {
            Student s = new Student(id, name, LocalDate.parse(dob), email);
            if (DatabaseHelper.addStudent(s)) {
                JOptionPane.showMessageDialog(this, "Student added!");
                loadStudents();
            } else {
                JOptionPane.showMessageDialog(this,
                        "Add failed (duplicate ID?).", "Error", JOptionPane.ERROR_MESSAGE);
            }
        } catch (Exception ex) {
            JOptionPane.showMessageDialog(this,
                    "Error: " + ex.getMessage(), "Error", JOptionPane.ERROR_MESSAGE);
        }
    }

    private void showSearchDialog() {
        String id = JOptionPane.showInputDialog(
                this, "Enter Student ID to search:", "Search", JOptionPane.QUESTION_MESSAGE
        );
        if (id == null || id.trim().isEmpty()) return;

        ArrayList<Student> list = DatabaseHelper.getStudentsById(id.trim());
        tableModel.setRowCount(0);
        if (list.isEmpty()) {
            JOptionPane.showMessageDialog(this,
                    "No student with ID " + id, "Not Found", JOptionPane.INFORMATION_MESSAGE);
        } else {
            for (Student s : list) {
                tableModel.addRow(new Object[]{
                        s.getStudentId(), s.getName(),
                        s.getBirthday(), s.getEmail()
                });
            }
        }
    }

    private void showUpdateDialog() {
        String id = JOptionPane.showInputDialog(
                this, "Enter Student ID to update:", "Update", JOptionPane.QUESTION_MESSAGE
        );
        if (id == null || id.trim().isEmpty()) return;

        Student s = DatabaseHelper.getStudentById(id.trim());
        if (s == null) {
            JOptionPane.showMessageDialog(this,
                    "No student with ID " + id, "Not Found", JOptionPane.INFORMATION_MESSAGE);
            return;
        }

        JTextField nameField  = new JTextField(s.getName());
        JTextField dobField   = new JTextField(s.getBirthday().toString());
        JTextField emailField = new JTextField(s.getEmail());

        JPanel p = new JPanel(new GridLayout(0,1));
        p.add(new JLabel("Name:"));                  p.add(nameField);
        p.add(new JLabel("Birthday (YYYY-MM-DD):")); p.add(dobField);
        p.add(new JLabel("Email:"));                 p.add(emailField);

        int opt = JOptionPane.showConfirmDialog(
                this, p, "Update Student ID " + id,
                JOptionPane.OK_CANCEL_OPTION, JOptionPane.PLAIN_MESSAGE
        );
        if (opt != JOptionPane.OK_OPTION) return;

        String newName  = nameField.getText().trim();
        String newDob   = dobField.getText().trim();
        String newEmail = emailField.getText().trim();

        if (!newEmail.matches("^[^@\\s]+@[^@\\s]+\\.[^@\\s]+$")) {
            JOptionPane.showMessageDialog(this,
                    "Invalid email format.", "Error", JOptionPane.ERROR_MESSAGE);
            return;
        }

        try {
            s.setName(newName);
            s.setBirthday(LocalDate.parse(newDob));
            s.setEmail(newEmail);
            if (DatabaseHelper.updateStudent(s)) {
                JOptionPane.showMessageDialog(this, "Updated!");
                loadStudents();
            } else {
                JOptionPane.showMessageDialog(this,
                        "Update failed.", "Error", JOptionPane.ERROR_MESSAGE);
            }
        } catch (Exception ex) {
            JOptionPane.showMessageDialog(this,
                    "Error: " + ex.getMessage(), "Error", JOptionPane.ERROR_MESSAGE);
        }
    }

    private void showDeleteDialog() {
        String id = JOptionPane.showInputDialog(
                this, "Enter Student ID to delete:", "Delete", JOptionPane.QUESTION_MESSAGE
        );
        if (id == null || id.trim().isEmpty()) return;

        int yn = JOptionPane.showConfirmDialog(
                this, "Really delete ID " + id + "?", "Confirm", JOptionPane.YES_NO_OPTION
        );
        if (yn != JOptionPane.YES_OPTION) return;

        if (DatabaseHelper.deleteStudent(id.trim())) {
            JOptionPane.showMessageDialog(this, "Deleted!");
            loadStudents();
        } else {
            JOptionPane.showMessageDialog(this,
                    "Delete failed.", "Error", JOptionPane.ERROR_MESSAGE);
        }
    }

    private void loadStudents() {
        tableModel.setRowCount(0);
        for (Student s : DatabaseHelper.getAllStudents()) {
            tableModel.addRow(new Object[]{
                    s.getStudentId(), s.getName(),
                    s.getBirthday(), s.getEmail()
            });
        }
    }
}
