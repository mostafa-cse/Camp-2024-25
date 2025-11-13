#include<stdio.h>
int main(){
    float a;
    scanf("%f", &a);

    int b = a;
    if(b == a){
        printf("int %d", b);
    }else{
        printf("float %d %f", b, a - b);
    }
    return 0;
}
