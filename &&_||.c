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
    // || means one of the two conditions must be true
    // more statement cases can also be made but for now its it
    
    if(a>b && a>c){
        printf("a is greater than b and c.\n");
    }
    else if(b>a && b>c){
        printf("b is greater than a and c.\n");
    }
    else if((a==b) || (a==c)){
        printf("a is either equal to b or c. \n");
    }
    else{
        printf("c is greater than a and b.\n");
    }

    return 0;
}
