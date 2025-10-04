#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// อาเรย์สำหรับเก็บคำศัพท์
char *ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
char *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

// ฟังก์ชันหลักที่ใช้ในการแปลงตัวเลข 1-999
void convertToWords(int n) {
    if (n == 0) {
        printf("zero");
        return;
    }
    
    // 1. จัดการหลักร้อย (100 - 999)
    if (n >= 100) {
        printf("%s hundred ", ones[n / 100]); // n / 100 คือหลักร้อย
        n %= 100; // n เหลือแค่หลักสิบและหลักหน่วย
        if (n > 0) {
            printf("and "); // เติม 'and' หากมีหลักสิบหรือหลักหน่วยต่อท้าย
        }
    }
    
    // 2. จัดการหลักสิบและหลักหน่วย (1 - 99)
    if (n > 0) {
        if (n < 10) {
            // หลักหน่วย (1 - 9)
            printf("%s", ones[n]);
        } else if (n >= 10 && n <= 19) {
            // ตัวเลขพิเศษ (10 - 19)
            printf("%s", teens[n - 10]);
        } else {
            // หลักสิบ (20 - 99)
            printf("%s ", tens[n / 10]); // n / 10 คือหลักสิบ
            printf("%s", ones[n % 10]); // n % 10 คือหลักหน่วย
        }
    }
}

int main() {
    int input_num;
    printf("Enter a number (1-999): ");
    
    // ตรวจสอบความถูกต้องของการป้อนข้อมูล
    if (scanf("%d", &input_num) != 1) {//start if ตรวจข้อมูล
        printf("Invalid input.\n");
        return 1;
    }//end if ตรวจข้อมูล

    // ตรวจสอบช่วงตัวเลขที่รองรับ
    if (input_num < 0 || input_num > 999) {//start if ตรวจสอบตัวเลข
        printf("Error: Number is out of range (1-999).\n");
        return 1;
    }//end if ตรวจสอบตัวเลข

    printf("Result: ");
    convertToWords(input_num);
    printf("\n");

    return 0;
}