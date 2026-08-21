#include <stdio.h>

int main() {
    int a;
    printf("Enter a number:");
    scanf("%d",&a);    

    printf("actual value of a is %d.\n",a);
    a++;
    printf("%d\n",a);
    ++a;
    printf("%d\n",a);
    a--;
    printf("%d\n",a);
    --a;
    printf("%d\n",a);
    
    return 0;
}
