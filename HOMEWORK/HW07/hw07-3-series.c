/*
    จงเขียนโปรแกรมภาษาซีเพื่อรับข้อมูลจากผู้ใช้เป็นตัวเลข และให้แสดงชุดอนุกรมตามจำนวนตัวเลขที่กรอก พร้อมกับแสดงผลรวมของชุดอนุกรมนี้ 9 + 99 + 999 + 9999 + 9999 + .... เช่น ผู้ใช้กรอกเลข 5 ให้แสดงชุดอนุกรมคือ 9 + 99 + 999 + 9999 + 99999 และแสดงผลรวมคือ 111105
    (โจทย์ข้อนี้ให้ใช้ Do While Loop เท่านั้น)
    
    Test case:
        Enter number :
            5
    Output:
        Series = 9 + 99 + 999 + 9999 + 99999
        Sum = 111105

    Test case:
        Enter number :
            7
    Output:
        Series = 9 + 99 + 999 + 9999 + 99999 + 999999 + 9999999
        Sum = 11111103
*/

#include <stdio.h>
#include <math.h>

int main(){
    
    int i = 0;
    int user_num = 0 , un = 0;
    int result = 0, total = 0, sum = 0;

    printf("Enter number :\n");
    scanf("%d",&user_num);

    un = user_num;

    printf("Series = ");

    do{
        
        if ( i < un){

            result = 9 * pow(10,i);
            sum += result;
            total += sum;

            printf(" %d ", sum);

            if ( i < un - 1 ){
                printf("+");
            
            }
            i++;
        }
            
    }while(i < un);
    
    printf("\nSum = %d\n",total);

    return 0;

}