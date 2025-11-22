///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

///Class-11: +=, -=, *=, /=, %=, increment(++), decrement(--) and (&&, ||)

#include<stdio.h>
#include<stdbool.h>

int main() {
//    int a = 2;
//    a += 3; ///a = a + 3; /// The value of 'a' will increase 3, a = 2 + 3 = 5
//    a += 1; /// The previous value of 'a' will increase 1, a = 5 + 1 = 6
//    a = 12;
//    a -= 2; ///a = a - 2; ///The value of 'a' will decrease 2, a = 12 - 2 = 10
//    int x = 5;
//    a -= x; /// a = a - x /// a = 10 - 5 = 5
//    a *= x; /// a = a * x /// a = 5 * 5 = 25
//    a /= x; /// a = a / x /// a = 25 / 5 = 5
//    a %= x; /// a = a % x /// a = 5 % 5 = 0
//
//    printf("%d\n", a);

//    int a = 12;
//    a++; /// a = a + 1; ///a += 1 /// Increment Operation
//    printf("%d\n", a);
//
//    a--;///a = a - 1 ///a -= 1 /// Decrement Operation
//    printf("%d\n", a);

//    int a = 12;
//    int b = a = a + 1; /// a = 12 + 1 = 13, b = 13
//    printf("a = %d, b = %d\n", a, b);
//
//    b = a += 1; /// a = 13 + 1 = 14, b = 14
//    printf("a = %d, b = %d\n", a, b);

    ///Example of POST-INCREMENT::
//    int a = 1, b;
//    b = a++ ; /// b = 14, Initially The value of 'a' is 14 and the value of 'a' increment after assigning it to 'b'
//    printf("a = %d, b = %d\n", a, b);

    ///Example of PRE-INCREMENT::
//    int a = 1, b;
//    b = ++a;
//    printf("a = %d, b = %d\n", a, b);

//    int a = 12;
//    int b = a++; /// b = 12, a = 13
//    int c = ++a; /// a = 14, c = 14

//    int a = 12, b = 12;
//    int c = ++a; /// a = 12 + 1 = 13, c = 13
//    int d = b++; /// d = 12, b = 12 + 1 = 13
//    printf("a = %d, b = %d, c = %d, d = %d\n", a, b ,c, d);

//    int a = 1, b;
//    b = a++;
//    b = ++a;
//    printf("%d\n", a * b);

//    int a = 12, b = 12;
//    int c = a--; /// c = 12, a = 12 - 1 = 11
//    //int c = --a; /// a = 12 - 1 = 11, c = 11
//    int d = b--; /// d = 12, b = 12 - 1 = 11
//
//    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    ///Using modulus operation for negative number::
//    int a = -23, b = 5;
//    printf("%d\n", ( a % b + b ) % b); /// Formula: ( a % b + b ) % b; if a < 0 and b > 0

    ///Bool data type::
//    bool c = ( 5 < 1 ); /// If true then the value will assign 1 otherwise 0
//    bool a = false; /// false will assign 0, true will assign 1
//    printf("c = %d, a = %d\n", c, a);
//
//    bool c = ( 10 != 10 );
//    printf("c = %d\n", c);

    ///Relation Operator::
//    int a = 10, b = 10;
//    bool isEqual = ( a == b );
//    bool isGreaterThan = ( a > b );
//    bool isLessThan = ( a < b );
//    bool isLessThanEqualTo = ( a <= b );
//    bool isGreaterThanEqualTo = ( a >= b );
//    bool isNotEqualTo = ( a != b );
//
//    printf("a is equal to b = %d\n", isEqual);
//    printf("a is greater than b = %d\n", isGreaterThan);
//    printf("a is less than b = %d\n", isLessThan);
//    printf("a is less than or equal to b = %d\n", isLessThanEqualTo);
//    printf("a is Greater than or equal to b = %d\n", isGreaterThanEqualTo);
//    printf("a is not equal to b = %d\n", isNotEqualTo);

//    int a, b;
//    scanf("%d %d", &a, &b);
//    ///_Bool isNotEqualto = ( a != b );
//    bool random = ( a < b && a != 3 );
//    printf("%d\n", random);
//    ///printf("%d is not equal to %d: %d", a, b, isNotEqualto);

    ///Logical Operator::
    ///Example of Logical OR:: ||
//    int age;
//    char gender;
//
//    printf("Enter Your Age: ");
//    scanf("%d", &age);
//    printf("What is your Gender? F or M? : ");
//    scanf(" %c", &gender);
//
//    bool shouldGiveVata = ( ( ( age <= 8 ) || ( age >= 70 ) ) || ( gender == 'F' ) ); /// The vata will be given to the people whose age is less than or equal 8 OR age is greater than or equal 70 OR gender is Female
//    printf("You should be given vata: %d\n", shouldGiveVata);

    ///Example of Logical AND:: &&
//    char gender, meritalStatus, isProgrammer;
//    printf("What is your Gender? F or M? : ");
//    scanf("%c", &gender);
//    printf("Are you married? Y or N? : ");
//    scanf(" %c", &meritalStatus);
//    printf("Are you a Competitive Programmer? Y or N? : ");
//    scanf(" %c", &isProgrammer);
//
//    bool shouldGiveVata = ( ( ( gender == 'M' ) && ( meritalStatus == 'Y' ) && ( isProgrammer == 'Y' ) ) || ( gender == 'F' ) ); /// The vata will be given to the people who are male AND married AND programmer OR Female
//
//    printf("You should be given vata: %d\n", shouldGiveVata);
    ///End of The Class!

    return 0;
}

