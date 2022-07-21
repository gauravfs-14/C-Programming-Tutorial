//Without argument without return type
#include <stdio.h>
void sum(void);
int main()
{
    sum();
    return 0;
}
//defination of function
void sum(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Sum: %d", a+b);
}