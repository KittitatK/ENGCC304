#include <stdio.h>
#include <stdbool.h>

int main () {
    char confirm1 ;
    int item1 = 10 , item2 = 10 , item3 = 10 ,item4 = 10 , item5 = 10 , item6 = 10 ,item7 = 10 ;
    int buy1 = 0 , buy2 = 0 , buy3 = 0 , buy4 = 0 , buy5 = 0 , buy6 = 0 , buy7 = 0 ;
    int total = 0 ;

    printf("please enter (Y/N) for go to the next step: "); 
    scanf("%c" , & confirm1);

    if (confirm1 == 'Y') {
        int running = 1;
        while (running) {
        printf("\n---------------\n");
        printf("เมนูสินค้า\n");
        printf("1. น้ำโค้ก กระป๋องละ 10 บาท คงเหลือ (%d กระป๋อง)\n",  item1);
        printf("2. น้ำเขียว กระป๋องละ 12 บาท คงเหลือ (%d กระป๋อง)\n", item2);
        printf("3. อเมริกาโน่ 30 บาท คงเหลือ (%d แก้ว)\n", item3);
        printf("4. ลาเต้หวานเจี๊ยบ 35 บาท (%d แก้้ว)\n", item4);
        printf("5. เมล็ดทานตะวัน 13 บาท คงเหลือ (%d ถุง)\n", item5);
        printf("6. ถั่วแป๊ป 20 บาท คงเหลือ (%d ถุง)\n" , item6);
        printf("7. จิ้นส้มหมก 15 บาท (คงเหลือ %d ห่อ)\n" , item7);

        int choice ;
        int pick ;
        int price_item1 = 10 , price_item2 = 12 , price_item3 = 30 , price_item4 = 35  ,price_item5 = 13 ,price_item6 = 20 , price_item7 = 15 ;
        bool Exit = false;
        printf("คุณลูกค้าต้องการสินค้าไหน: ");
        scanf("%d" , & choice);
        printf("คุณลูกค้าต้องกา่รเลือกจำนวนเท่าไหร่: ");
        scanf("%d" , & pick);

        switch (choice) {
            case 1: 
            if (item1 == 0) {
                printf("sold out");
                running = 1;
                break;
            }

            else if (pick <= item1){
                total += price_item1 * pick ;
                item1 -= pick ;
                buy1 += pick ;
                printf("คุณทำการเลือกโค้ก %d กระป๋อง และคงเหลือ (%d กระป๋อง)\n" , pick , item1);
                printf("และราคารวมของคุณตอนนี้ = %d" , total);
                Exit = true ;
                break;
            }

            else if (pick > item1) {
                printf("สินค้าที่คุณลูกค้าเลือก มันมีจำนวนไม่เพียงพอ");
                running = 1;
                break;
            }


            case 2:
            if (item2 == 0) {
                printf("sold out");
                running = 1;
                break;
            }

            else if (pick <= item2){
                total += price_item2 * pick ;
                item2 -= pick ;
                buy2 += pick ;
                printf("คุณทำการเลือกน้ำเขียว %d กระป๋อง และคงเหลือ (%d กระป๋อง)\n" , pick , item2);
                printf("และราคารวมของคุณตอนนี้ = %d" , total);
                Exit = true ;
                break;
            }

            else if (pick > item2) {
                printf("สินค้าที่คุณลูกค้าเลือก มันมีจำนวนไม่เพียงพอ");
                running = 1;
                break;
            }

            case 3:
             if (item3 == 0) {
                printf("sold out");
                running = 1;
                break;
            }

            else if (pick <= item3){
                total += price_item3 * pick ;
                item3 -= pick ;
                buy3 += pick ;
                printf("คุณทำการเลือกอเมริกาโน่ %d แก้ว และคงเหลือ (%d แก้ว)\n" , pick , item3);
                printf("และราคารวมของคุณตอนนี้ = %d" , total);
                Exit = true ;
                break;
            }

            else if (pick > item3) {
                printf("สินค้าที่คุณลูกค้าเลือก มันมีจำนวนไม่เพียงพอ");
                running = 1;
                break;
            }

            case 4:
             if (item4 == 0) {
                printf("sold out");
                running = 1;
                break;
            }

            else if (pick <= item4){
                total += price_item4 * pick ;
                item1 -= pick ;
                buy4 += pick ;
                printf("คุณทำการเลือกลาเต้หวานเจี๊ยบ %d แก้ว และคงเหลือ (%d แก้ว)\n" , pick , item4);
                printf("และราคารวมของคุณตอนนี้ = %d" , total);
                Exit = true ;
                break;
            }

            else if (pick > item4) {
                printf("สินค้าที่คุณลูกค้าเลือก มันมีจำนวนไม่เพียงพอ");
                running = 1;
                break;
            }

            case 5:
             if (item5 == 0) {
                printf("sold out");
                running = 1;
                break;
            }

            else if (pick <= item5){
                total += price_item5 * pick ;
                item5 -= pick ;
                buy5 += pick ;
                printf("คุณทำการเลือกเมล็ดทานตะวัน %d ถุง และคงเหลือ (%d ถุง)\n" , pick , item5);
                printf("และราคารวมของคุณตอนนี้ = %d" , total);
                Exit = true ;
                break;
            }

            else if (pick > item5) {
                printf("สินค้าที่คุณลูกค้าเลือก มันมีจำนวนไม่เพียงพอ");
                running = 1;
                break;
            }

            case 6:
            if (item6 == 0) {
                printf("sold out");
                running = 1;
                break;
            }

            else if (pick <= item6){
                total += price_item6 * pick ;
                item1 -= pick ;
                buy6 += pick ;
                printf("คุณทำการเลือกถั่วแป๊ป %d ถุง และคงเหลือ (%d ถุง)\n" , pick , item6);
                printf("และราคารวมของคุณตอนนี้ = %d" , total);
                Exit = true ;
                break;
            }

            else if (pick > item6) {
                printf("สินค้าที่คุณลูกค้าเลือก มันมีจำนวนไม่เพียงพอ");
                running = 1;
                break;
            }

            case 7:
            if (item7 == 0) {
                printf("sold out");
                running = 1;
                break;
            }

            else if (pick <= item7){
                total += price_item7 * pick ;
                item1 -= pick ;
                buy7 += pick ;
                printf("คุณทำการเลือกจิ้นส้มหมก %d ห่อ และคงเหลือ (%d ห่อ)\n" , pick , item7);
                printf("และราคารวมของคุณตอนนี้ = %d" , total);
                Exit = true ;
                break;
            }

            else if (pick > item7) {
                printf("สินค้าที่คุณลูกค้าเลือก มันมีจำนวนไม่เพียงพอ");
                running = 1;
                break;
            }

            default :

                printf("กรุณาเลือกสินค้าที่มีอยู่");
                running = 1;
        }          

        if (Exit == true)  {
            char confirm2;
            bool Exit2 = true ;
                
            do {
                while (getchar() != '\n'); // เคลียร์ buffer ป้องกัน newline ค้าง
                printf("คุณลูกค้าต้องการเลือกสินค้าเพิ่มเติมไหม (Y/N)? : ");
                scanf(" %c", &confirm2);

            if (confirm2 == 'Y') {
                running = 1;
                Exit2 = false ;
            }

            else if (confirm2 == 'N') {
                running = 0;
                Exit2 = false ;
            }

            else {
                printf("กรูณาหรอก Y/N\n");
            }
            } while (Exit2) ;
        }
    }
    char confirm3 ;

    printf("คุณต้องลูกค้าต้องการที่จะแก้ไขสินค้าหรือไม่? : ");
    scanf (" %c" , & confirm3);



    if (confirm3 == 'Y' || confirm3 == 'y') {
        int condition2 = 1 ;
        while (condition2) {
        printf("เมนูสินค้าที่คุณได้สั่งซื้อ\n");
        printf("1. น้ำโค้ก กระป๋องละ 10 บาท คุณลูกค้าซื้อไป (%d กระป๋อง)\n",  buy1);
        printf("2. น้ำเขียว กระป๋องละ 12 บาท คุณลูกค้าซื้อไป (%d กระป๋อง)\n", buy2);
        printf("3. อเมริกาโน่ 30 บาท คุณลูกค้าซื้อไป (%d แก้ว)\n", buy3);
        printf("4. ลาเต้หวานเจี๊ยบ 35 บาท คุณลูกค้าซื้อไป (%d แก้้ว)\n", buy4);
        printf("5. เมล็ดทานตะวัน 13 บาท คุณลูกค้าซื้อไป (%d ถุง)\n", buy5);
        printf("6. ถั่วแป๊ป 20 บาท คุณลูกค้าซื้อไป (%d ถุง)\n" , buy6);
        printf("7. จิ้นส้มหมก 15 บาท คุณลูกค้าซื้อไป (คงเหลือ %d ห่อ)\n" , buy7);

        int pick2 ;
        int choice2 ;
        int Edit_price_item1 = 10 , Edit_price_item2 = 12 , Edit_price_item3 = 30 , Edit_price_item4 = 35  , Edit_price_item5 = 13 , Edit_price_item6 = 20 , Edit_price_item7 = 15 ;

        printf("คุณลูกค้าต้องการเลือกที่จะแก้ไขสินค้าชิ้นไหน 1-7? : ");
        scanf(" %d" , & choice2);
        printf("ลูกค้าต้องการ แก้ไขสินค้า ลำดับที่ %d กี่ชิ้น? : " , choice2);
        scanf(" %d" , & pick2);

        switch (choice2) {

            case 1 : 

                if (buy1 == 0) {
                    printf("คุณไม่ได้เลือกซื้อรายการสินค้านี้ไว้ตั้งแต่แรก รบกวรคุณลูกค้าเลือกใหม่นะครับผม");
                    condition2 = 1 ;
                    break;
                }
                else if (pick2 > buy1 ) {
                    printf("คุณได้ทำการซื้อน้ำโค้ก จำนวน %d ชิ้น กรุณาแก้ไขไม่มากกว่าจำนวนที่คุณซื้อ\n", buy1);
                    condition2 = 1 ;
                    break;
                }
                else if (pick2 <= buy1) {
                    printf("คุณลูกค้าได้ทำการแก้ไขรายการสินค้านี้เรียบร้อย โดย ยกเลิกทั้งหมด %d จำนวน" , pick2);
                    Edit_price_item1 * pick2 ;
                    total -= Edit_price_item1 ;
                    buy1 -= pick2 ;
                    item1 += pick2 ;
                    condition2 = 0 ;
                    break;
                }

            case 2 :
                
                if (buy2 == 0) {
                    printf("คุณไม่ได้เลือกซื้อรายการสินค้านี้ไว้ตั้งแต่แรก รบกวรคุณลูกค้าเลือกใหม่นะครับผม");
                    break;
                }
                else if (pick2 > buy2 ) {
                    printf("คุณได้ทำการซื้อน้ำเขียว จำนวน %d ชิ้น กรุณาแก้ไขไม่มากกว่าจำนวนที่คุณซื้อ\n", buy2);
                    break;
                }
                else if (pick2 <= buy2) {
                    printf("คุณลูกค้าได้ทำการแก้ไขรายการสินค้านี้เรียบร้อย โดย ยกเลิกทั้งหมด %d จำนวน" , pick2);
                    Edit_price_item2 * pick2 ;
                    total -= Edit_price_item2 ;
                    buy2 -= pick2 ;
                    pick2 += item2 ;
                    condition2 = 0 ;
                    break;
                }

            case 3 :
                
                if (buy3 == 0) {
                    printf("คุณไม่ได้เลือกซื้อรายการสินค้านี้ไว้ตั้งแต่แรก รบกวรคุณลูกค้าเลือกใหม่นะครับผม");
                    break;
                }
                else if (pick2 > buy3 ) {
                    printf("คุณได้ทำการซื้ออเมริกาโน่ จำนวน %d ชิ้น กรุณาแก้ไขไม่มากกว่าจำนวนที่คุณซื้อ\n", buy3);
                    break;
                }
                else if (pick2 <= buy3) {
                    printf("คุณลูกค้าได้ทำการแก้ไขรายการสินค้านี้เรียบร้อย โดย ยกเลิกทั้งหมด %d จำนวน" , pick2);
                    Edit_price_item3 * pick2 ;
                    total -= Edit_price_item3 ;
                    buy3 -= pick2 ;
                    pick2 += item3 ;
                    condition2 = 0  ;
                    break;
                }

            case 4 :
                
                if (buy4 == 0) {
                    printf("คุณไม่ได้เลือกซื้อรายการสินค้านี้ไว้ตั้งแต่แรก รบกวรคุณลูกค้าเลือกใหม่นะครับผม");
                    break;
                }
                else if (pick2 > buy4 ) {
                    printf("คุณได้ทำการซื้อลาเต้หวานเจี๊ยบ จำนวน %d ชิ้น กรุณาแก้ไขไม่มากกว่าจำนวนที่คุณซื้อ\n", buy4);
                    break;
                }
                else if (pick2 <= buy4) {
                    printf("คุณลูกค้าได้ทำการแก้ไขรายการสินค้านี้เรียบร้อย โดย ยกเลิกทั้งหมด %d จำนวน" , pick2);
                    Edit_price_item4 * pick2 ;
                    total -= Edit_price_item4 ;
                    buy4 -= pick2 ;
                    pick2 += item4 ;
                    condition2 = 0  ;
                }

            case 5 :
                
                if (buy5 == 0) {
                    printf("คุณไม่ได้เลือกซื้อรายการสินค้านี้ไว้ตั้งแต่แรก รบกวรคุณลูกค้าเลือกใหม่นะครับผม");
                    break;
                }
                else if (pick2 > buy5 ) {
                    printf("คุณได้ทำการซื้อเมล็ดทานตะวัน จำนวน %d ชิ้น กรุณาแก้ไขไม่มากกว่าจำนวนที่คุณซื้อ\n", buy5);
                    break;
                }
                else if (pick2 <= buy5) {
                    printf("คุณลูกค้าได้ทำการแก้ไขรายการสินค้านี้เรียบร้อย โดย ยกเลิกทั้งหมด %d จำนวน" , pick2);
                    Edit_price_item5 * pick2 ;
                    total -= Edit_price_item5 ;
                    buy5 -= pick2 ;
                    pick2 += item5 ;
                    condition2 = 0  ;
                    break;
                }

            case 6 : 

                if (buy6 == 0) {
                    printf("คุณไม่ได้เลือกซื้อรายการสินค้านี้ไว้ตั้งแต่แรก รบกวรคุณลูกค้าเลือกใหม่นะครับผม");
                    break;
                }
                else if (pick2 > buy6 ) {
                    printf("คุณได้ทำการซื้อถั่วแป๊ป จำนวน %d ชิ้น กรุณาแก้ไขไม่มากกว่าจำนวนที่คุณซื้อ\n", buy6);
                    break;
                }
                else if (pick2 <= buy6) {
                    printf("คุณลูกค้าได้ทำการแก้ไขรายการสินค้านี้เรียบร้อย โดย ยกเลิกทั้งหมด %d จำนวน" , pick2);
                    Edit_price_item6 * pick2 ;
                    total -= Edit_price_item6 ;
                    buy6 -= pick2 ;
                    pick2 += item6 ;
                    condition2 = 0  ;
                    break;
                }

            case 7 :

                if (buy3 == 0) {
                    printf("คุณไม่ได้เลือกซื้อรายการสินค้านี้ไว้ตั้งแต่แรก รบกวรคุณลูกค้าเลือกใหม่นะครับผม");
                    break;
                }
                else if (pick2 > buy7 ) {
                    printf("คุณได้ทำการซื้อจิ้นส้มหมก จำนวน %d ชิ้น กรุณาแก้ไขไม่มากกว่าจำนวนที่คุณซื้อ\n", buy7);
                    break;
                }
                else if (pick2 <= buy7) {
                    printf("คุณลูกค้าได้ทำการแก้ไขรายการสินค้านี้เรียบร้อย โดย ยกเลิกทั้งหมด %d จำนวน" , pick2);
                    Edit_price_item7 * pick2 ;
                    total -= Edit_price_item7 ;
                    buy7 -= pick2 ;
                    pick2 += item7 ;
                    condition2 = 0 ;
                    break;
                }

            default :
                printf("กรุณากรอก 1-7") ; 
        }

        if(condition2 == 0) {
        bool Exit3 = true ;
        do {
        char confirm4;
        while (getchar() != '\n'); // เคลียร์ buffer ป้องกัน newline ค้าง
        printf("ลูกค้าต้องการแก้ไขสินค้าอีกไหมํ(Y/N?)? : ");
        scanf(" %c" , & confirm4);

        if(confirm4 == 'Y' || confirm4 == 'y') {
            condition2 = 1 ;
            Exit3 = false ;
        }

        else if (confirm4 == 'N' || confirm4 == 'n'){
            condition2 = 0 ;
            Exit3 = false ;
        }
        else {
            printf("Please Enter only Y/N\n");
            Exit3 = true ;
        } 
        }while (Exit3) ; 
    }
    }
    }
    
        printf("ยอดรวมและเมนูสินค้าที่คุณสั่งซื้อ\n");

        if(buy1 > 0) {
            printf("คุณได้สั่งซื้อ โค้ก จำนวน %d ชิ้น\n" , buy1);
        }

        if(buy2 > 0) {
            printf("คุณได้สั่งซื้อ น้ำเขียว จำนวน %d ชิ้น\n" , buy2);
        }

        if(buy3 > 0) {
            printf("คุณได้สั่งซื้อ อเมริกาโน่ จำนวน %d ชิ้น\n" , buy3);
        }

        if(buy4 > 0) {
            printf("คุณได้สั่งซื้อ ลาเต้ หวานเจี๊ยบ จำนวน %d ชิ้น\n" , buy4);
        }

        if(buy5 > 0) {
            printf("คุณได้สั่งซื้อ เมล็ดทานตะวัน จำนวน %d ชิ้น\n" , buy5);
        }

        if(buy6 > 0) {
            printf("คุณได้สั่งซื้อ ถั่วแป๊ป จำนวน %d ชิ้น\n" , buy6);
        }

        if(buy7 > 0) {
            printf("คุณได้สั่งซื้อ จิ้นส้มหมก จำนวน %d ชิ้น\n" , buy7);
        }

        printf("และยอดรวมทั้งหมดของคุณลูกค้่าคือ %d" , total);

        char confirm4 ;
        bool confirmm4 = true ;

        do {

        printf("ลูกค้าต้องการชำระเงินไหม Y/N? : ");
        scanf(" %c" , & confirm4);
        
        int pay  = 0 ;
        int change = total - pay ;
        bool exit5 = true ;

        if(confirm4 == 'Y' || confirm4 == 'y'){
            
            do {
            printf("Please Give me some money : ");
            scanf("%d" , & pay);
            
            if (pay == change) {
                printf("ขอบคุณที่ใช้บริการครับ") ;
                exit5 = false ;
            } 


            else if (pay > change) {
                printf("Ur change = %d" , change) ;
                exit5 = false ;
            }

            else if (pay < change) {
                printf("เงินของลูกค้าไม่เพียงพอสำหรับการซื้อสินค้า กรุณากรอกใหม่");
                exit5 = true;
            }
        } while (exit5) ;
            

            confirmm4 = false ;
        }

        else if (confirm4 == 'N' || confirm4 == 'n'){
            confirmm4 = false ;

        }

        else {
            printf("กรอกเฉพาะ Y and N Please");
        }
        } while (confirmm4) ;
}
    
    return 0;
}
