/*โจทย์
ให้นักศึกษาเขียนโปรแกรมภาษาซีที่สามารถจัดการข้อมูลหนังสือในห้องสมุดได้ โดยโปรแกรมจะสามารถ:

เพิ่มข้อมูลหนังสือใหม่
ค้นหาหนังสือตามชื่อ
แสดงรายชื่อหนังสือทั้งหมดที่มีในห้องสมุด
ข้อมูลของหนังสือแต่ละเล่มจะถูกเก็บใน structure โดยมีรายละเอียดดังนี้:

Book ID (int) - รหัสหนังสือ
Title (string) - ชื่อหนังสือ
Author (string) - ผู้แต่ง
Year (int) - ปีที่พิมพ์
ใช้ array ในการเก็บข้อมูลหนังสือทั้งหมด และเขียน function เพื่อจัดการการทำงานต่าง ๆ ที่เกี่ยวกับการเพิ่ม ค้นหา และแสดงข้อมูลหนังสือ

ข้อกำหนด

Function:
void addBook(Book books[], int *count); - สำหรับเพิ่มข้อมูลหนังสือใหม่
void searchBook(Book books[], int count, char title[]); - สำหรับค้นหาหนังสือตามชื่อ
void displayBooks(Book books[], int count); - สำหรับแสดงรายชื่อหนังสือทั้งหมด
โปรแกรมควรจะมีเมนูให้เลือกทำงาน โดยให้ผู้ใช้สามารถเลือก:
เพิ่มหนังสือใหม่
ค้นหาหนังสือตามชื่อ
แสดงรายชื่อหนังสือทั้งหมด
ออกจากโปรแกรม
ในกรณีการค้นหาหนังสือ:
หากพบหนังสือที่ค้นหา ให้แสดงข้อมูลของหนังสือนั้น
หากไม่พบ ให้แสดงข้อความว่า "Book not found."
FIX CODE
void addBook(Book books[], int *count) ;
void searchBook(Book books[], int count, char title[]) ;
void displayBooks(Book books[], int count) ;
TEST CASE : Adding a New Book
Input
Choose an option: 1
Enter Book ID: 101
Enter Title: The C Programming Language
Enter Author: Brian W. Kernighan and Dennis M. Ritchie
Enter Year: 1978
Output
Book added successfully!
TEST CASE : Display All Books
Input
Choose an option: 3
Output
Book ID: 101
Title: The C Programming Language
Author: Brian W. Kernighan and Dennis M. Ritchie
Year: 1978
TEST CASE : Search for a Book by Title (Book Found)
Input
Choose an option: 2
Enter Title to Search: The C Programming Language
Output
Book ID: 101
Title: The C Programming Language
Author: Brian W. Kernighan and Dennis M. Ritchie
Year: 1978
TEST CASE : Search for a Book by Title (Book Not Found)
Input
Choose an option: 2
Enter Title to Search: Introduction to Algorithms
Output
Book not found.
TEST CASE : Exit Program
Input
Choose an option: 4
Output
Exiting the program. Goodbye!*/

#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

// โครงสร้างข้อมูลหนังสือ
typedef struct {
    int id;
    char title[100];
    char author[100];
    int year;
} Book;

// ประกาศฟังก์ชัน
void addBook(Book books[], int *count);
void searchBook(Book books[], int count, char title[]);
void displayBooks(Book books[], int count);

int main() {
    Book books[MAX_BOOKS];
    int count = 0;
    int choice;
    char searchTitle[100];

    while (1) {
        printf("\n===== Library Menu =====\n");
        printf("1. Add New Book\n");
        printf("2. Search Book by Title\n");
        printf("3. Display All Books\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        getchar(); // เคลียร์ \n ที่ค้างหลัง scanf

        switch (choice) {
            case 1:
                addBook(books, &count);
                break;
            case 2:
                printf("Enter Title to Search: ");
                fgets(searchTitle, sizeof(searchTitle), stdin);
                searchTitle[strcspn(searchTitle, "\n")] = '\0'; // ลบ \n ทิ้ง
                searchBook(books, count, searchTitle);
                break;
            case 3:
                displayBooks(books, count);
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

// ✅ เพิ่มหนังสือ
void addBook(Book books[], int *count) {
    if (*count >= MAX_BOOKS) {
        printf("Library is full! Cannot add more books.\n");
        return;
    }

    printf("Enter Book ID: ");
    scanf("%d", &books[*count].id);
    getchar(); // เคลียร์ buffer

    printf("Enter Title: ");
    fgets(books[*count].title, sizeof(books[*count].title), stdin);
    books[*count].title[strcspn(books[*count].title, "\n")] = '\0';

    printf("Enter Author: ");
    fgets(books[*count].author, sizeof(books[*count].author), stdin);
    books[*count].author[strcspn(books[*count].author, "\n")] = '\0';

    printf("Enter Year: ");
    scanf("%d", &books[*count].year);

    (*count)++;
    printf("Book added successfully!\n");
}

// ✅ ค้นหาหนังสือตามชื่อ
void searchBook(Book books[], int count, char title[]) {
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("Book ID: %d\n", books[i].id);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Year: %d\n", books[i].year);
            return;
        }
    }
    printf("Book not found.\n");
}

// ✅ แสดงหนังสือทั้งหมด
void displayBooks(Book books[], int count) {
    if (count == 0) {
        printf("No books in the library.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("Book ID: %d\n", books[i].id);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year: %d\n", books[i].year);
        if (i != count - 1) {
            printf("-----------------------\n");
        }
    }
}
