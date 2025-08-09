/*
    ผู้ใช้กรอกพิกัดจำนวน 2 จุดลงในโปรแกรม ให้คุณเขียนโปรแกรมคำนวณหาจุดกึ่งกลางของ 2 จุดนี้

    Test case:
        Input A Point :
            2 2
        Input B Point :
            4 4

    Output:
        Mid Point of A and B is ( 3.0, 3.0 )

    Test case:
        Input A Point :
            -3 9
        Input B Point :
            4 -19

    Output:
        Mid Point of A and B is ( 0.5, -5.0 )

    Test case:
        Input A Point :
            6 -8
        Input B Point :
            3 3

    Output:
        Mid Point of A and B is ( 4.5, -2.5 )
*/
#include <stdio.h>

int main(){

    int a1 = 0 , a2 = 0 ;
    int b1 = 0 , b2 = 0 ;
    float sum1 = 0, sum2 = 0 ;

    printf("Input A Point : \n");
    scanf("%d %d", &a1, &a2 );

    printf("Input B Point : \n");
    scanf("%d %d", &b1, &b2 );

    sum1 = a1 + b1 ;
    sum2 = a2 + b2 ;

    printf("Mid Point of A and B is ( %.1f, %.1f )\n", sum1 / 2, sum2 / 2 );

    return 0 ;
}