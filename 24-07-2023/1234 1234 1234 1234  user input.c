// user se 2 inputlena

#include <stdio.h>

int main()

{
	int n;
	int m;
	
	printf("enter input n --");
	scanf("%d",&n);
	
	printf("enter input  m--");
	scanf("%d",&m);	
	
	
	for(int i=1; i<=n; i++)
	{
		for (int j=1; j<=m; j++)
		{
			printf("%d",j);
		}
		printf("\n");
		
	}
	
	
	return 0;
}
