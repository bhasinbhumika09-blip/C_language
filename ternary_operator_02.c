#include <stdio.h>

int main() {
    int a=18,age;
    
    printf("Enter your age:");
    scanf("%d",&age);    

    (age>=a)?printf("you are eligible to vote \n"):printf("you are not eligible to vote \n");
    

    return 0;
}
