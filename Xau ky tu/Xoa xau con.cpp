#include <stdio.h>
#include <string.h>
void xoaXau(char *xau, int l, int r)
{
	int i, j;
	int n=strlen(xau);
	for( i=l,j=r+1;j<n;j++,i++)
	{
		xau[i]=xau[j];
	}
	xau[i]='\0';
}
void XoaXauCon(char *xau, char *xc)
{
	char *p;
	p=strstr(xau,xc);
	while(p!=NULL)
	{
		xoaXau(xau,p-xau,p-xau+strlen(xc));
		p=strstr(xau,xc);
	}
}
main()
{
	char xau[100], xc[50];
	printf("Nhap xau: ");
	gets(xau);
	printf("Nhap xau con can xoa: ");
	gets(xc);
	XoaXauCon(xau,xc);
	puts(xau);
}
