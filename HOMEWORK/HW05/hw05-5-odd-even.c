/*
    จงรับตัวเลขจากผู้ใช้ และให้แสดงผลลัพธ์ว่าเป็นเลขคู่หรือเลขคี่
    
    Test case:
        Input :
            15

    Output:
        15 is an odd integer

    Test case:
        Input :
            -22

    Output:
        -22 is an even integer

*/
#include <stdio.h>

int main(){
    
    int a = 0;

    printf("Input :\n");
    scanf("%d", &a);

    printf("Output :\n");
    if ( a % 2 == 0 ){
        printf(" %d is an even integer", a);

    }else{
        printf(" %d is an odd integer", a);
    }

    return 0;

}