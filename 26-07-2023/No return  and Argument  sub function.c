// No return  and Argument  sub function

#include <stdio.h>
void sub (int a, int b);
int main()
{
    sub (5,3);
}

void sub (int a, int b)
{
    int c=a-b;
    printf ("%d",c);
    
}

