#include<stdio.h>
#include<stdlib.h>

int RecursiveStringLength(char *ch)
{
	if(ch[0] == '\0')
		return 0;
	else
		return RecursiveStringLength(ch+1)+1; 
}

int main()
{
	char ch[] = "L love coding";
	printf("char length is :%d\n",RecursiveStringLength(ch));
	getchar();	
}
