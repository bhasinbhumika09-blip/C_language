#include <stdio.h>

int main() {
    int a,b,max;
    printf("Enter a number:");
    scanf("%d",&a);    

    printf("Enter another number:");
    scanf("%d",&b);    

    max=(a<b)?b:a;
    //this means is a<b the we print b otherwise a
    printf("The maximum number is %d\n",max);
    return 0;
}
