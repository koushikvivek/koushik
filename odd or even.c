#include <stdio.h>

int main() {
	int i;
	scanf("%d",&i);
	if(i<=0)
	{
		printf("invalid");
	}
	else if(i%2==0)
	{		printf("Even");
		}else
		{
		printf("Odd");
		
		}
	return 0;
}
