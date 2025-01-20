#include<stdio.h>
 int main() {

 int A[10][10],B[10][10],C[10][10];
  int i,j;
  int ROW,COL;


 printf("Enter the number of row and colum:");
 scanf("%d %d",&ROW,&COL);


  //SCAN OF A MATRIX
  for(i=0;i<ROW;i++){

    for(j=0;j<COL;j++){
        printf("MATRIX [%d] [%d]=",i,j);
         scanf("%d",&A[i][j]);

    } printf("\n");
  }

  //SCAN FOR B MATRIX
   for(i=0;i<ROW;i++){

    for(j=0;j<COL;j++){
        printf("MATRIX [%d] [%d]=",i,j);
         scanf("%d",&B[i][j]);

    } printf("\n");
  }

    //PRINTING A MATRIX

  printf("A =");
    for(i=0;i<ROW;i++){
     printf("\t");

    for(j=0;j<COL;j++){

         printf("%d \t",A[i][j]);
         }
     printf("\n"); }

     //PRINTING B MATRIX

     printf("B =");
    for(i=0;i<ROW;i++){
     printf("\t");

    for(j=0;j<COL;j++){

         printf("%d \t",B[i][j]);
         }
     printf("\n"); }


      for(i=0;i<ROW;i++){

    for(j=0;j<COL;j++){

     C [i][j]=A[i][j] + B[i][j];

         }
    }
       //PRINTING C MATRIX

       printf("A+B=");

    for(i=0;i<ROW;i++){
     printf("\t");

    for(j=0;j<COL;j++){

         printf("%d \t",C[i][j]);
         } printf("\n");
      printf("\t"); }

    return 0;
 }
