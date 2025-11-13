#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    printf("%d + %d = %d\n", a, b, a + b);
    // printf("%d * %d = %lld\n", a, b, 1LL * a * b);
    printf("%d * %d = %lld\n", a, b, (long long)a * b);
    printf("%d - %d = %d\n", a, b, a - b);
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
