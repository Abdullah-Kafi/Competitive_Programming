///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    double amount, tax1 = 0.0, tax2 = 0.0, tax3 = 0.0, total, temp;
    scanf("%lf", &amount);
    if(amount > 2000.0) {
        amount -= 2000;
        if(amount >= 999.99) {
            tax1 = 1000 * .08;
            amount -= 1000.0;
            if(amount >= 1499.99) {
                tax2 = 1500 * .18;
                amount -= 1500.0;
                if(amount > 4500.0) {
                    tax3 = amount * .28; ///last a jeta baki ache shudu setar upor e 28% dite hbe, karon tar por ar kono vat nai
                } else {
                    tax3 = amount * .28;
                }
            } else {
                tax2 = amount * .18;
            }
        } else {
            tax1 = amount * .08;
        }
        total = tax1 + tax2 + tax3;
        printf("R$ %.2lf\n", total);
    } else {
        printf("Isento\n");
    }
    return 0;
}


