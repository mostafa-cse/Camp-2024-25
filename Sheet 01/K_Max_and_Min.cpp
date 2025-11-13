#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    // Set identity value
    int mx = -10e6, mn = 10e6;

    // for Min value
    if (a > mx) mx = a;
    if (b > mx) mx = b;
    if (c > mx) mx = c;

    // for Min value
    if (a < mn) mn = a;
    if (b < mn) mn = b;
    if (c < mn) mn = c;

    printf("%d %d", mn, mx);
    return 0;
}
