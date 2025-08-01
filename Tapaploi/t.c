#include <stdio.h>

int main(){

    //char s;
    //char w;
    int m1 = 100, m2 = 100, m5 = 100, m10 = 100, m20 = 100, m50 = 100, m100 = 100; //จำนวนเงิน แบงค์ทุกแบงค์ 100 ใบ เหรียญทุกเหรียญ 100 เหรียญ
    //int w1 = 30, w2 = 30, w3 = 30, w4 = 30;
    //int s1 = 30, s2 = 30, s3 = 30;+
    int snack = 0, water = 0;
    //char choice;
    int menu;
   // int sum;

    printf("ตะพาบลอย\n");

    printf("\nกดเลข 0 เพื่อเข้าหน้าเมนู\n");
    scanf("%d", &menu);

    if ( menu == 0){
        printf("\nDrink\n");
        printf("\n- โค้กกระป๋อง = 10 บาท\n");
        printf("- น้ำเขียว กระป๋อง = 12 บาท\n");
        printf("- อเมริกาโน่ กระป๋อง = 30 บาท\n");
        printf("- ลาเต้ หวานเจี๊ยบ = 35 บาท\n"); 
        printf("\nSnack\n");
        printf("\n- เมล็ดทานตะวัน = 13 บาท\n");
        printf("- ถั่วแปบ = 20 บาท\n");
        printf("- จิ้นส้มหมก = 15 บาท\n");
    }
        
    char choice;
    printf("คุณต้องการเลือก น้ำWater (w) / หรือขนมSnack (s) : ");
    scanf(" %c", &choice );

    if (choice == 's'){
        int snackChoice;
        printf("\nSnack\n");
        printf("\n- 1. เมล็ดทานตะวัน = 13 บาท\n");
        printf("-   2. ถั่วแปบ = 20 บาท\n");
        printf("-   3. จิ้นส้มหมก = 15 บาท\n");
        printf("\nกรอกหมายเลข(1-3)เพื่อเลือกสินค้า : \n");
        scanf(" %d", &snackChoice );
        
        
        switch(snackChoice){
            case 1:
                printf("เมล็ดทานตะวัน 13 บาท");
                snack += 13;
                break;

            case 2:
                printf("ถั่วแปบ = 20 บาท");
                snack += 20;
                break;

            case 3:
                printf("จิ้นส้มหมก = 15 บาท");
                snack += 15;
                break;

            default:
                printf("ไม่มีรายการนี้โปรดเลือกใหม่");
                break;
        }
    }else if (choice == 'w'){
        int drinkChoice;
        printf("\nDrink\n");
        printf("\n- 1. โค้กกระป๋อง = 10 บาท\n");
        printf("-   2. น้ำเขียว กระป๋อง = 12 บาท\n");
        printf("-   3. อเมริกาโน่ กระป๋อง = 30 บาท\n");
        printf("-   4. ลาเต้ หวานเจี๊ยบ = 35 บาท\n"); 
         printf("\nกรอกหมายเลข(1-4)เพื่อเลือกสินค้า : \n");
        scanf(" %d", &drinkChoice );

        switch(drinkChoice){
            case 1:
                printf("โค้กกระป๋อง = 10 บาท");
                water += 10;
                break;

            case 2:
                printf("น้ำเขียว กระป๋อง = 12 บาท");
                water += 12;
                break;

            case 3:
                printf("อเมริกาโน่ กระป๋อง = 30 บาท");
                water += 30;
                break;

            case 4:
                printf("ลาเต้ หวานเจี๊ยบ = 35 บาท");
                water += 35;
                break;

            default:
                printf("ไม่มีรายการนี้โปรดเลือกใหม่");
                break;
        }
    }
    
    printf("\nสินค้าทั้งหมดราคา = %d บาท", snack + water);
    

    return 0;
}