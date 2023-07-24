//  a and b Odd Number  user input while loop
#include <stdio.h>

int main() 
{
 int i;
 int n;
 printf("enter value of i --");
 scanf("%d",&i);
 
 printf("enter valie of n--");
 scanf("%d",&n);
 
 while (i>=n)
 
 {
     if(i%2==1)
     printf("%d\n",i);
     i--;
 }
 

    return 0;
}
