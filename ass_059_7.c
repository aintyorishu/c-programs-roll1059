// matrix addition

#include<stdio.h>
int main()
{
  int a[100][100],b[100][100],product[100][100],i,j,r,c;
  
  printf("Enter no of rows : " );
  scanf("%d",&r);
  
  printf("Enter no of cols : " );
  scanf("%d",&c);
  
  for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        printf("Enter Value of a[%d][%d] : ",i,j);
        scanf("%d",&a[i][j]);
      }
    }
    
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        printf("Enter Value of b[%d][%d] : ",i,j);
        scanf("%d",&b[i][j]);
      }
    }
    
     for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
       product[i][j] = a[i][j] * b[i][j];
      }
    }
    
    printf("\nMatrix A \n");
    for(i=0;i<r;++i)
    {
      for(j=0;j<c;++j)
      {
        printf("  %d  ",a[i][j]);

      }
      printf("\n");
    }
    
    printf("\nMatrix B \n");
   for(i=0;i<r;++i)
    {
      for(j=0;j<c;++j)
      {
        printf("  %d  ",b[i][j]);
      }
      printf("\n");
    }
    
    printf("\nProduct Matrix \n");
   for(i=0;i<r;++i)
    {
      for(j=0;j<c;++j)
      {
        printf("  %d  ",product[i][j]);
      }
      printf("\n");
    }
    return 0;
}
