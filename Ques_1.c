#include<stdio.h>
#define MAX 500
int main()
{
	char str[MAX];
	printf("enter a string :");
	scanf("%[^\n]s",str);
	int len=0,i=0;
	while(str[i]!='\0'&&i<MAX)
	{
		len++;
		i++;
	}
	//printf("%d\n",len);
	i=len;
	while(i>0)
		printf("%c",str[--i]);
	printf("\n");	
}
