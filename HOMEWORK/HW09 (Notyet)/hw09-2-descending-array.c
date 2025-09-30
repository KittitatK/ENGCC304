/*
    ให้ผู้ใช้กรอกค่าเข้ามาเก็บในอาเรย์ จากนั้นให้ทำการแสดงค่าข้อมูล 2 แบบคือ "เรียงข้อมูลจากมากไปน้อย" และ "เรียงข้อมูลจากน้อยไปมาก"
    
    Test case:
        Input : 
            1
        Input : 
            5
        Input : 
            1
        Input : 
            4
        Input : 
            6
        Input : 
            9
        Input : 
            13
        Input : 
            -1
    Output:
        0-99 : 1 1 4 5 6 9 13
        99-0 : 13 9 6 5 4 1 1

*/
#include <stdio.h>

int main(){

    int Array[100];
    int n = 0 ;
    int i = 0;

    for ( i = 0 ; ; i++){
        printf("Input [ %d ]\n",i);
        scanf("%d",&Array[i]);
        
        if (Array[i] == -1) {
            break;
        }
    }

    printf("\n0-99 : ");
    for (int n = 0 ; n < i ; n++){
        printf(" %d ", Array[n]);
    
    }

    printf("\n99-0 : ");
    for (int n = i - 1 ; n >= 0 ; n--){
        printf(" %d ", Array[n]);
    
    }


    return 0;

}
