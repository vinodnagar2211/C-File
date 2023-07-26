// No return No Argument Sub  user intput 

#include <stdio.h>
void sub (int a, int b);
int main()

{
    int a;
    int b;
    printf("Enter value a :-");
    scanf("%d",&a);
    
    printf("Enter value b :-");
    scanf("%d",&b);
    
    sub (a,b);
}

void sub (int a, int b)
{
    int c=a-b;
    printf ("%d",c);
    
}

