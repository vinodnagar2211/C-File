//                Two Number Swap 

#include <stdio.h>
int main() 
{
  int a,b;
  printf("Enter input value of a:-");
  scanf("%d",&a);
  printf("Enter input value of b:-");
  scanf("%d",&b);
  
  printf("\n\n");
  
  a = a - b;   
  b = a + b;
  a = b - a;

  printf("After swapping value of a =%d\n",a);
  printf("After swapping value of b =%d",b);

  return 0;
}
