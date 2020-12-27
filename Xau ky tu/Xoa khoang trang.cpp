#include <stdio.h>
#include <string.h>
void xoa(char *s, int vt)
{
	int n=strlen(s);
	for(int i=vt+1;i<n;i++)
	//vt+1 chay tu dau
      {
      	s[i-1]=s[i];//kt phia sau thay kt truoc
      }
      s[n-1]='\0';//sau khi xoa dich ben trai 1 don vi
}
void XoaKhoangTrang(char *s)
//duyet tu dau chuoi den cuoi chuoi
{
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==' ')
		{
			//neu s[i] la khoang trang
			//xoa phan tu tai vi tri i
			xoa(s,i);
			//sau khi xoa xong giam i xuong de tiep tuc  vong lap va xoa khoang trang bi thua
			i--;
     	}
}
}
main()
{
	char s[100];
	printf("Nhap xau s:  ");
	gets(s);
	XoaKhoangTrang(s);
	puts(s);
}
  

