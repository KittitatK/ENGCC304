/*## โจทย์ทบทวนความรู้
เขียนโปรแกรมภาษาซีสำหรับคำนวณเงินเดือนสุทธิและโบนัสของโปรแกรมเมอร์ตามเงื่อนไขดังนี้:

### โปรแกรมจะรับข้อมูลเบื้องต้นจากผู้ใช้ดังนี้:
ตำแหน่งงาน (เช่น Junior Programmer, Mid-Level Programmer, Senior Programmer) โดยใช้ตัวเลข 1, 2, หรือ 3 แทนตามลำดับ
- จำนวนปีที่ทำงาน (อายุงาน)
- จำนวนโปรเจคที่สำเร็จในปีนี้

### การคำนวณโบนัส:

#### โปรแกรมเมอร์จะได้รับโบนัสตามอายุงาน ดังนี้:
- หากอายุงานน้อยกว่า 1 ปี จะไม่ได้รับโบนัส
- หากอายุงาน 1-3 ปี ได้รับโบนัส 10% ของเงินเดือน
- หากอายุงาน 4-5 ปี ได้รับโบนัส 15% ของเงินเดือน
- หากอายุงานมากกว่า 5 ปี ได้รับโบนัส 20% ของเงินเดือน
- นอกจากนี้ยังมีโบนัสพิเศษหากโปรแกรมเมอร์ทำโปรเจคได้สำเร็จมากกว่า 5 โปรเจค โดยจะได้รับโบนัสเพิ่มอีก 5% ของเงินเดือน

#### การกำหนดเงินเดือนพื้นฐานตามตำแหน่ง:
- Junior Programmer: 20,000 บาท
- Mid-Level Programmer: 35,000 บาท
- Senior Programmer: 50,000 บาท

#### โปรแกรมจะคำนวณและแสดงผลดังนี้:
- เงินเดือนพื้นฐาน
- โบนัสตามอายุงาน
- โบนัสพิเศษ (ถ้ามี)
- เงินเดือนสุทธิ (เงินเดือนพื้นฐาน + โบนัสตามอายุงาน + โบนัสพิเศษ)

## FIX CODE
```c++
-
```

## TEST CASE
### Input
```bash
Position: 1  (Junior Programmer)
Years of Experience: 2
Number of Projects Completed this Year: 4
```
### Output
```bash
Base Salary: 20000 THB
Experience Bonus: 2000 THB
Special Bonus: 0 THB
Net Salary: 22000 THB
```

## TEST CASE
### Input
```bash
Position: 3  (Senior Programmer)
Years of Experience: 6
Number of Projects Completed this Year: 7
```
### Output
```bash
Base Salary: 50000 THB
Experience Bonus: 10000 THB
Special Bonus: 2500 THB
Net Salary: 62500 THB
```

*/

#include <stdio.h>

int main(){

    int user_position = 0;
    int user_year = 0;
    int user_work = 0;
    int salary = 0;
    int exp_bonus = 0;
    int special_bonus = 0;


    printf("Base Salary\n");

    printf("Position : ");
    scanf("%d", &user_position);

    /*เช็คว่าเป็นระดับไหน 1 = Junior Programmer , 2 = Mid-Level Programmer , 3 = Senior Programmer
    เพื่อไปดูว่าขั้นนี้เงินเดือนเท่าไหร่*/

        if (user_position  == 1) {//start if check user position
            printf(" ( Junior Programmer )");
            salary = 20000 ;

        }else if (user_position  == 2){
            printf("( Mid-Level Programmer )");
            salary = 35000 ;
            
        }else if (user_position == 3){
            printf("( Senior Programmer )");
            salary = 50000 ;
        }//end if check user position

        
    printf("\nYears of  Experience : ");
    scanf("%d", &user_year);

    /*เช็คว่ามีปะรสบการณ์กี่ปีกรณีถ้ามีประสบการณ์มากกว่า 1-3 ปีจะบวกโบนัส 10% , 4-5 +15% ,ถ้ามากกว่า 5 ปี + 20% */

        if (user_year  > 1 && user_year <= 3){//start if bonus
            exp_bonus = salary * 10 / 100 ;
            

        }else if (user_year  >= 4 && user_year <= 5){
            exp_bonus = salary * 15 / 100 ;


        }else{
            exp_bonus = salary * 20 / 100 ;

        }//end if bonus

    //ถ้าโปรเจคมากกว่า 5 งานต่อปีจะ + โบนัสเพิ่ม 5 %

    printf("\nNumber of Projects Completed this Year : ");
    scanf("%d", &user_work);

        if ( user_work > 5){//start if
            special_bonus =  salary * 5 / 100 ;

        }//end if

    printf("\nBase Salary : %d THB\n",salary);
    printf("Experience Bonus : %d THB\n",exp_bonus);
    printf("Special Bonus : %d THB\n",special_bonus);
    printf("Net Salary : %d THB",salary + exp_bonus + special_bonus);


    return 0;
}