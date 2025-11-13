#include <stdio.h>

int main()
{
    char c;
    int a, b;
    scanf("%d %c%d", &a, &c, &b);

    int ans;
    if (c == '+') {
        ans =  a + b;
    } else if (c == '-') {
        ans = a - b;
    } else if (c == '*') {
        ans = a * b;
    } else {
        ans = a / b;
    }
    printf("%d\n", ans);
    return 0;
}
