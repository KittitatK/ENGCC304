#include <stdio.h>
int main(){
    char firstName[50];
    char LastName[50];

    printf("First Name: ");
    scanf("%s", firstName);
    printf("Last Name: ");
    scanf("%s", LastName);

    printf(" %s %s TC, RMUTL, Chiang Mai, Thailand ", firstName , LastName);
    
return 0;
}