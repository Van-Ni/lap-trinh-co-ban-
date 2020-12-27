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
char InSoLan(char *c, char kyTu)
{
	int dem=0;
	for(int i=0;i<strlen(c);i++)
	{
		if(LaNguyenAm(c[i])==1&&c[i]==kyTu)
		{
			dem++;
		}
	}
	if(dem>0)
	{
		printf("Ky Tu %c xuat hien %d lan", kyTu, dem);
	}
	if(dem==0)
	return 1;
}
main()
{
	char c[100], kyTu;
	printf("Nhap xau: ");
	gets(c);
	printf("Nhap nguyen am can dem: ");
	scanf("%c", &kyTu);
    if(InSoLan(c,kyTu)==1)
    {
    	printf("Ky tu %c khong la nguyen am", kyTu);
	}
}
