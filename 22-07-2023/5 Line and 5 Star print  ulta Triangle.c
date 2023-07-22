//                5 Line and 5 Star print  ulta Triangle

#include <stdio.h>
int main()
{
    for (int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
