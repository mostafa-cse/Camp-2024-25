#include <stdio.h>
#include <math.h>

int main() {
    long long a, b, c, d;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);

    // AB> CD
    long double ab = b * log2l(a);
    long double cd = d * log2l(c);
    puts((ab > cd) ? "YES" : "NO");
    return 0;
}
