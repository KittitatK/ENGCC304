/*โจทย์
จงเขียนโปรแกรมรับค่าตัวเลขจากผู้ใช้ ใส่ไว้ในตัวแปร N และทำการแสดงข้อมูลดังเงื่อนไขต่อไปนี้
- หากผู้ใช้กรอกเลขคี่ ให้โปรแกรมแสดงลำดับตัวเลขตั้งแต่ 1 ถึง N และให้แสดงเฉพาะตัวเลขคี่เท่านั้น
- หากผู้ใช้กรอกเลขคู่ ให้โปรแกรมแสดงลำดับตัวเลขตั้งแต่ N ถึง 0 และให้แสดงเฉพาะตัวเลขคู่เท่านั้น

FIX CODE
ไม่มี
TEST CASE
Input
Enter value:
11
Output
Series: 1 3 5 7 9 11
TEST CASE
Input
Enter value:
8
Output
Series: 8 6 4 2 0*/

#include <stdio.h>

int main(){
    
    int check = 0;
    int i = 0;
    int n = 0;

    printf("Enter value :\n");
    check = scanf("%d", &n);

    if (check == 0){
        printf("invalid input only number");
    }


    else if (n % 2 == 0){
        for ( i = n ; i >= 0  ; i-=2 ){
            printf(" %d ", i);
        }
    }else {
            for ( i = 1 ; i <= n  ; i+=2 ){
           printf(" %d ", i); 
        }
    }

    return 0;
}