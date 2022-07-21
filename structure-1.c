//Read id, name, salary of employee and display it properlt in tabulated form;
#include <stdio.h>
struct employeeStructuredData
{
 int id;
 char name[50];
 float salary;   
}emplyee;
int main(){
    printf("Enter id: ");
    scanf("%d",&emplyee.id);
    printf("Enter name: ");
    scanf("%s",emplyee.name);
    printf("Enter salary: ");
    scanf("%f",&emplyee.salary);
    printf("\nID\tName\tSalary\n");
    printf("%d\t%s\t%0.2f\n", emplyee.id, emplyee.name, emplyee.salary);
    return 0;
}