#include<stdio.h>
#include<math.h>
// Global declaration
// const long double PI = acos(-1);
// const long double PI = M_PI;
const long double PI = 3.141592653;
int main() {
    float R;
    scanf("%f", &R);

    long double area = PI * R * R; // auto typeCasting
    printf("%.9lf", area);
    return 0;
}
