/*จงเขียนฟังก์ชันการตัดเกรดในแต่ละรายวิชาของนักเรียนจำนวน 3 คน โดยนักเรียนแต่ละคนจะมีข้อมูลดังต่อไปนี้ 
ชื่อ, นักศักศึกษา, คะแนนในวิชาที่ 1, คะแนนในวิชาที่ 2, คะแนนในวิชาที่ 3, คะแนนในวิชาที่ 4, คะแนนในวิชาที่ 5 แสดงได้ดังโครงสร้างข้อมูลต่อไปนี้*/

#include <stdio.h>
#include <string.h>

struct Student {
    char Name[20] ;
    char ID[5] ;
    float ScoreSub1 ;
    float ScoreSub2 ;
    float ScoreSub3 ;
    float ScoreSub4 ;
    float ScoreSub5 ;
} typedef S ;

int Calscore(float score);

int main (){

    S s[4];

    char  i = 0 ;
    float avg = 0, sum = 0;

    for ( i = 1 ; i <= 3 ; i++){//start for รับค่า
        printf("Student %d :\n",i);

        printf("Name :\n");
        scanf("%s",s[i].Name);

        printf("ID :\n");
        scanf("%s",s[i].ID);

        printf("Scores in Subject 1 :\n");
        scanf("%f",&s[i].ScoreSub1);

        printf("Scores in Subject 2 :\n");
        scanf("%f",&s[i].ScoreSub2);

        printf("Scores in Subject 3 :\n");
        scanf("%f",&s[i].ScoreSub3);

        printf("Scores in Subject 4 :\n");
        scanf("%f",&s[i].ScoreSub4);

        printf("Scores in Subject 5 :\n");
        scanf("%f",&s[i].ScoreSub5);

        
    }//end for รับค่า

    for ( i = 1 ; i <= 3 ; i++){//start for แสดงค่า
        printf("\nStudent %d :\n",i);

        printf("Name : %s\n",s[i].Name);
        printf("ID : %s\n",s[i].ID);
        printf("Scores : %.0f %.0f %.0f %.0f %.0f\n",   s[i].ScoreSub1,
                                                        s[i].ScoreSub2,
                                                        s[i].ScoreSub3,
                                                        s[i].ScoreSub4,
                                                        s[i].ScoreSub5
        );

        printf("Grade : ");
        Calscore(s[i].ScoreSub1);
        Calscore(s[i].ScoreSub2);
        Calscore(s[i].ScoreSub3);
        Calscore(s[i].ScoreSub4);
        Calscore(s[i].ScoreSub5);

        sum =   s[i].ScoreSub1 + 
                s[i].ScoreSub2 + 
                s[i].ScoreSub3 + 
                s[i].ScoreSub4 + 
                s[i].ScoreSub5; 

        avg = sum / 5 ;

        printf("\nAverage Scores : %.1f\n",avg);

    }//end for แสดงค่า
    
    return 0;
}

int Calscore(float score){

    if (score >=80){
        printf("A ");

    }else if (score >= 75 && score < 80){
        printf("B+ ");
    }

    else if (score >= 70 && score <= 75){
        printf("B ");
    }

    else if (score >= 65 && score <= 70){
        printf("C+ ");
    }

    else if (score >= 60 && score <= 65){
        printf("C ");
    }

    else if (score >= 55 && score <= 60){
        printf("D+ ");
    }

    else if (score >= 50 && score <= 55){
        printf("D ");
    }

    else{
        printf("F ");
    }
    
    return score;
}