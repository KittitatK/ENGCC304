/*โจทย์
จงเขียนเรียงข้อมูลจากน้อยไปมากจากข้อมูลดังต่อไปนี้
{ 15, 7, 25, 3, 73, 32, 45 }
จากนั้นทำการระบุตำแหน่งของหมายเลข 32 หลังจากตัวเลขต่างๆ ถูกจัดเรียงเรียบร้อยแล้ว
หมายเหตุ : กำหนดให้ทำทุกอย่างภายในฟังก์ชันการทำงานหลัก (ห้ามเขียนฟังก์ชันย่อย)

FIX CODE
-
TEST CASE
Input
-
Output
Old Series : 15, 7, 25, 3, 73, 32, 45
New Series : 3, 7, 15, 25, 32, 45, 73
Pos of 32 : 4*/

#include <stdio.h>

int main() {
    int arr[] = {15, 7, 25, 3, 73, 32, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp, pos = -1;

    // แสดงข้อมูลเดิม
    printf("Old Series : ");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    // เรียงข้อมูลจากน้อยไปมาก (Bubble Sort)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // แสดงข้อมูลใหม่
    printf("New Series : ");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    // หาตำแหน่งของ 32
    for (i = 0; i < n; i++) {
        if (arr[i] == 32) {
            pos = i;
            break;
        }
    }

    printf("Pos of 32 : %d\n", pos);

    return 0;
}
