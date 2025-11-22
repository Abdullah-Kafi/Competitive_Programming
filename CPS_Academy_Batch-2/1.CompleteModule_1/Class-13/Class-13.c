///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

///Class-13: Conditions (if, else if, else) and Practice problems

#include<stdio.h>
#include<stdbool.h>

int main() {

    ///if(Condition) {
        ///This CodeBlocks will execute if and only if the Condition is 'true' otherwise will not.
        ///So, the Condition can either true ( 1 ) or false ( 0 )
    ///}
//    int a, b;
//    printf("Enter two number to be compared: ");
//    scanf("%d %d", &a, &b);

//    printf("Outside up of If.\n");
//    //bool isTrueOrFalse = true;
//    bool isTrueOrFalse = ( a < b );
//    if(isTrueOrFalse) {
//        printf("Inside If.\n");
//    }
//    printf("Outside down of If.\n");

//    int ZeroOrOne = ( a < b );
//    if(ZeroOrOne) {
//        printf("%d is less than %d\n", a, b);
//    }

//    if(a > b) {
//        printf("%d is greater than %d\n", a, b);
//    }
//    else if(a == b) {
//        printf("%d is equal to %d\n", a, b);
//    }
//    else if(a < b) {
//        printf("%d is less than %d\n", a, b);
//    }

//    if(0) {
//        printf("Won't print.\n");
//    }
//    else if(0) {
//        printf("Won't print.\n");
//    }
//    else if(0) {
//        printf("Won't print.\n");
//    }
//    else if(0) {
//        printf("Won't print.\n");
//    }
//    else if(0) {
//        printf("Won't print.\n");
//    }
//    else if(1) {
//        printf("Will Print.\n");
//    }

//    printf("Program terminated\n");

//    if(a < 10) {
//        printf("%d is less than 10.\n", a);
//    }
//    else if(a < 20) {
//        printf("%d is less than 20.\n", a);
//    }

    int a;
    scanf("%d", &a);

    if(a == 0) {
        printf("%d is nutral.\n", a);
    }
    else if(a % 2 == 0) {
        printf("%d is even number.\n", a);
    }
    else {
        printf("%d is odd number.\n", a);
    }

    printf("---\n");

    if(a == 0) {
        printf("%d is nutral.\n", a);
    }
    if(a % 2 == 0) {
        printf("%d is even number.\n", a);
    }
    else {
        printf("%d is odd number.\n", a);
    }
    ///End of The Class!
    return 0;
}

