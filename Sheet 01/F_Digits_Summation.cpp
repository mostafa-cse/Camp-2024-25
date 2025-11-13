#include<stdio.h>

int main() {
    unsigned long long a, b;
    scanf("%lld%lld", &a, &b);
    a = a % 10;
        // or
        // a %= 10;

        b = b % 10;
        // or
        // b %= 10;

        int sum = (a + b);
        printf("%d", sum);
    /*other way :

    */
    return 0;
}
