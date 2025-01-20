#include<stdio.h>
 int main() {

int A[10][10],transpose[10][10];
  int i,j;
  int n,m;

 printf("Enter the number of row and colum:");
 scanf("%d %d",&n,&m);


  for(i=0;i<n;i++){

    for(j=0;j<m;j++){
        printf("MATRIX [%d] [%d]=",i,j);
         scanf("%d",&A[i][j]);

    } printf("\n");
  }


//TRANSPOSE
 for(i=0;i<n;i++){

    for(j=0;j<m;j++){

        transpose[j][i]=A[i][j];

    } printf("\n");
  }


 //print of A matrix
    for(i=0;i<n;i++){

    for(j=0;j<m;j++){

         printf("%d \t",A[i][j]);
         }
     printf("\n"); }


      //print of transpose matrix

      printf("\n");
    for(i=0;i<n;i++){

    for(j=0;j<m;j++){

         printf("%d \t",transpose[i][j]);
         }
     printf("\n"); }





    return 0;
 }
