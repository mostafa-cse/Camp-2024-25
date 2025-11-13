#include <stdio.h>

int main() {
    long long a, b, c, d;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);

    int res = a % 100;
    res = (res * b) % 100;
    res = (res * c) % 100;
    res = (res * d) % 100;
    if (res < 10) printf("0");
    printf("%d", res);
    return 0;
}
