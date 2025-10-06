/*โจทย์
จงเขียนโปรแกรมเพื่อรับค่าจากผู้ใช้เพื่อบรรจุเข้าไปในอาเรย์ จากนั้นเขียนฟังก์ชันในการหาค่ามากที่สุด และค่าน้อยที่สุด และแสดงข้อมูลทั้งหมดแก่ผู้ใช้ดังตัวอย่างใน Test case

FIX CODE
-
TEST CASE
Input
Enter value:
50 10 20 30 60 70 40
Output
Index:  0  1  2  3  4  5  6
Array: 50 10 20 30 60 70 40

Min : 10
Max : 70
TEST CASE
Input
Enter value:
3 5 18 1 3 19 27 2 7
Output
Index:  0  1  2  3  4  5  6  7  8
Array:  3  5 18  1  3 19 27  2  7

Min : 1
Max : 27*/

#include <stdio.h>

#define SIZE 100   // ขนาดสูงสุดของอาเรย์

// ฟังก์ชันหาค่ามากที่สุด
int findMax(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// ฟังก์ชันหาค่าน้อยที่สุด
int findMin(int arr[], int n) {
    int min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[SIZE];
    int n = 0;

    printf("Enter value:\n");

    // อ่านค่าทีละตัวจนกว่าจะเจอ newline (กด Enter)
    while (scanf("%d", &arr[n]) == 1) {
        n++;
        if (getchar() == '\n') { // ถ้าเจอ Enter ให้หยุด
            break;
        }
    }

    // แสดง Index
    printf("Index: ");
    for(int i = 0; i < n; i++) {
        printf("%3d", i);
    }
    printf("\n");

    // แสดงค่าใน Array
    printf("Array: ");
    for(int i = 0; i < n; i++) {
        printf("%3d", arr[i]);
    }
    printf("\n\n");

    // แสดงค่ามากที่สุดและน้อยที่สุด
    printf("Min : %d\n", findMin(arr, n));
    printf("Max : %d\n", findMax(arr, n));

    return 0;
}
