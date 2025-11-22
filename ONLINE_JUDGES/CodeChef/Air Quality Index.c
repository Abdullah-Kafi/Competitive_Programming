#include<stdio.h>

int main() {
    int measuredAQI;
    scanf("%d", &measuredAQI);
    //If The AQI measured by chef is less than 100 than the government will able to keep the AQI within limits
    //Otherwise won't
    if(measuredAQI < 100) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
