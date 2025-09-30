/*
    รับค่าจากผู้ใช้จำนวน 3 ค่า และสร้างฟังก์ชันในการหาผลรวมของจำนวน 3 ค่านี้ และแสดงผลลัพธ์มายังหน้าจอ พร้อมระบุชื่อฟังก์ชันที่เรียกใช้งาน เช่น รับค่า 3, 5, 6 จะแสดงผลลัพธ์ว่า 14 (Calculate by Additional Function)

    Test case:
        Input 1 : 
            3
        Input 2 : 
            4
        Input 3 : 
            5
    Output:
        Summation = 12 (Calculate by Additional Function)
*/
#include <stdio.h>

int isCalculate(int a , int b , int c){
    return a + b + c ;
}

int main(){
    int a , b, c;
    int sum ;

    printf("Enter Number 1 : ");
    scanf("%d", &a);

    printf("\nEnter Number 2 : ");
    scanf("%d", &b);

    printf("\nEnter Number 3 : ");
    scanf("%d", &c);

    sum = isCalculate(a , b , c);

    printf("Sumation = %d",sum);

    return 0;
}