#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    // Set identity value
    int mx = -1e6 + 6, mn = 1e6 + 6, mid;
    if (a > mx) mx = a;
    if (b > mx) mx = b;
    if (c > mx) mx = c;

    if (a < mn) mn = a;
    if (b < mn) mn = b;
    if (c < mn) mn = c;

    mid = (a + b + c) - mx - mn;
    printf("%d\n%d\n%d\n", mn, mid, mx);
    printf("\n%d\n%d\n%d", a, b, c);
    return 0;
}
