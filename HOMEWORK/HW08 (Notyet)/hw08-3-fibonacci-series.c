/*
    เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ที่มีตัวเลข 2 ลำดับก่อนหน้าบวกกัน (อนุกรมฟีโบนัชชี)
    
    Test case:
        8
    Output:
        Series = 1 + 1 + 2 + 3 + 5 + 8 + 13 + 21
        Sum = 54

*/
#include <stdio.h>

int main(){

    int n = 0, i = 0, x = 1, y = 1, sum = 0;
    int fibbo = 0;

    printf("Enter number : ");
    scanf("%d",&n);

    printf("Series = ");

    for ( i = 1;i <= n ; i++){

        if( i == 1 || i == 2){
            fibbo = 1;
        }else{
            fibbo = x + y;
            x = y;
            y = fibbo;

        }

        sum += fibbo;
        printf("%d",fibbo);

        if ( i < n ){
            printf(" + ");
            
        }
    }

    printf("\nSum = %d",sum);

    

    return 0;
}