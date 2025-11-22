///In The Name of ALLAH
///Alhamdulillah

//Abdullah Kafi Chowdhury
//International Islamic University Chittagong

#include<stdio.h>

int main() {
    int n, a, count = 0;
    for(int i = 1; i <= 10; i++) {
        scanf("%d", &n);
        if(n % 42 == 0) {
//            a = n;
            count++;
        }
    }
            printf("%d\n", count);

    return 0;
}


