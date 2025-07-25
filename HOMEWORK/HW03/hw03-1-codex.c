//TODO: #8 Arrange this C coding into CODEX pattern.
#include <stdio.h>
#include <conio.h>

int main(){//start func
    int a =10;
    int b = 20 ,c = 30 ,d = 40 ; 

    printf("This is %d + %d = %d ", a, b, a+b);

    for(int i=0;i<d-30;i++){//start for

        if(i<30){//start if
            printf("Here ");
         }//end if

        if(i==8){//start if
            printf("This is 8. ");
            printf("ok");  
        }//end if

    }//end for

return 0;
}//end function