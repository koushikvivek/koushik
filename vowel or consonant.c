#include <stdio.h>

int main(void) {
	
	char val,A,E,I,O,U,a,e,i,o,u;
	scanf("%c",&val);
	if(val=='!'||val=='@'||val=='#'||val=='$'||val=='%'||val=='^'||val=='&'||val=='*'||val=='('||val==')'||val=='+'||val=='/'||val=='-')
	{
		printf("invalid");
	}
	else if(val=='a'||val=='e'||val=='i'||val=='i'||val=='o'||val=='u'||val=='A'||val=='E'||val=='I'||val=='O'||val=='U')
	{
		printf(" Vowel");
	}
	else
	printf("Consonant");
	
	return 0;
}
