#include<stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    long long X = (1LL * a * b) - (1LL * c * d);
    // long long X = 1LL * a * b - 1LL * c * d; same
    printf("Difference = %lld\n",X);
    return 0;
}
/*
    Precedency Rules as BODMAS
*/
