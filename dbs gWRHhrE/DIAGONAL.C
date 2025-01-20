#include<stdio.h>
 int main() {

int A[10][10];
  int i,j;
  int n,m,sum=0;

 printf("Enter the number of row and colum:");
 scanf("%d %d",&n,&m);

 //elements for the matrix
  for(i=0;i<n;i++){

    for(j=0;j<m;j++){
        printf("MATRIX [%d] [%d]=",i,j);
         scanf("%d",&A[i][j]);

    } printf("\n");
  }

    for(i=0;i<n;i++){

    for(j=0;j<m;j++){

         printf("%d \t",A[i][j]);
         }
     printf("\n"); }


     //sum of diagopnal matrix

     printf("diagonal elements:");

       for(i=0;i<n;i++){

    for(j=0;j<m;j++){
        if(i==j){
            printf("%d\n",A[i][j]);
            sum=sum+A[i][j];
        }
          }


       }

    printf("sum of diagonal elements=%d",sum);

         return 0;
 }


