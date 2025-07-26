/*
    จงเขียนโปรแกรมเพื่อแปลงหน่วยจาก "วัน" เป็น "วินาที"
    
1min = 60sec
60min = 3,600sec
24hr = 86,400sec

    Test case:
        Input Days : 
            8
    Output:
        8 days = 691200 seconds

    Test case:
        Input Days : 
            27
    Output:
        27 days = 2332800 seconds
*/

#include <stdio.h>

int main(){

    int hr = 86400;
    int day = 0;
    int sum;

    printf("input Days :\n");
    scanf("%d", &day);

    sum = day * hr;

    printf("calculated days to sec\n");
    printf("%d days = %d seconds", day, sum);


    return 0;
}