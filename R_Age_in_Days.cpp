#include<stdio.h>

int main(){
    long a;
    scanf("%ld", &a);

    printf("%ld years\n", a / 365);
    printf("%ld months\n", ((a % 365) / 30));
    printf("%ld days\n", ((a % 365) % 30));
    return 0;
}
