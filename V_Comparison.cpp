#include <stdio.h>

int main(){
    int a,b;
    char c;
    scanf("%d %c%d", &a, &c, &b);

    if(c =='>'){
        puts(a > b ? "Right":"Wrong");
    }else if(c == '<'){
        puts(a < b ? "Right":"Wrong");
    }else{
        puts(a == b ? "Right":"Wrong");
    }
    return 0;
}
