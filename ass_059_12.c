/* to search a element in 1D array all array elements entered by user.

enter value of a[0] = 11
enter value of a[0] = 12
enter value of a[0] = 13
enter value of a[0] = 14

which element you want to find = 11


11 is available on index of 0.
*/
#include<stdio.h>
int main()
{
int a[1000],n,search,f=0,i;

  printf("\nEnter array size :");
  scanf("%d",&n);
    
    for(i=0;i<n;++i)
    {
      printf("\nEnter value of a[%d] : ",i);
      scanf("%d",&a[i]);
    }
    printf("\nEnter the search element : " );
    scanf("%d",&search);
    
    for(i=0;i<n;++i)
    {
      if(search == a[i])
      {
        printf("\nElement %d found at index %d \n",search,i);
        f=1;
        break;
      }
    }
    
      if(!f)
      {
        printf("\nElement %d not found \n",search);
      }
      return 0;
}
