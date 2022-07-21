//Read id, name, and email of 5 people and display in tabulated format
#include<stdio.h>
struct detailsStruct {
 int id;
 char name[50];
 char email[70];   
} details[5];
int main(){
    for(int i = 0; i < 5; i++){
        details[i].id = i+1;
        printf("Enter name: \n");
        scanf("%s", details[i].name);
        printf("Enter email: \n");
        scanf("%s", details[i].email);
    }
    printf("\nID\tName\tEmail\n");
    for(int i = 0; i < 5; i++){
        printf("%d\t%s\t%s\n", details[i].id, details[i].name, details[i].email);
    }
return 0;

}