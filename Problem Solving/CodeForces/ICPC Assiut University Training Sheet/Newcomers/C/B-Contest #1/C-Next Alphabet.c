#include<stdio.h>

int main(){
    int x;
    char z,Z;
    scanf("%c",&x);

    if(x=='z'){
        printf("a\n");
    } else if(x=='Z'){
        printf("A\n");
    } else {
        printf("%c\n",x+1);
    }
    
    return 0;
}