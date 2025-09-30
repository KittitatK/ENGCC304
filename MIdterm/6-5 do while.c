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

    int user_input = 0 ;
    int input = 0 ;
    int check = 0 ;
    bool Condition = true ;//เช็คว่าค่าเป็นจริงไหม

    while(Condition){//start while condition ถ้าค่าเป็นจริงจะรันไปเรื่อยๆ
        printf("Enter number :\n");
        scanf("%d", &user_input);

        input = user_input;

        do{//start do while ถ้าค่าเป็นจริงจะรันต่อเรื่อยๆ
            if(input >= 2){
                check = 2 ;

                while(check < input){//start while ถ้าค่าเช็ค น้อยกว่า ค่าที่ผู้ใช้กรอกก็จะเข้าลูป

                    if ( input % check  == 0){//start if ค่าที่รับจากผู้ใช้ หารหาเศษ กับค่าเช็ค ถ้าหารแแล้วไม่มีเศษก็จะ break ไว้ ex ถ้า input = 10 10 %1 != 0 , 10%2 =0 หลุดลูปเลย แต่เลขจะไม่แสดงเพราะ มัน ไม่เท่ากับค่า input
                        break;
                    }//end if

                    check++;  
                }//end while

                 if ( check == input ){//start ifจะแสดงก็ต่อเมื่อ มันเท่ากันเท่านั้น ถ้า ไม่เท่ากันก็จะไม่แสดง
                    printf("%d ", input);
                }//end if
                
            }
            input--;
            
            

            if ( input < 2){//ถ้าค่าน้อยกว่า 2 ก็จะหลุดลูปทันที
                Condition = false;
            }

        } while (Condition);
        
    }

    return 0;
}