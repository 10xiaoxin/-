# include <stdio.h>
int main()
{
	char strExp[]="3+4";
	int a=strExp[0]-'0';
	char b=strExp[1];
	int c=strExp[2]-'0';
	printf("%d %c %d \n",a,b,c);
	int d=a+c;
	printf("%d %c %d= %d\n",a,b,c,d);
	return 0;
}