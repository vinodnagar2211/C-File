//                       Prime or Not Prime Number
#include <stdio.h>

int main()
{
    int n;
	int i;
	int count=0;
    
    
    printf("Enter value of n :-");
    scanf("%d",&n);
    
    for (i=1;i<=n;i++)
     {
     if(n%i==0)
    {
         count++;
     }
     
     }
     if(count==2)
     {
         printf("This is Prime Num");
     }
     else 
     {
         printf("This is Not Prime Num");
     }
   

    return 0;
}

