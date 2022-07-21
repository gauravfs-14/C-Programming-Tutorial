//with return type with argument
#include <stdio.h>
int sum(int, int);
int main()
{
    int a,b;
    printf("Enter numbers: ");
    scanf("%d%d",&a,&b);
    printf("The sum is: %d", sum(a,b));
    return 0;
}

int sum(int a, int b){
    return a+b;
}