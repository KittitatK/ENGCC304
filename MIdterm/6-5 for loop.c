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

    int user_int = 0 ;//รับค่ามาก่อนแล้วค่อยให้ตัว i
    int input = 0 ;  //รับค่ามามาจาก user_int
    int check = 0 ; //เช็คค่า i
     

    printf("Enter number ;\n");
    scanf("%d",&user_int);//รับค่ามาจากผู้ใช้

    

    for ( input = user_int ; input >= 2 ; input--){//start for แรกสำหรับเรียงเลข มาก ไป น้อย

        for ( check = 2 ; check < input ; check++){//start for เช็คว่าเป็นจน.เฉพาะไหม

            if ( input % check == 0 ){ //ค่าที่รับจากผู้ใช้ หารหาเศษ กับค่าเช็ค
                break;
            }//end if

        }//end for

        if ( check == input ){ //ถ้าเเลขมันเท่ากันก็จะprintfออกมา
            printf("%d ", input);
        }//end if

    }//stop for แรกสำหรับเรียงเลข มาก ไป น้อย

    return 0;

}


