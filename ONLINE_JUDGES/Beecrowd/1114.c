///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int n;
    while(1) {
        scanf("%d", &n);
        if(n == 2002) {
            printf("Acesso Permitido\n");
            break;
        }
        else {
            printf("Senha Invalida\n");
        }
    }
    return 0;
}

