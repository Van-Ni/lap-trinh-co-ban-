#include <stdio.h>
#include <string.h>
int DauCachDau(char *c)
{
	int n=strlen(c);
	for(int i=0;i<n;i++)
	{
		if(c[i]==' ')
		return i;
	}
	return 0;
}
int DauCachCuoi(char *c)
{
	int n=strlen(c);
	for(int i=n-1;i>=0;i--)
	//chay tu cuoi len
		//i>=0 vi khoang cach =32 >0, ko nam o vi tri am
	{
		if(c[i]==' ')
		{
			return i;
		}
	}
	return -1;	
}
void hienThi(char *c)
{
	int first=DauCachDau(c);
	int last=DauCachCuoi(c);
	int n=strlen(c);
	if(first!=-1&&last!=-1)
	{
	for(int i=last+1;i<n;i++)
	{
		//in ra ten
		printf("%c", c[i]);
	}
	for(int i=first;i<=last;i++)
	{
		//in ra dem
		printf("%c", c[i]);
	}
	for(int i=0;i<first;i++)
    {
    	//in ra ho
    	printf("%c", c[i]);
	}
}
else
{
	printf("Nhap lai: ");
}  
}
main()
{
	char c[100];
	printf("nhap xau c: ");
    gets(c);
	printf("Ho ten dem sau khi duoc chuyen la\n: ");
	hienThi(c);
}
