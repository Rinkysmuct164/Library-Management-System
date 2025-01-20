#include<stdio.h>

 int main()
 {
     int a[3][2],b[3][2];
      int n,m;



//input for a matrix

    for(n=0;n<3;n++){
     for(m=0;m<2;m++){

    printf("a[%d] [%d]",n,m);
    scanf("%d",&a[n][m]);
  } printf("\n");
}
//printing a matrix
   for(n=0;n<3;n++){
   for(m=0;m<2;m++){

    printf("%d",a[n][m]);
  } printf("\n");
}
   //input for b matrix

    for(n=0;n<3;n++){
     for(m=0;m<2;m++){

    printf("b[%d] [%d]",n,m);
    scanf("%d",&b[n][m]);
  } printf("\n");


  //printing b matrix
   for(n=0;n<3;n++){
   for(m=0;m<2;m++){

    printf("%d",b[n][m]);
  } printf("\n");
     }
  return 0;
   }
