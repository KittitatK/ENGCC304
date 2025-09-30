#include <stdio.h>
#include <stdbool.h>


int main(){

    //สต๊อกเงิน
    int stock_m1 = 100, stock_m2 = 100, stock_m5 = 100, stock_m10 = 100, stock_m20 = 100, stock_m50 = 100, stock_m100 = 100; //จำนวนเงิน แบงค์ทุกแบงค์ 100 ใบ เหรียญทุกเหรียญ 100 เหรียญ
    //เงินที่จ่าย
    int pay_m1 = 0, pay_m2 = 0, pay_m5 = 0, pay_m10 = 0, pay_m20 = 0, pay_m50 = 0, pay_m100 = 0;
    //เงินที่ต้องทอน
    int c_m1 = 0, c_m2 = 0, c_m5 = 0, c_m10 = 0, c_m20 = 0, c_m50 = 0, c_m100 = 0;

    int snack = 0, water = 0;
    //กดเลขเข้าหน้าเมนู
    int menu;

    //สต๊อกสินค้า
    int stock_sunflower = 30 , stock_bean = 30 , stock_jinmok = 30 ;
    int stock_coke = 30 , stock_greenwater = 30 , stock_americano = 30 , stock_latte = 30 ;

    //สต๊อกที่ซื้อ
    int buy_sunflower = 0, buy_bean = 0, buy_jinmok = 0;
    int buy_coke = 0, buy_greenwater = 0, buy_americano = 0, buy_latte = 0;

    //เพิ่มจำนวนสินค้า
    int sunflower_up = 0 , bean_up = 0 , jinmok_up = 0 ;
    int coke_up = 0 , greenwater_up = 0 , americano_up = 0 , latte_up = 0;

    //ลดจำนวนสินค้า
    int sunflower_down = 0 , bean_down = 0 , jinmok_down = 0 ;
    int coke_down = 0 , greenwater_down = 0 , americano_down = 0 , latte_down = 0;

    //คำนวณมั้ง
    int Total = 0;
    int restock = 0;

    //เพิ่มตัวเลขให้อยู่ในรายการสรุปสินค้า
    //int i1 = 0, i2 = 0, i3 = 0, i4 = 0, i5 = 0, i6 = 0, i7 =0;
    int i = 1;
    //ถามว่าต้องการแก้ไขสินค้าตอนสรุปยอด
    char fix_catalog ;


    int change_catalog = 0;
    char catalog_updowncan = 0;

    int needmore = 0;

    
   



    printf("ตะพาบลอย\n");


    
    while(1){
        printf("\nกดเลข 0 เพื่อเข้าหน้าเมนู\n");
        scanf("%d", &menu);

        if (menu != 0){
            printf("\nโปรดกด เลข 0 เพื่อไปหน้าเมนู!!!\n");
            while(getchar() != '\n');
            continue;
                
        }

        printf("\n------------------------\n");
        printf("ตะพาบลอย\n");
        break;

    }


        
        /*printf("\nDrink\n");
        printf("\n- โค้กกระป๋อง = 10 บาท\n");
        printf("- น้ำเขียว กระป๋อง = 12 บาท\n");
        printf("- อเมริกาโน่ กระป๋อง = 30 บาท\n");
        printf("- ลาเต้ หวานเจี๊ยบ = 35 บาท\n"); 
        printf("\nSnack\n");
        printf("\n- เมล็ดทานตะวัน = 13 บาท\n");
        printf("- ถั่วแปบ = 20 บาท\n");
        printf("- จิ้นส้มหมก = 15 บาท\n");*/
    
        
    
    
        
    while (1){//start wjile 1
        char choice;
        printf("\nคุณต้องการเลือกสินค้าประเภทไหน\n");
        printf("\n  น้ำWater  (1)  ");
        printf("\n  ขนมSnack (2)  \n");
        printf("\n  ยกเลิกรายการทั้งหมด/ออก (*)\n  ");
        printf("  สรุปคำสั่งซื้อ(0)  \n");
        printf("\n=== เลือกหมวดสินค้า ===\n");
        scanf(" %c", &choice );

        if (choice == 's' || choice == 'S' || choice == '1'){
            int snackChoice;
            printf("\nSnack\n");
            printf("\n- 1. เมล็ดทานตะวัน = 13 บาท\n");
            printf("-   2. ถั่วแปบ = 20 บาท\n");
            printf("-   3. จิ้นส้มหมก = 15 บาท\n");
            printf("\nกรอกหมายเลข(1-3)เพื่อเลือกสินค้า : \n");
            scanf(" %d", &snackChoice );
                            
            switch(snackChoice){    
                case 1:
                    if ( stock_sunflower >0){
                        printf("เมล็ดทานตะวัน 13 บาท");
                        snack += 13;
                        stock_sunflower --;
                        buy_sunflower ++;
                    }else{
                        printf("เจ๊สี่ ลาเต้ หวานเจี๊ยบ หมด เติมของหน่อย");  
                    }
                    break;

                case 2:
                    if ( stock_bean >0){
                        printf("ถั่วแปบ = 20 บาท");
                        snack += 20;
                        stock_bean --;
                        buy_bean ++;
                    }else{
                        printf("เจ๊สี่ ลาเต้ หวานเจี๊ยบ หมด เติมของหน่อย");  
                    }
                    break;

                case 3:
                    if ( stock_jinmok >0){
                        printf("จิ้นส้มหมก = 15 บาท");
                        snack += 15;
                        stock_jinmok --;
                        buy_jinmok ++;
                    }else{
                        printf("เจ๊สี่ ลาเต้ หวานเจี๊ยบ หมด เติมของหน่อย");  
                    }
                    break;

                default:
                    printf("ไม่มีรายการนี้โปรดเลือกใหม่");
                    break;
                            
            }

        }else if (choice == 'w' || choice == 'W'|| choice == '2'){
                int drinkChoice;
                printf("\nDrink\n");
                printf("\n- 1. โค้กกระป๋อง = 10 บาท\n");
                printf("-   2. น้ำเขียว กระป๋อง = 12 บาท\n");
                printf("-   3. อเมริกาโน่ กระป๋อง = 30 บาท\n");
                printf("-   4. ลาเต้ หวานเจี๊ยบ = 35 บาท\n"); 
                printf("\nกรอกหมายเลข(1-4)เพื่อเลือกสินค้า : \n");
                printf("");
                scanf(" %d", &drinkChoice );

                switch(drinkChoice){
                    case 1:
                        if (stock_coke >0){
                            printf("โค้กกระป๋อง = 10 บาท");
                            water += 10;
                            stock_coke--;
                            buy_coke++;
                        }else{
                            printf("เจ๊สี่ โค้ก หมด เติมของหน่อย");
                        }
                        break;

                    case 2:
                        if ( stock_greenwater >0){
                            printf("น้ำเขียว กระป๋อง = 12 บาท");
                            water += 12;
                            stock_greenwater--;
                            buy_greenwater++;
                        }else{
                            printf("เจ๊สี่ น้ำเขียว หมด เติมของหน่อย");
                        }
                        break;

                    case 3:
                        if ( stock_americano >0){
                            printf("อเมริกาโน่ กระป๋อง = 30 บาท");
                            water += 30;
                            stock_americano--;
                            buy_americano++;
                        }else{
                        printf("เจ๊สี่ อเมริกาโน่ หมด เติมของหน่อย");  
                        }
                        break;

                    case 4:
                        if ( stock_latte >0){
                            printf("ลาเต้ หวานเจี๊ยบ = 35 บาท");
                            water += 35;
                            stock_latte--;
                            buy_latte++;
                        }else{
                            printf("เจ๊สี่ ลาเต้ หวานเจี๊ยบ หมด เติมของหน่อย");  
                        }
                        break;

                    default:
                            printf("ไม่มีรายการนี้โปรดเลือกใหม่");
                            break;
                }
        }
                        





        if (choice == '*'){//ยกเลิกรายการสินค้า
            printf("ขอบคุณที่ใช้บริการ");
            break;
        }


        int i1 = 1 , i2 = 2 , i3 = 3 , i4 = 4 , i5 = 5 , i6 = 6 , i7 = 7;

        if(choice == '0'){ //สรุปคำสั่งซื้อ
            printf("\n=== สรุปรายการสินค้า ===\n");
            
                if (buy_coke >0){
                    printf("( %d )  โค้ก                 .- %d จำนวน  ราคา %d บาท\n", i1, buy_coke, buy_coke * 10);
                }if (buy_greenwater >0){
                    printf("( %d )  น้ำเขียว               .- %d จำนวน  ราคา %d บาท\n", i2, buy_greenwater, buy_greenwater * 12);
                }if (buy_americano >0){
                    printf("( %d )  อเมริกาโน่             .- %d จำนวน  ราคา %d บาท\n", i3, buy_americano, buy_americano * 30);
                }if (buy_latte >0){
                    printf("( %d )  ลาเต้                 .- %d จำนวน  ราคา %d บาท\n", i4, buy_latte, buy_latte * 35);
                }if (buy_sunflower >0){
                    printf("( %d )  เมล็ดทานตะวัน          .- %d จำนวน  ราคา %d บาท\n", i5, buy_sunflower, buy_sunflower * 13);
                }if (buy_bean >0){
                    printf("( %d )  ถั่วแปบ                .- %d จำนวน  ราคา %d บาท\n", i6, buy_bean, buy_bean * 20);
                }if (buy_jinmok >0){
                    printf("( %d )  จิ้นส้มหมก              .- %d จำนวน  ราคา %d บาท\n", i7, buy_jinmok, buy_jinmok * 15);
                }
                   /*else{
                    printf("\nคุณยังไม่ได้เลือกรายการโปรดเลือกรายการก่อน\n");
                        
                }*/
                    

            while(1){ //start while 2      
                printf("ต้องการเปลี่ยนแปลงสินค้าไหม Y(1) / N(0)  :  ");
                if (scanf("%d", &change_catalog) != 1){
                    while(getchar() != '\n'); // clear buffer
                    continue;
                }
                //scanf("%d", &change_catalog);

                fix_catalog = change_catalog;

                if (change_catalog == 1) {
                    

                    if (buy_coke >0){
                        printf("( %d )  โค้ก                 .- %d จำนวน  ราคา %d บาท\n", i1 , buy_coke, buy_coke * 10);
                    }if (buy_greenwater >0){
                        printf("( %d )  น้ำเขียว               .- %d จำนวน  ราคา %d บาท\n", i2 , buy_greenwater, buy_greenwater * 12);
                    }if (buy_americano >0){
                        printf("( %d )  อเมริกาโน่             .- %d จำนวน  ราคา %d บาท\n", i3 , buy_americano, buy_americano * 30);
                    }if (buy_latte >0){
                        printf("( %d )  ลาเต้                 .- %d จำนวน  ราคา %d บาท\n", i4 , buy_latte, buy_latte * 35);
                    }if (buy_sunflower >0){
                        printf("( %d )  เมล็ดทานตะวัน          .- %d จำนวน  ราคา %d บาท\n", i5 , buy_sunflower, buy_sunflower * 13);
                    }if (buy_bean >0){
                        printf("( %d )  ถั่วแปบ                .- %d จำนวน  ราคา %d บาท\n", i6 , buy_bean, buy_bean * 20);
                    }if (buy_jinmok >0){
                        printf("( %d )  จิ้นส้มหมก              .- %d จำนวน  ราคา %d บาท\n", i7 , buy_jinmok, buy_jinmok * 15);
                    }
                }    

                    if ( fix_catalog == 'Y' || fix_catalog == 'y' ||change_catalog == 1){//start if
                            int i  ;
                            
                                printf("เลือกหมายเลขสินค้าที่คุณต้องการเปลี่ยนแปลง : ");
                                //scanf("%d", &i);
                                //while(getchar() != '\n'); // เคลียร์ buffer


                                if (scanf("%d", &i) != 1) {
                                    printf("กรุณากรอกเป็นตัวเลข!\n");
                                    while(getchar() != '\n'); // เคลียร์ buffer
                                    continue;
                                }

                                
                                //1/
                                    if ( i == 1/*buy_coke*/ ){
                                        printf("\nคุณเลือก ( โค้ก ) \n");
                                        printf("คุณต้องการ เพิ่ม(+) , ลด(-) หรือ ยกเลิกสินค้า(*)  :  ");
                                        scanf(" %c", &catalog_updowncan);

                                        if ( catalog_updowncan == '+'){
                                            printf("คุณต้องการเพิ่มกี่จำนวน : ");
                                            scanf("%d",&coke_up);
                                            //coke_up += buy_coke;
                                            buy_coke += coke_up;
                                            stock_coke -= coke_up;
                                         
                                            

                                            printf("%d", buy_coke);
                                            

                                        }else if ( catalog_updowncan == '-' ){
                                            printf("คุณต้องการลดกี่จำนวน : ");
                                            scanf("%d",&coke_down);
                                        
                                            buy_coke -= coke_down;
                                            stock_coke += coke_down;
                              

                                            printf("จำนวนที่ ซื้อ %d จำนวน\n", buy_coke);
                                            printf("คงเหลือใน สต๊อก %d จำนวน", stock_coke);

                                           
                                    

                                        }else if ( catalog_updowncan == '*' ){
                                            stock_coke += buy_coke;
                                            buy_coke = 0 ;
                                            
                                            printf("%d", buy_coke);
                                            printf("คงเหลือใน สต๊อก %d จำนวน", stock_coke);
                                            
                                        }    
                                        
                                        printf("แก้ไขเรียบร้อย! ตอนนี้ซื้อโค้ก %d ชิ้น\n", buy_coke);
                                        continue;
                                    }


                                //2/
                                    if ( i == 2/*buy_greenwater*/ ){
                                        printf("\nคุณเลือก ( น้ำเขียว ) \n");
                                        printf("คุณต้องการ เพิ่ม(+) , ลด(-) หรือ ยกเลิกสินค้า(*)  :  ");
                                        scanf(" %c", &catalog_updowncan);

                                            if ( catalog_updowncan == '+'){
                                                printf("คุณต้องการเพิ่มกี่จำนวน : ");
                                                scanf("%d",&greenwater_up);
                                            // greenwater_up += buy_greenwater;
                                                buy_greenwater += greenwater_up;
                                                stock_greenwater -= greenwater_up;

                                                printf("%d", buy_greenwater);
                                            
                                

                                            }else if ( catalog_updowncan == '-' ){
                                                printf("คุณต้องการลดกี่จำนวน : ");
                                                scanf("%d",&greenwater_down);
                                                //greenwater_down -= buy_greenwater; 
                                                buy_greenwater -= greenwater_down; 
                                                stock_greenwater += greenwater_down;

                                                printf("%d", buy_greenwater);
                                              
                                    

                                            }else if ( catalog_updowncan == '*'){
                                                stock_greenwater += buy_greenwater;
                                                buy_greenwater = 0;
                                                printf("%d", buy_greenwater);
                                               
                                        
                                            }

                                            printf(" แก้ไขเรียบร้อย! ตอนนี้ซื้อน้ำเขียว %d ชิ้น\n", buy_greenwater);
                                            continue;
                                    }
                                

                                //3/
                                    if ( i == 3/*buy_americano*/ ){
                                        printf("\nคุณเลือก ( อเมริกาโน่ ) \n");
                                        printf("คุณต้องการ เพิ่ม(+) , ลด(-) หรือ ยกเลิกสินค้า(*)  :  ");
                                        scanf(" %c", &catalog_updowncan);

                                            if ( catalog_updowncan == '+'){
                                                printf("คุณต้องการเพิ่มกี่จำนวน : ");
                                                scanf("%d",&americano_up);
                                                //americano_up += buy_americano;
                                                buy_americano += americano_up;
                                                stock_americano -= americano_up;

                                                printf("%d", buy_americano);
                                      
                                    

                                            }else if ( catalog_updowncan == '-' ){
                                                printf("คุณต้องการลดกี่จำนวน : ");
                                                scanf("%d",&americano_down);

                                                buy_americano -= americano_down; 
                                                stock_americano += americano_down;

                                                printf("%d", buy_americano);
                                   
                                        

                                            }else if ( catalog_updowncan == '*' ){
                                                stock_americano += buy_americano;
                                                buy_americano = 0;
                                                printf("%d", buy_americano);
                                              
                                        
                                            } 
                                            printf(" แก้ไขเรียบร้อย! ตอนนี้ซื้ออเมริกาโน่ %d ชิ้น\n", buy_americano);
                                            continue;    
                                    }
                                        
                                        
                                //4   
                                    if ( i == 4/*buy_latte*/ ){
                                        printf("\nคุณเลือก ( ลาเต้ ) \n");
                                        printf("คุณต้องการ เพิ่ม(+) , ลด(-) หรือ ยกเลิกสินค้า(*)  :  ");
                                        scanf(" %c", &catalog_updowncan);

                                            if ( catalog_updowncan == '+'){
                                                printf("คุณต้องการเพิ่มกี่จำนวน : ");
                                                scanf("%d",&latte_up);
                                                //latte_up += buy_latte;
                                                buy_latte += latte_up;
                                                stock_latte -= latte_up;

                                                printf("%d", buy_latte);
                                                
                                        

                                            }else if ( catalog_updowncan == '-' ){
                                                printf("คุณต้องการลดกี่จำนวน : ");
                                                scanf("%d",&latte_down);
                                                //latte_down -= buy_latte; 
                                                buy_latte -= latte_down;
                                                stock_latte += latte_down;

                                                printf("%d", buy_latte);
                                                
                                        

                                            }else if ( catalog_updowncan == '*'){
                                                stock_latte += buy_latte;
                                                buy_latte = 0;
                                                printf("%d", buy_latte);
                                               
                                        
                                            }
                                            printf(" แก้ไขเรียบร้อย! ตอนนี้ซื้อลาเต้ %d ชิ้น\n", buy_latte);
                                            continue;
                                    }


                                //5
                                    if ( i == 5/*buy_sunflower*/ ){
                                        printf("\nคุณเลือก ( เมล็ดทานตะวัน ) \n");
                                        printf("คุณต้องการ เพิ่ม(+) , ลด(-) หรือ ยกเลิกสินค้า(*)  :  ");
                                        scanf(" %c", &catalog_updowncan);

                                            if ( catalog_updowncan == '+'){
                                                printf("คุณต้องการเพิ่มกี่จำนวน : ");
                                                scanf("%d",&sunflower_up);
                                                //sunflower_up += buy_sunflower;
                                                buy_sunflower += sunflower_up;
                                                stock_sunflower -= sunflower_up;
                                                
                                                printf("%d", buy_sunflower);
                                                break;
                                        

                                            }else if ( catalog_updowncan == '-' ){
                                                printf("คุณต้องการลดกี่จำนวน : ");
                                                scanf("%d",&sunflower_down);
                                                //sunflower_down -= buy_sunflower; 
                                                buy_sunflower -= sunflower_down;
                                                stock_sunflower += sunflower_down;

                                                printf("%d", buy_sunflower);
                                                break;
                                            

                                            }else if ( catalog_updowncan == '*'){
                                                stock_sunflower += buy_sunflower;
                                                buy_sunflower = 0 ;
                                                printf("%d", buy_sunflower);
                                                break;
                                        
                                            }
                                            printf(" แก้ไขเรียบร้อย! ตอนนี้ซื้อเมล็ดทานตะวัน %d ชิ้น\n", buy_sunflower);
                                            continue;
                                    }


                                //6
                                    if ( i == 6/*buy_bean*/ ){//start if
                                        printf("\nคุณเลือก ( ถั่วแปบ ) \n");
                                        printf("คุณต้องการ เพิ่ม(+) , ลด(-) หรือ ยกเลิกสินค้า(*)  :  ");
                                        scanf(" %c", &catalog_updowncan);

                                            if ( catalog_updowncan == '+'){
                                                printf("คุณต้องการเพิ่มกี่จำนวน : ");
                                                scanf("%d",&bean_up);
                                                //bean_up += buy_bean;
                                                buy_bean += bean_up;
                                                stock_bean -= bean_up;

                                                printf("%d", buy_bean);
                                              
                                        

                                            }else if ( catalog_updowncan == '-' ){
                                                printf("คุณต้องการลดกี่จำนวน : ");
                                                scanf("%d",&bean_down);
                                                //bean_down -= buy_bean; 
                                                buy_bean -= bean_down;
                                                stock_bean += bean_down;

                                                printf("%d", buy_bean);
                                         
                                            

                                            }else if ( catalog_updowncan == '*'){
                                                stock_bean += buy_bean;
                                                buy_bean = 0 ;
                                                printf("%d", buy_bean);
                                     
                                            
                                            }
                                            printf(" แก้ไขเรียบร้อย! ตอนนี้ซื้อถั่วแปบ %d ชิ้น\n", buy_bean);
                                            continue;
                                    }//end if


                                //7
                                    if ( i == 7/*buy_jinmok*/ ){//star if
                                        printf("\nคุณเลือก ( จิ้นส้มหมก )\n");
                                        printf("คุณต้องการ เพิ่ม(+) , ลด(-) หรือ ยกเลิกสินค้า(*)  :  ");
                                        scanf(" %c", &catalog_updowncan);

                                            if ( catalog_updowncan == '+'){
                                                printf("คุณต้องการเพิ่มกี่จำนวน : ");
                                                scanf("%d",&jinmok_up);
                                                //jinmok_up += buy_jinmok;
                                                buy_jinmok += jinmok_up;
                                                stock_jinmok -= jinmok_up;

                                                printf("%d", buy_jinmok);
                                               
                                            

                                            }else if ( catalog_updowncan == '-' ){
                                                printf("คุณต้องการลดกี่จำนวน : ");
                                                scanf("%d",&jinmok_down);
                                                //jinmok_down -= buy_jinmok; 
                                                buy_jinmok -= jinmok_down;
                                                stock_jinmok += jinmok_down;

                                                printf("%d", buy_jinmok);
                                              
                                                

                                            }else if ( catalog_updowncan == '*'){
                                                stock_jinmok += buy_jinmok;
                                                buy_jinmok = 0;
                                                printf("%d", buy_jinmok);
                                             
                                                
                                            }
                                            printf(" แก้ไขเรียบร้อย! ตอนนี้ซื้อจิ้นส้มหมก %d ชิ้น\n", buy_jinmok);
                                            continue;
                                    }//end if
                                        
                    }//end if
                        

                    if ( fix_catalog == 'N' || fix_catalog == 'n' || fix_catalog == 0){
                        int i = 1;

                        if (buy_coke >0){
                            printf("( %d )  โค้ก                 .- %d จำนวน  ราคา %d บาท\n", i1 , buy_coke, buy_coke * 10);
                        }if (buy_greenwater >0){
                            printf("( %d )  น้ำเขียว               .- %d จำนวน  ราคา %d บาท\n", i2 , buy_greenwater, buy_greenwater * 12);
                        }if (buy_americano >0){
                            printf("( %d )  อเมริกาโน่             .- %d จำนวน  ราคา %d บาท\n", i3 , buy_americano, buy_americano * 30);
                        }if (buy_latte >0){
                            printf("( %d )  ลาเต้                 .- %d จำนวน  ราคา %d บาท\n", i4 , buy_latte, buy_latte * 35);
                        }if (buy_sunflower >0){
                            printf("( %d )  เมล็ดทานตะวัน          .- %d จำนวน  ราคา %d บาท\n", i5 , buy_sunflower, buy_sunflower * 13);
                        }if (buy_bean >0){
                            printf("( %d )  ถั่วแปบ                .- %d จำนวน  ราคา %d บาท\n", i6 , buy_bean, buy_bean * 20);
                        }if (buy_jinmok >0){
                            printf("( %d )  จิ้นส้มหมก              .- %d จำนวน  ราคา %d บาท\n", i7 , buy_jinmok, buy_jinmok * 15);
                        }
                        printf("\nสินค้าทั้งหมดราคา = %d บาท", snack + water);
                            while(getchar() != '\n');
                            break;
                    }

            }//end while 2

            //int total = snack + water ;

            printf("\nคุณต้องชำระเงินหรือไม่ Y(1) / N(0) : ");
            scanf("%d", &choice);

            if(choice == 'N' || choice == 'n' || choice == 0){//ยกเลิกรายการสินค้า
                printf("ขอบคุณที่ใช้บริการ");
                break;
            }//end if ยกเลิกสินค้า 

            int total = 0;

                total += buy_coke * 10;
                total += buy_greenwater * 12;
                total += buy_americano * 30;
                total += buy_latte * 35;
                total += buy_sunflower * 13;
                total += buy_bean * 20;
                total += buy_jinmok * 15;

            if(choice == 'Y' || choice == 'y' || choice == 1){//ยืนยันชำระเงิน
                printf("\nสินค้าทั้งหมดราคา = %d บาท", total);

                int paid;
                int change;

                //change = paid - total;
                change = total - paid;

                printf("\nคุณชำระเงิน\n");

                while(paid < total){
                               
                        printf(" \n1 บาท จำนวน : ");
                        scanf("%d", &pay_m1);
                        stock_m1 += pay_m1;

                        printf(" 2 บาท จำนวน : ");
                        scanf("%d", &pay_m2);
                        stock_m2 += pay_m2;

                        printf(" 5 บาท จำนวน : ");
                        scanf("%d", &pay_m5);
                        stock_m5 += pay_m5;

                        printf(" 10 บาท จำนวน : ");
                        scanf("%d", &pay_m10);
                        stock_m10 += pay_m10;

                        printf(" 20 บาท จำนวน : ");
                        scanf("%d", &pay_m20);
                        stock_m20 += pay_m20;

                        printf(" 50 บาท จำนวน : ");
                        scanf("%d", &pay_m50);
                        stock_m50 += pay_m50;

                        printf(" 100 บาท จำนวน : ");
                        scanf("%d", &pay_m100);
                        stock_m100 += pay_m100;

                        paid = (pay_m1 * 1) + (pay_m2 * 2) + (pay_m5 * 5) + (pay_m10 * 10) + (pay_m20 * 20) + (pay_m50 * 50) + (pay_m100 * 100);
                                            

                        if ( paid < total ){
                            printf(" จำนวนเงินไม่เพีนงพอโปรดใส่เพิ่มอีก %d บาท", total - paid);
                        }
                }//end while

                if ( paid == total ){
                    printf("คุณชำระเงิน %d บาท ครบแล้ว",paid);
                    printf(" ขอบคุณที่ใช้บริการ");
                }
                    
                if ( paid > total ){// if ทอนเงิน
                    printf("คุณชำระเงิน %d บาท ",paid);
                    printf(" \nจำนวนเงินที่ต้องทอน %d บาทn", change);
                
                    while( change >= 100 && stock_m100 > 0){
                        change -= 100;
                        stock_m100 --;
                        c_m100 ++;
                        
                    }while( change >= 50 && stock_m50 > 0){
                        change -= 50; 
                        stock_m50 --;
                        c_m50 ++;
                    
                    }while( change >= 20 && stock_m20 > 0){
                        change -= 20; 
                        stock_m20 --;
                        c_m20 ++;
                        
                    }while( change >= 10 && stock_m10 > 0){
                        change -= 10;
                        stock_m10 --;
                        c_m10 ++;
                    
                    }while( change >= 5 && stock_m5 > 0){
                        change -= 5;
                        stock_m5 --;
                        c_m5 ++;
                        
                    }while( change >= 2 && stock_m2 > 0){
                        change -= 2;
                        stock_m2 --;
                        c_m2 ++;
                    
                    }while( change >= 1 && stock_m1 > 0){
                        change -= 1;
                        stock_m1 --;
                        c_m1 ++;
                    }
                    
                    printf("จำนวนธนบัตร/เหรียญที่ทอน");

                    if(c_m100>0){
                        printf(" แบงค์ 100 บาท จำนวน %d ใบ\n", c_m100);

                    }if(c_m50>0){ 
                        printf(" แบงค์ 50  บาท จำนวน %d ใบ\n", c_m50);

                    }if(c_m20>0){ 
                        printf(" แบงค์ 20  บาท จำนวน %d ใบ\n", c_m20);

                    }if(c_m10>0){
                        printf(" เหรียญ 10 บาท จำนวน %d เหรียญ\n", c_m10);

                    }if(c_m5>0){
                        printf(" เหรียญ 5  บาท จำนวน %d เหรียญ\n", c_m5);

                    }if(c_m2>0){
                        printf(" เหรียญ 2  บาท จำนวน %d เหรียญ\n", c_m2);

                    }if(c_m1>0){
                        printf(" เหรียญ 1  บาท จำนวน %d เหรียญ\n", c_m1);
                    }else{
                        printf("เงินทอนหมด");
                    }

                }//end if ทอนเงิน
                                    
                    

                
            
            }//end if Y ยืนยันชำระเงิน

                
                    

                    break;
        }//end if สินค้า

         
            



    }//end while 1
        
        
    

        //printf("\nสินค้าทั้งหมดราคา = %d บาท", snack + water );
    

    return 0;
}