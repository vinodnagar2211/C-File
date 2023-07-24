//  a and b Even Number  user input while loop
#include <stdio.h>

int main() 
{
 int i;
 int n;
 printf("enter value of i --");
 scanf("%d",&i);
 
 printf("enter valie of n--");
 scanf("%d",&n);
 
 while (i<=n)
 
 {
     if(i%2==0)
     printf("%d\n",i);
     i++;
 }
 

    return 0;
}
