#include <stdio.h>
#include <stdlib.h>


void writeText();
void readText();

int main(){

    writeText();//เขียน
    readText();//อ่าน
 
    return 0;
}

void writeText(){

    char type[100];//เก็บชื่อไฟล์
    char filetype[100];//รวมค่า
    char text[500];//เก็บข้อมูลจากคีย์บอร์ด

    printf("Enter file name:\n");    
    scanf("%s",type);


    //sprintf(ตัวแปรปลายทาง, "รูปแบบข้อความ", ค่าต่างๆ);
    sprintf(filetype , "E:\\dottextfile\\%s" , type );//filetype = E:\\dottextfile\\%s + a.txt

    FILE *wt;
    wt = fopen( filetype, "w" ); //exp. E:\\dottextfile\\a.txt
    if(wt == NULL){
        printf("Can't open this file!"); 
        exit( 1 );
    }
 
    getchar();

    printf("ข้อมูลภายในไฟล์ \n");

//fgets(ตัวแปรเก็บข้อความ, ขนาด buffer, แหล่ง input);
    fgets(text, sizeof(text), stdin);//เอาไว้รับข้อมูลคำ+ช่องว่าง

    fputs(text, wt);//เขียนค่าลงในไฟล์

    fclose( wt );
}

void readText(){

    char type[100];//เก็บชื่อไฟล์
    char filetype[100];//รวมคำ
    char word[500];//อ่านค่า

    printf("Enter file name:\n");    
    scanf("%s",type);

    sprintf(filetype , "E:\\dottextfile\\%s" , type );

    FILE *rt;
    rt = fopen( filetype, "r" ); 
    if(rt == NULL){
        printf("Can't open this file!"); 
        exit( 1 );
    }

    int count = 0;//นับค่า

    while (fscanf(rt, "%s", word) != EOF) {//EOF = END OF FILE
        count++;
    }
    
    fclose( rt );

    printf("Total number of words in '%s' : %d words\n", type, count);

}
