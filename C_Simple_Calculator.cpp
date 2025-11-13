#include<stdio.h>

int main() {
    long long a, b;
    scanf("%lld%lld", &a, &b);

    printf("%lld + %lld = %lld\n", a, b, a + b);
    printf("%lld * %lld = %lld\n", a, b, a * b);
    printf("%lld - %lld = %lld\n", a, b, a - b);
    return 0;
}

/*
additional :
same statement as this Problemstatement.

print extra as division operation.

input:
two number as a, b


output
print sum, subtract, multiply, divion result.

sample:

input
10 7

outPut:
17
3
70
*/
