/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)
    
    Test case:
        Enter number :
            10
    Output:
        7 5 3 2

    Test case:
        Enter number :
            100
    Output:
        97 89 83 79 73 71 67 61 59 53 47 43 41 37 31 29 23 19 17 13 11 7 5 3 2
*/

#include <stdio.h>

int main(){

    int j = 0 ; //เช็กค่า
    int i = 0 ;  //รับค่ามามาจาก user_int
    int user_int = 0 ;//รับค่ามาก่อนแล้วค่อยให้ตัว i 

    printf("Enter number ;\n");
    scanf("%d",&user_int);

    for ( i = user_int ; i >= 2 ; i--){//start for แรกสำหรับเรียงเลข มาก ไป น้อย

        for ( j = 2 ; j < i ; j++){
            if ( i % j == 0 ){
                break;
            }

        }

        if ( j == i){
            printf("%d ", i);
        }

    }//stop for แรกสำหรับเรียงเลข มาก ไป น้อย

    return 0;

}


/*int main(){

    int j = 0 ; //เช็กค่า
    int i = 0 ;  //รับค่ามามาจาก user_int
  

    printf("Enter number ;\n");
    scanf("%d",&i);

    for (  ; i >= 2 ; i--){
        for ( j = 2 ; j < i ; j++){
            if ( i % j == 0 ){
                break;
            }
        }
        if ( j == i){
            printf("%d ", i);
        }
    }

    return 0;

}*/