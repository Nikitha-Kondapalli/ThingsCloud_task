#include<stdio.h>
void int_to_string(char str[],int n)
{
	int l=0,r,i;
	int temp=n;
	while(temp!=0)
	{
		l++;
		temp/=10;
	}
	for(i=0;i<l;i++)
	{
		r=n%10;
		n/=10;
		str[l-(i+1)]=r+'0';
	}
	str[l]='\0';
}

int main()
{
	char str[50];
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	int_to_string(str,n);
	printf("string_format: %s\n",str);
	return 0;
}
