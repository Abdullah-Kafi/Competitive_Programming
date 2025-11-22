//#include<stdio.h>
//
//int main()
//{
//    ///A Program to Check if an Alphabet given by user either Vowel or Consonant
//    char alphabet;
//
//    printf("Enter an alphabet : ");
//    scanf("%c", &alphabet);
//
//    if((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z')) {
//        if(alphabet == 'a' || alphabet == 'A') {
//            printf("%c is a Vowel \n", alphabet);
//        } else if(alphabet == 'e' || alphabet == 'E') {
//            printf("%c is a Vowel \n", alphabet);
//        } else if(alphabet == 'i' || alphabet == 'I') {
//            printf("%c is a Vowel \n", alphabet);
//        } else if(alphabet == 'o' || alphabet == 'O') {
//            printf("%c is a Vowel \n", alphabet);
//        } else if(alphabet == 'u' || alphabet == 'U') {
//            printf("%c is a Vowel \n", alphabet);
//        } else {
//            printf("%c is a Consonant \n", alphabet);
//        }
//    }
//    else {
//        printf("Error : Please Enter an English Alphabet. \n");
//        return 1;
//    }
//
//    return 0;
//}

#include <stdio.h>
#include <ctype.h>

int main() {
    // A Program to Check if an Alphabet given by the user is either a Vowel or Consonant
    char alphabet;

    // Prompt message
    printf("Enter an alphabet: ");
    scanf(" %c", &alphabet);  // Added a space before %c to consume any newline character left in the buffer

    // Convert to uppercase for case-insensitivity
    alphabet = toupper(alphabet);

    if ((alphabet >= 'A' && alphabet <= 'Z')) {
        if (alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U') {
            printf("%c is a Vowel\n", alphabet);
        } else {
            printf("%c is a Consonant\n", alphabet);
        }
    } else {
        printf("Error: Please enter an English alphabet.\n");
        return 1;
    }

    return 0;
}
