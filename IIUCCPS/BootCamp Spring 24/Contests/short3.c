///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    ///A-Unsolved
//    int l1, r1, l2, r2;
//    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);
//    if(l1 < l2 && r2 < r1)
//    {
//        printf("%d\n", r2 - l2);
//    }
//    else if(l1 > l2 && r2 > r1)
//        printf("%d\n", r1 - l1);
//    else if(r1 > l2 && r2 > r1)
//        printf("%d\n", abs(l2 - r1));
//    else if(l2 < r1 && l1 < l2)
//        printf("%d\n", abs(l2 - r1));
//    else if(r2 > l1 && l1 > l2)
//    {
//        printf("%d\n", abs(l1 - r2));
//    }
//    else if(r2 > l1 && r1 > r2)
//        printf("%d\n", abs(l1 - r2));
//    else
//        printf("0\n");

    ///B-Solved
//    int x, y;
//    scanf("%d %d", &x, &y);
//    if(( y % x ) + ( y / x ) <= 6)
//    {
//        printf("Yes\n");
//    }
//    else
//    {
//        printf("No\n");
//    }

    ///C-Solved
//    int x, y, z;
//    scanf("%d %d %d", &x, &y, &z);
//    if((x > 0 && y < 0) || (x < 0 && y > 0))
//        printf("%d\n", abs(x));
//    else if(y > 0 && x > y && z > x || y < 0 && x < y && z < x)
//        printf("-1\n");
//    else if(z > 0 && y > z && x > y || z < 0 && y < z && x < y)
//        printf("%d\n", abs(x));
//    else if(y > 0 && x > y && z < 0 || y < 0 && x < y && z > 0)
//        printf("%d\n", 2 * abs(z) + abs(x));
//    else if(x > 0 && y > x && z > y || x < 0 && y < x && z < y)
//        printf("%d\n", abs(x));
//    else if(x > 0 && z > x && y > z || x < 0 && z < x && y < z)
//        printf("%d\n", abs(x));
//    else if(y > 0 && z > y && x > z || y < 0 && z < y && x < z)
//        printf("-1\n");
//    else if(z > 0 && x > z && y > x || z < 0 && x < z && y < x)
//        printf("%d\n", abs(x));
//    else if(z < 0 && x > 0 && y > x || z > 0 && x < 0 && y < x)
//        printf("%d\n", abs(x));

    ///E
    int n[200000], x, evensum = 0, oddsum = 0, evencount = 0, oddcount = 0, f = 0;
    scanf("%d", &x);
    for(int i = 0; i < x; i++) {
        scanf("%d", &n[i]);
    }
    for(int i = 0; i < x; i++) {
        if(n[i] % 2 == 0) {
            evensum += n[i];
            evencount++;
        } else {
            oddsum += n[i];
            oddcount++;
        }
        if(evencount == 2) {
            printf("%d\n", evensum);
            f = 1;
            break;
        } else if(oddcount == 2) {
            f = 1;
            printf("%d\n", oddsum);
            break;
        }
    }
    if(!f)
    {
        printf("-1\n");
    }
    return 0;

}
