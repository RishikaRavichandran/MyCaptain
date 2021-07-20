#include<stdio.h>
 main()
{
  int matrix[3][3], i, j, sum;
  printf("Input elements in the matrix :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ", i, j);
	      scanf("%d", &matrix[i][j]);
      }
  }  
  printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
      {
           printf("%d\t",matrix[i][j]);
      }
  }
 printf("\n\n");
 for(i=0;i<3;i++)
 {
 	sum = sum + matrix[i][i];
 }
 printf(" \n Sum of the diagonal elements of the above Matrix : %d", sum);
 return 0;
}

