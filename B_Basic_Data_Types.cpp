#include<stdio.h>
/*
int : 32 Bit integer.
long long : 64 bit integer
Char : 8 bit Characters & symbols
Float : 32 bit real value
Double : 64 bit real value
*/
int main() {
    int i;
    long long ll;
    char c;
    float f;
    double lf;

    scanf("%d%lld %c%f%lf", &i,&ll, &c, &f, &lf);

    printf("%d\n", i);
    printf("%lld\n", ll);
    printf("%c\n", c);
    printf("%.2f\n", f); // didn't mention
    printf("%g\n", lf); // didn't mention
    return 0;
}
