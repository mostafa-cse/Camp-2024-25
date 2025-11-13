#include <stdio.h>

int main(){
    char num[10000];
    scanf("%s", num);

    // learn about ----
    printf((num[0] & 1) ? "ODD" : "EVEN");

    /*
        think in math!!
    */
    return 0;
}
