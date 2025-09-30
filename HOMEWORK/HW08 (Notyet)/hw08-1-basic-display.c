/*
    เขียนโปรแกรมรับตัวเลขจากผู้ใช้ n ชุด จากนั้นทำการหาผลรวม และค่าเฉลี่ยของชุดตัวเลขเหล่านั้น (แสดงค่าเฉลี่ยเป็นทศนิยม 2 ตำแหน่ง)
    
    Test case:
        Enter value n :
            6
        Enter number 1 :
            19
        Enter number 2 :
            7
        Enter number 3 :
            23
        Enter number 4 :
            96
        Enter number 5 :
            77
        Enter number 6 :
            16
    Output:
        Sum = 238
        Avg = 39.67

*/
#include <stdio.h>

int main(){

    int n = 0;
    int i = 0;
    float j = 0;
    float sum = 0;
    float avg = 0;

    printf("Enter value :\n");
    scanf("%d",&n);
    
    for ( i = 1 ; i <= n ; i++){

        printf("Enter number %d :\n",i);
        scanf("%f",&j);

        sum += j;

    }

     avg = sum / n ;

    printf("\nSum = %.0f",sum);
    printf("\nAvg = %.2f",avg);


    return 0 ;
}