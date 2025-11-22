
///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
#include<math.h>

int main() {
    int t, a, b, c, d, e, f, g, h;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &a, &b);
        scanf("%d %d", &c, &d);
        scanf("%d %d", &e, &f);
        scanf("%d %d", &g, &h);
        if(a == c) {
            printf("%d\n", abs(b - d) * abs(b - d));
        }
        else if(a == g) {
            printf("%d\n", abs(b - h) * abs(b - h));
        }
        else if(e == c) {
            printf("%d\n", abs(f - d) * abs(f - d));
        }
        else if(e == g) {
            printf("%d\n", abs(f - h) * abs(f - h));
        }
        else if(a == e) {
            printf("%d\n", abs(b - f) * abs(b - f));
        }
        else if(c == g) {
            printf("%d\n", abs(h - d) * abs(h - d));
        }
    }
    return 0;
}

