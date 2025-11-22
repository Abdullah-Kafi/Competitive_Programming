///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int x, y, count = 1, n, Inter = 0, Gremio = 0, Empates = 0;
    scanf("%d %d", &x, &y);
    if(x > y) {
        Inter = 1;
    }
    else if(x < y) {
        Gremio = 1;
    }
    else {
        Empates = 1;
    }
    printf("Novo grenal (1-sim 2-nao)\n");
    while(1) {
        scanf("%d", &n);
        if(n == 1) {
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d %d", &x, &y);
            if(x > y) {
                Inter++;
                count++;
            } else if(x < y) {
                Gremio++;
                count++;
            } else {
                Empates++;
                count++;
            }
        }
        else {
            break;
        }
    }
    printf("%d grenais\n", count);
    printf("Inter:%d\n", Inter);
    printf("Gremio:%d\n", Gremio);
    printf("Empates:%d\n", Empates);
    if(Inter > Gremio) {
        printf("Inter venceu mais\n");
    } else if(Inter < Gremio) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Não houve vencedor\n");
    }
    return 0;
}

