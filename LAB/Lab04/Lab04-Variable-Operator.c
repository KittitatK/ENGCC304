//Input the Employees ID(Max. 10 chars): 
//0000500349
//Input the working hrs: 
//11
//Salary amount/hr: 
//34000

//Expected Output:
//Employees ID = 0000500349
//Salary = U$ 374000.00
#include <stdio.h>

int main(){
    float a,b ;
    float sum = a * b;

    char input_the_Employees_Id [11];

    printf("Input the Employees ID(Max. 10 chars):\n");
    scanf("%s", input_the_Employees_Id );

    printf("Input the working hrs:\n");
    scanf("%f", &a );

    printf("Salary amount/hr:\n");
    scanf("%f", &b );

    sum = a * b;

    printf("\n");
    printf("Expected Output:\n");
    printf("Employees ID = %s\n", input_the_Employees_Id );
    printf("Salary = U$ %.2f\n", sum);

return 0;
}
