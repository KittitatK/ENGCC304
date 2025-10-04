/*Enter N :
6
Enter value[0] :
19
Enter value[1] :
18
Enter value[2] :
27
Enter value[3] :
15
Enter value[4] :
4
Enter value[5] :
2

Index:  0  1  2  3  4  5
Array: 19  #  #  #  #  2 */

#include <stdio.h>

int main(){

    int Arr[ 100 ] ;    //ให้Arrมี 100ช่อง
    int n = 0 ;         //รับค่าจากผู้ใช้
    int i = 0 ;         //เอามากำหนดให้รันลูป
    int j = 0;          //เอามากำหนดให้รันลูป

    printf("Enter N :\n");
    scanf("%d", &n);

    for ( i = 0 ; i < n ; i++){//start for exp. ถ้า i = 0 มีค่าน้อยกว่า n = 5 ให้ +1
        printf("Enter value [ %d ] : \n", i);
        scanf("%d", &Arr[ i ]);
    
    }//end for

    printf("\n");

    printf("Index : ");
    
      for (i = 0 ; i < n ; i++){//start for เอาไว้แสดงค่า index
        printf("%d ", i );
    }//end for 

    printf("\nArray : ");

    for (i = 0; i < n; i++) { //start for เอาไว้แสดงค่าที่รับมาจาก arr i
        for (j = 2; j <= Arr[i]; j++) {//start for เอาไว้เช็คว่าเป็นจำนวนเฉพาะไหม
            if (j < Arr[i] && Arr[i] % j == 0 || Arr[i] <= 1) {
                printf("# ");
                break;
            }
            if (j == Arr[i]) {//start if ถ้าเป็น จำนวนเฉพาะ จะแสดง
                printf("%d ", Arr[i]); // พิมพ์เมื่อ j วิ่งถึงตัวเอง
            }//end if
        }//end for จำนวนเฉพาะ
    }//end for แสดงเลข

    return 0;
}