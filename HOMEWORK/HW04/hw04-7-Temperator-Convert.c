/*
    จงเขียนโปรแกรมเพื่อแปลงอุณหภูมิ โดยรับมาจากผู้ใช้เป็นองศาเซลเซียส และแปลงเป็นฟาเรนไฮต์
    
    Test case:
        User input :
            22
    Output:
        22 degree Celsius = 71.6 degree Fahrenheit

    Test case:
        User input :
            36
    Output:
        36 degree Celsius = 96.8 degree Fahrenheit
*/

#include <stdio.h>

int main(){

    int C;
    float F;

    printf("โปรแกรมเพื่อแปลงอุณหภูมิ องศาเซลเซียส และแปลงเป็นฟาเรนไฮต์\n");
    printf("User input temperater(C) : ");
    scanf("%d", &C);
 
    F = (C * 9.0/5)+32;

    printf("%d degree Celsius = %.1f degree Fahrenheit", C, F);

    return 0 ;
}