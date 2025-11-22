///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
#include<math.h>
int main() {
    int t, h, x, y1, y2, k, i, gunCount, laserCount1, laserCount2;
    scanf("%d", &t);
    while(t--) {
        laserCount2 = 0;
        scanf("%d %d %d %d %d", &h, &x, &y1, &y2, &k);
        gunCount = ceil(h * 1.0 / x);
        for(i = 1; i <= k; i++) {
            h -= y1;
            laserCount1 = i;
            if(h <= 0) {
                break;
            }
        }
        while(h > 0) {
            h -= y2;
            laserCount2++;
        }
        if(gunCount < ( laserCount2 + laserCount1 )) {
            printf("%d\n", gunCount);
        } else {
            printf("%d\n", laserCount2 + laserCount1);
        }
    }
    return 0;
}

