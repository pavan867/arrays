#include <stdio.h>
 int main()
 {
     int arr[3][3];
     int i,j;
     int sum=0;




     printf("Read 2D array 3*3 and print matrix \n");


     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             printf("\n arr[%d][%d]:",i,j);

             scanf("%d",(*(arr+i)+j));

         }
     }

     printf("the array of elemts are:\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {

             printf("%d\t",*(*(arr+i)+j));

         }
         printf("\n");
     }
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             if(i==j)
             {
                 sum=sum+*(*(arr+i)+j);

             }
         }
     }
     printf("the sum of diagonals is %d",sum);

     return 0;

 }
