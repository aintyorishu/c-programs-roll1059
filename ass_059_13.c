  #include<stdio.h>
  int main()
  {
    float height,base,area;
    
    printf("Area of Triangle Calculator.\n");
    
    printf("Enter height of the triangle : ");
    scanf("%f",&height);
    
    printf("Enter base of the triangle : ");
    scanf("%f",&base);
    
    area = (0.5*(base * height));
    printf("The Area of triangle is : %.2f\n",area);
    return 0;
  }