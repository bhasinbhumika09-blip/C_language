#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter a number:");
    scanf("%d",&a);    

    printf("Enter another number:");
    scanf("%d",&b);

    printf("Enter another number:");
    scanf("%d",&c);

    // && means both conditions must be true
    
    if(a>b && a>c){
        printf("a is greater than b and c.");
    }
    else if(b>a && b>c){
        printf("b is greater than a and c.");
    }
    else{
        printf("c is greater than a and b.");
    }
    return 0;
}
