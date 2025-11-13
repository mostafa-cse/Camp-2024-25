#include<stdio.h>

int main(){
    char c;
    scanf("%c", &c);

    // printf("%c", c ^ (32)); // very efficient

    if (c >= 'a' && c <= 'z') {
        printf("%c", (char)(c - 'a' + 'A'));
    }else{
        printf("%c", (char)(c - 'A' + 'a'));
    }
    return 0;
}
