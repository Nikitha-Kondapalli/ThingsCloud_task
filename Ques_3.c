#include<stdio.h>
#include<math.h>
int string_to_int(char str[])
{
	int l=0,i=0,n=0;
	while(str[i]!='\0')
	{
		l++;
		i++;
	}
	printf("%d\n",l);
	for(i=0;i<l;i++)
		n = n + ((str[l-(i+1)]-'0')*pow(10, i));
	return n;
}

int main()
{
	char str[50];
	int n;
	printf("enter a number_string:");
	scanf("%[0-9]s",str);
	n=string_to_int(str);
	printf("integer_format: %d\n",n);
	return 0;
}
