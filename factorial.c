//factorial of a given number
#include <stdio.h>
int main(){
    int a, fact = 1;
    printf("Enter the number: ");
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        fact*=i;
    }
    printf("Factorial of a given number: %d", fact);
    return 0;
}