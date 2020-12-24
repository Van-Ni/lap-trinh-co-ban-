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
void InViTri(char *c)
{
	for(int i=0;i<strlen(c);i++)
	{
		if(LaNguyenAm(c[i])==1)
		{
			printf(" Lan luot nam o vi tri %d\n", i);
		}
	}
}
main()
{
	char c[100];
	printf("Nhap xau: ");
	gets(c);
	InViTri(c);
}
