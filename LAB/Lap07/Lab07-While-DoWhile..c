/*จงเขียนโปรแกรมทายตัวเลขซึ่งทำงานดังนี้

ตอนเริ่มเกมผู้เล่นจะมีคะแนนเต็ม 100
โปรแกรมจะสุ่มตัวเลขที่มีค่าตั้งแต่ 1 ถึง 100
ให้ผู้เล่นทายว่าตัวเลขที่โปรแกรมสุ่มมามีค่าเป็นเท่าใด
หากทายผิด โปรแกรมจะลบคะแนนของผู้เล่นไป 10 หน่วย พร้อมแจ้งคะแนนปัจจุบันให้ผู้เล่นทราบด้วย
หากทายผิด โปรแกรมจะต้องบอกใบ้ว่าคำตอบที่ถูกมีค่า "มากกว่า" หรือ "น้อยกว่า" ตัวเลขที่ผู้ใช้ทาย
หากทายผิด ให้โปรแกรมรอรับตัวเลขถัดไปได้เลย
หากทายถูก ให้โปรแกรมแสดงความยินดีกับผู้ใช้ พร้อมแจ้งคะแนนปัจจุบันให้กับผู้เช่น
เมื่อเล่นเสร็จโปรแกรมรอรับคำสั่งจากผู้ใช้ หากผู้ใช้กรอกเลข 1 จะเข้าสู่โหมดการเล่นเกมใหม่อีกครั้ง หากกด -1 ให้หยุดการทำงานของโปรแกรม*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand( time( NULL ) ) ;
    int user_play = 0 ;//ผู้เล่นต้องการเล่นกรอก 1 ไม่ต้องการเล่น -1
    int user_num = 0 ;
    int score_player = 100 ;//กำหนดคะแนนผู้เล่น 100 คะแนน
    int checknochar = 0 ;//เช็คว่าเป็นตัวอักษรไหม
    int checknochar1 = 0 ;
    int max = 100 ;
    int min = 1 ;
    int random_num = 0 ;
    int Condition = 1 ;
   

    while( Condition ){
     
        /*printf("\nDo you want to play game ( 1 = play , -1 = exit ) :\n"); ถ้า บรรทัด 33-34 อยู่ข้างนอก scanf() ที่กรอกรอบถัดๆไปจะไม่ถูกเรียกใหม่เลยเข้าเงื่อนไขเดิมอีก พิมพ์ “Please enter only 1 or -1” ไม่หยุด
        checknochar = scanf("%d", &user_play);*/

        //Buffer = scanf(), getchar(), fgets(),ฯลฯ

        while(1) {
            printf("\nDo you want to play game ( 1 = play , -1 = exit ) :\n");
            checknochar = scanf("%d", &user_play);
            

            if ( checknochar == 0 || (user_play != 1 && user_play != -1) ){ //start ifกรณีเช็คว่าต้องเป็น 1 กับ -1 เท่านั้นตัวเลขอื่นและตัวอักษรไม่แสดง  
                printf("\nPlease enter only 1 or -1\n");
                //printf("\nDo you want to play game ( 1 = play , -1 = exit ) :\n"); ถ้าใส่มันจะเด้ง Do you want to play game ซ้ำ 2 ครั้งเพราะย้ายตัวรับค่าเข้ามาใน loop while แล้ว
                while(getchar() != '\n');//จะอ่านข้อมูลจากค่าที่ใส่วนจนเจอ\n(Enter) เพื่อให้ค่าที่กรอกว่าง
                continue;/*จะข้ามคำสั่งด้านล้่าง ถ้าตัวเลขไม่ใช่ 1 หรือ -1
                            ถ้าเป็น -1 จะเข้าสู่ifด้านล่าง  see you agin และจบโปรแกรมเลย*/

            

            }if(user_play == -1){//ถ้าเป็น -1 จะหยุดเกมทันที
                printf("\n------------------------\n");
                printf("See you again.");
                //break;
                exit(0);//จบโปรแกรม


    
            }
                printf("\n------------------------\n");
                break;// ถ้าเลขถูกต้อง( 1 ) ออกจากลูป
            //end if
            
        }
    
        
        printf("\n(Score=%d)\n", score_player);
        random_num = rand() % 100 + 1;


        
        do{
            while(1){
                printf("\nGuess the winning number (%d - %d) :\n", min, max);
                checknochar1 = scanf("%d", &user_num);

                if ( user_num < min || user_num > max ){
                    printf("\nPlease Enter Bitween ( %d - %d )\n", min, max);
                    while(getchar() != '\n');
                    continue;
                }
                    

                if ( user_num > random_num ){
                                
                    max = user_num - 1;
                    score_player -= 10;

                    printf("\nSorry, the winning number is LOWER than %d.", user_num);
                    printf("  ( Score = %d )", score_player);

                }else if ( user_num < random_num ){

                    min = user_num + 1;
                    score_player -= 10;

                    printf("\nSorry, the winning number is HIGHER than %d.", user_num);
                    printf("  ( Score = %d )", score_player);

                }else if ( user_num == random_num ){
                    printf("\nThat is correct! The winning number is %d.", user_num);
                    printf("  ( Score = %d )\n", score_player);
                    break;

                                                                                /*}else if ( user_num < min && user_num > max ){
                                                                                    printf("\nPlease Enter Bitween ( %d - %d )\n", min, max);*/

                }else{
                    printf("error please try again");
                }
                        

                if ( score_player == 0 ){
                    printf("\n");
                    printf("\nNow your score is  0 \n");
                    printf("You can't play anymore loser");
                    exit(0);
                }

            }

        }while(user_num != random_num);
    
        
    }

    return 0;

}

