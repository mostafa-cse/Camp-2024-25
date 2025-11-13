#include<stdio.h>

int main(){
    char c;
    scanf("%c", &c);

    if(c >='0' && c <='9'){
        // puts("IS DIGIT");
        printf("IS DIGIT");
    }else{
        // puts("ALPHA");
        printf("ALPHA\n");
        if(c >='a' && c<='z'){
            printf("IS SMALL");
        }else{
            printf("IS CAPITAL");
        }
    }
    return 0;
}
