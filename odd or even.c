#include <stdio.h>

int main() {
	int i;
	printf("enter the val\n");
	scanf("%d",&i);
	if(i<=0)
	{
		printf("invalid");
	}
	else if(i%2==0)
	{		printf("even");
		}else
		{
		printf("odd");
		
		}
	return 0;
}
