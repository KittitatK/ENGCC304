#include <stdio.h>

int main() {//start func
    int Matrix1[5][5], Matrix2[5][5] ,Matrix3[5][5] , Matrix4[5][5] ;
    int rows1, cols1, rows2, cols2, rows3, cols3, rows4, cols4 ;
    int i, j, k ;
 
    printf("Enter Matrix1 : \n");
    printf("Enter number rows and columns : ");
    scanf("%d %d", &rows1, &cols1);

    for ( i = 0; i < rows1; i++ ){//start for                   
        for ( j = 0; j < cols1; j++ ){//start for                    
            printf("Enter [%d %d] value : ", i , j );
            scanf("%d", &Matrix1[i][j]);
        }//end for                                                        
    }//end for                                                     
 
    printf("\nEnter Matrix2 : \n");
    printf("Enter number rows and columns : ");
    scanf("%d %d", &rows2, &cols2);

    for ( i = 0; i < rows2; i++ ){//start for                                    
        for ( j = 0; j < cols2; j++ ){//start for                               
            printf("Enter [%d %d] value : ", &i , &j );
            scanf("%d", &Matrix2[i][j]);
        }//end for                                                      
    }//end for                                                              
 
    printf("\nMatrix1 : \n");

    for ( i = 0; i < rows1; i++ ){//start for                                     
        for ( j = 0; j < cols1; j++ ){//start for                    
            printf("%d ", Matrix1[i][j]);
        }//end for                                               
    }//end for

    printf("\n");
    printf("\nMatrix2 : \n");

    for ( i = 0; i < rows2; i++ ){//start for
        for ( j = 0; j < cols2; j++ ){//start for
            printf("%d ", Matrix2[i][j]);
        }//end for
        printf("\n");
    }

    rows3 = cols1;
    cols3 = rows1;

    for ( i = 0; i < rows3; i++ ){//start for
        for ( j = 0 ; j < cols3 ; j++ ){//start for
            Matrix3[i][j] = Matrix1[j][i];
        }//end for
    }//end for
    
    printf("\nTranspose of Matrix1 is : \n");

    for ( i = 0; i < rows3; i++ ){//start for
        for ( j = 0; j < cols3; j++ ){//start for
            printf("%d ", Matrix3[i][j]);
        }//end for
        printf("\n");
    }//end for
    
    if(cols1 != rows2){//start if
        printf("\nMatrix1 and Matrix2 connot multiply\n");
    }//end for
    
    else{//start else
        rows4 = rows1;
        cols4 = cols2;
    }//end else
    
    for ( i = 0; i < rows4; i++ ){//start for

        for ( j = 0; j < cols4; j++ ){//start for
            Matrix4[i][j] = 0;
        }//end for

        for ( k = 0; k < cols1; k++ ){//start for
            Matrix4[i][j] += Matrix1[i][k] * Matrix2[k][j];    
            }//end for
    }//end for

    printf("\nMatrix1 x Matrix2 is : \n");

    for ( i = 0; i < rows4; i++ ){//start for
        for ( j = 0; j < cols4; j++ ){//start for
            printf("%d ", Matrix4[i][j]);
        }//end for
    }//end for
            printf("\n");

    return 0 ;

}//end func