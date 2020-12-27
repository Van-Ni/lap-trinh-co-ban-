
#include <stdio.h>
#include <string.h>
int LaNguyenAm(char c)
{
     if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
   {
   	return 1;
   }
   else
   return 0;
}
char InNguyenAm(char *c)
{
	for(int i=0;i<strlen(c);i++)
	{
		if(LaNguyenAm(c[i])==1 && LaNguyenAm(c[i+1])==1)
		{
			return true;
		}
	}
	return false;
}
main()
{
	char c[100];
	printf("Nhap xau c: ");
	gets(c);
	if(InNguyenAm(c)==true)
	{
		printf("Trong chuoi co 2 nguyen am canh nhau");
	}
	if(InNguyenAm(c)==false)
	{
		printf("Trong chuoi khong co 2nguyen am canh nhau");
	}
}
