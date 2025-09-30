/*จงเขียนโปรแกรมเพื่อรับคำจากผู้ใช้งาน เพื่อตรวจสอบว่า คำที่กรอกมามีลักษณะเป็นคำหรือวลีที่สามารถอ่านจากหลังไปหน้าหรือหน้าไปหลังแล้วยังคงความหมายเหมือนเดิมได้ โดยที่ หากคำนั้นสามารถอ่านจากหน้าไปหลังหรือหลังไปได้ ให้แสดงผลลัพธ์ว่า Pass แต่หากทำไม่ได้ให้ขึ้นว่า Not Pass

TEST CASE
Input
Enter word:
radar
Output
Pass.

TEST CASE
Input
Enter word:
hello
Output
Not Pass.

TEST CASE
Input
Enter word:
Radar
Output
Pass.

TEST CASE
Input
Enter word:
here
Output
Not Pass.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>//กำหนดฟังก์ชันสำหรับการจัดการอักขระ (character)

int main(){

    char string[100] ;
    char check[100] ;
    int i = 0 ;
    int j = 0 ;
    int reverse = 0;
    int result = 0 ;
    
    
    printf("Enter Word :\n");
    scanf("%s", string);

        for ( i = 0 ; string[i] != '\0' ; i++ ){//start for แปลงตัวอักษร
            string[i] = tolower(string[i]);//tolower แปลงเป็นตัวพิมพ์เล็ก toupper แปลงเป็นตัวพิมพ์ใหญ่
        }//end for แปลงตัวอักษร

    reverse = strlen(string);//strlen คือเอามานับตัวอักษร exp h e l l o
    printf("%d\n",reverse);

        for ( i = 0, j = reverse -1 ; j >= 0 ; i++, j-- ){ //start forเรียงหลังไปหน้า เช่น เช่น hello => o l l e h 
                check[i] = string[j] ;//จะรับค่ามาทีละตัว รอบ[ 1 ] o ,รอบ[ 2 ] ol ,..., รอบ[ 5 ] olleh
        }

    check[i] = '\0';//ใส่ null terminator เพื่อให้มันถูกต้องตามหลักและเวลาใช้ฟังก์ชั่นของstringมันต้องมี\0ปิดท้ายตลอก
    result = strcmp(string , check);//ใช้ เปรียบเทียบ string สองตัวทีละตัวอักษร

        if ( result == 0){
            printf("Pass");
        }else{
            printf("Not Pass");
        }

    return 0;

}