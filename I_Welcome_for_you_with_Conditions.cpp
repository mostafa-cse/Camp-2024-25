#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a >= b) {
        printf("Yes");
    } else {
        printf("No");
    }
    
    /*
        Ternary Operator
        printf("%s", (a >= b) ? "Yes" : "No");
    */
    return 0;
}
