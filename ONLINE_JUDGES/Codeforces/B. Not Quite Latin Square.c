///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int t;
    char ch1[3], ch2[3], ch3[3];
    scanf("%d", &t);
    while(t--) {
        scanf("%s", &ch1);
        scanf("%s", &ch2);
        scanf("%s", &ch3);
        if( ch1[0] == '?' && ( ( ch1[1] == 'A' && ch1[2] == 'B') || ( ( ch1[1] == 'B' && ch1[2] == 'A') ) ) ) {
            printf("C\n");
        }
        else if( ch2[0] == '?' && ( ( ch2[1] == 'A' && ch2[2] == 'B') || ( ( ch2[1] == 'B' && ch2[2] == 'A') ) ) ) {
            printf("C\n");
        }
        else if( ch3[0] == '?' && ( ( ch3[1] == 'A' && ch3[2] == 'B') || ( ( ch3[1] == 'B' && ch3[2] == 'A') ) ) ) {
            printf("C\n");
        }
        else if( ch2[0] == '?' && ( ( ch2[1] == 'A' && ch2[2] == 'C') || ( ( ch2[1] == 'C' && ch2[2] == 'A') ) ) ) {
            printf("B\n");
        }
        else if( ch1[0] == '?' && ( ( ch1[1] == 'A' && ch1[2] == 'C') || ( ( ch1[1] == 'C' && ch1[2] == 'A') ) ) ) {
            printf("B\n");
        }
        else if( ch3[0] == '?' && ( ( ch3[1] == 'A' && ch3[2] == 'C') || ( ( ch3[1] == 'C' && ch3[2] == 'A') ) ) ) {
            printf("B\n");
        }
        else if( ch3[0] == '?' && ( ( ch3[1] == 'C' && ch3[2] == 'B') || ( ( ch3[1] == 'B' && ch3[2] == 'C') ) ) ) {
            printf("A\n");
        }
        else if( ch1[0] == '?' && ( ( ch1[1] == 'C' && ch1[2] == 'B') || ( ( ch1[1] == 'B' && ch1[2] == 'C') ) ) ) {
            printf("A\n");
        }
        else if( ch2[0] == '?' && ( ( ch2[1] == 'C' && ch2[2] == 'B') || ( ( ch2[1] == 'B' && ch2[2] == 'C') ) ) ) {
            printf("A\n");
        }
    }
    return 0;
}

