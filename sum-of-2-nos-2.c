//With return type without argument
#include <stdio.h>
int sum(void);
int main(){
    printf("Sum: %d", sum());
    return 0;
}

int sum(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    return a+b;
}