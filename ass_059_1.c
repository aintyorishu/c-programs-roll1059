
//deleting an element from a specific position in an array

#include<stdio.h>
int main()
{
  int arr[50];
  int i,pos,n;
  printf("Enter size of array : ");
  scanf("%d",&n);
  for(i=0;i<n;++i)
    {
      printf("\nEnter value of a[%d] : ",i);
      scanf("%d",&arr[i]);
    }
  printf("Enter Position whose element is need to be deleted : ");
  scanf("%d",&pos);
  for(i=pos;i<n;i++)
  { 
    arr[i] = arr[i+1];
  }
  n--;
  printf("Updated Array : ");
  for(i=0;i<n;i++)
  {
    printf(" %d  ",arr[i]);
  }
  printf("\n");
  return 0;
}