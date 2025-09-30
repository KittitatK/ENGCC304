#include <stdio.h>
#include <string.h>


int price = 0 ; //local val
int choice = 0 ; //local val
int result = 0 ; //local val
int item1_stock = 4, item2_stock = 3, item3_stock = 2, item4_stock = 2;
int item5_stock = 0, item6_stock = 0, item7_stock = 0;
int item1_rp = 0, item2_rp = 0, item3_rp = 0, item4_rp = 0;
int item5_rp = 0, item6_rp = 0, item7_rp = 0;

int main(){

    do {
        printf("\n#################################################\n");
        printf("             เลือกรายการที่ต้องการเพิ่ม              \n");
        printf("1) โค้ก กระป๋องละ 10 บาท\n");
        printf("2) น้ำเขียว กระป๋องละ 12 บาท\n");
        printf("3) อเมริกาโน่ 30 บาท\n");
        printf("4) ลาเต้ หวานเจี๊ยบ 35 บาท\n");
        printf("5) เมล็ดทานตะวัน 13 บาท\n");
        printf("6) จิ้นส้มหมก 15 บาท\n");
        printf("7) ถั่วแปบ 20 บาท\n");
        printf("\n");
        printf(">>>>>choose your choice 1-7 (number only) : ");
        
        result = scanf("%d" , &choice); //false = 0 , true = 1
        
        if (result != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); //clear buffer ex. abd\n เจอ \n ออกลูป
            continue ;
        }

        switch (choice) {
            case 1:
                if (item1_stock > 0) {
                    price = 10 ;
                    item1_rp = 1 ;
                    item1_stock-- ;
                    break;
                }
                else{
                    printf("sold out\n");
                    break;
                }
            case 2: 
                if (item2_stock > 0) {
                    price = 12 ;
                    item2_rp = 1 ;
                    item2_stock-- ;
                    break;
                }
                else{
                    printf("sold out\n");
                    break;
                }
            case 3:
                if (item3_stock > 0) {
                    price = 30 ;
                    item3_rp = 1 ;
                    item3_stock-- ;
                    break;
                }
                else{
                    printf("sold out\n");
                    break;
                }
            case 4:
                if (item4_stock > 0) {
                    price = 35 ;
                    item4_rp = 1 ;
                    item4_stock-- ;
                    break;
                }
                else{
                    printf("sold out\n");
                    break;
                }
            case 5:
                if (item5_stock > 0) {
                    price = 13 ;
                    item5_rp = 1 ;
                    item5_stock-- ;
                    break;
                }
                else{
                    printf("sold out\n");
                    break;
                }
            case 6:
                if (item6_stock > 0) {
                    price = 15 ;
                    item6_rp = 1 ;
                    item6_stock-- ;
                    break;
                }
                else{
                    printf("sold out\n");
                    break;
                }
            case 7:
                if (item7_stock > 0) {
                    price = 20 ;
                    item7_rp = 1 ;
                    item7_stock-- ;
                    break;
                }
                else{
                    printf("sold out\n");
                    break;
                }
            default:
                printf("\nInvalid choice,Please enter choice (1-7) \n") ;
        }
    } while (choice < 1 || choice > 7) ;
}