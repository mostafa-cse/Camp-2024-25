#include<stdio.h>
#include<math.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    int fVal = a / b;
    int cVal = ceil(1.00 * a / b);
    // int cVal = ceil(a * 1.00 / b);
    // int cVal = ceil((float)a / b);
    // int cVal = ceil((a + b - 1) / b);

    // int rVal = round(1.00 * a / b);
    int rVal = round((a + (b / 2)) / b);

    printf("floor %d / %d = %d\n", a, b, fVal);
    printf("ceil %d / %d = %d\n",a,b,cVal);
    printf("round %d / %d = %d\n", a, b, rVal);
    return 0;
}
