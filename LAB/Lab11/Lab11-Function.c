/*จงเขียนฟังก์ชันในการตรวจสอบตัวเลขที่ผู้ใช้ป้อนเข้ามา ว่าเป็นตัวเลขที่เป็นอาร์มสตรองหรือไม่ หากใช่ให้แสดงคำว่า Pass หากไม่ใช่แสดงคำว่า Not Pass

หมายเหตุ : ตัวเลขอาร์มสตรอง คือ ตัวเลขที่ผลรวมของเลขยกกำลังของจำนวนหลัก เช่น 153 เป็นตัวเลขอาร์มสตรอง เพราะ 153 มีทั้งหมด 3 หลัก จึงมีค่าเท่ากับ = 1^3 + 5^3 + 3^3 (โดยที่เครื่องหมาย ^ หมายถึงเลขยกกำลัง) 370 = 3^3 + 7^3 + 0^3

TEST CASE
Input
Enter Number:
153
Output
Pass.

TEST CASE
Input
Enter Number:
370
Output
Pass.

TEST CASE
Input
Enter Number:
372
Output
Not Pass.
*/
#include <stdio.h>
#include <math.h>

int isArmstrong(int n);

int main(){

    int user_n = 0;
    
    printf("Input Number : \n");
    scanf("%d",&user_n);

    if (isArmstrong(user_n)){
        printf("Pass.\n");
    }else{
        printf("Not Pass.\n");
    }

    return 0;
}

int isArmstrong(int n){
    
    int origi = n; // เก็บค่าไว้เปรียบเทียบ
    int temp = n ;
    int sum = 0, count_n = 0 , t = 0;                             
    
    while(temp > 0){//start while loopหาว่าเลขมีกี่ตำแหน่ง
        count_n ++ ; 
        temp /= 10 ; //153 / 10 =15 [c=1] | 15 / 10 = 1 [c=2] | 1/10 = 0 [c=3]
    }//end while loop

    printf("%d\n",count_n);
    temp = n;//รับค่ามาจากผู้ใช้อีกครั้ง


    //หาค่าว่าเป็น armstrongไหม
    while(temp > 0){//start while loop 

        t = temp %10;//หารเอาเศษ เช่น 153 % 10 จะเป็น 15.3 ก็จะเอาเศษ 3
        sum += pow(t,count_n);//เอาเลขมายกกำลังเช่น 3**3=27
        temp /= 10;//หารเอาค่าด้านหลังออกเพราะ int จะไม่เอาเลข ทศนิยม

       /* printf("\n%d\n",t);
        printf("%d\n",sum);
        printf("%d\n",temp);*/

    }//end while loop

    //เช็คว่าค่าที่หามามันเท่ากันไหม  153 = 153 ?
    if( sum == origi )//start if 
        return 1;
    else
        return 0;//end if

}