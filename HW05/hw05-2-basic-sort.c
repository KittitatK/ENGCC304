/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)
    
    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/

#include <stdio.h>

int main(){

    int a = 0;
    int b = 0;
    int c = 0;
    int check = 0;

    printf("กรุณากรอกค่าตัวเลข 3 ตัว");

    printf("\nInput[1] : ");
   check = scanf("%d", &a);

   if ( check == 0){
        printf("please try again");
        return 0;
    }

    printf("Input[2] : ");
    scanf("%d", &b);
    
    printf("Input[3] : ");
    scanf("%d", &c);

    if (a >= b && b >= c ) {
        printf("%d %d %d", a, b, c);        // a b c  
    }else if (a >= c && c >= b ) {
        printf("%d %d %d", a, c, b);        //a c b



    }else if ( b >= a && a >= c ) {
        printf("%d %d %d", b, a, c);        // b a c 
    }else if ( b >= c && c >= a ) {
        printf("%d %d %d", b, c, a);        //b c a



    }else if ( c >= a && a >= b ){
        printf("%d %d %d", c, a, b);        // c a b 
    }else if ( c >= b && b >= a ){
        printf("%d %d %d", c, b, a);        //c b a
    


    }else{
        printf("End");
        
    }

    return 0;
}