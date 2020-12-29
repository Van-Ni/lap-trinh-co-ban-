#include <stdio.h>
#include <string.h>
void tachTen(char *hoTen, char *ten)
{
      int i;
      i=strlen(hoTen)-1;
      while(i>=0&& hoTen[i]!=' ')
      i--;
      strcpy(ten,hoTen+i);
}
main()
{
	char hoTen[]="Nguyen Van NI";
	char ten[10];
	tachTen(hoTen,ten);
	printf("Ten xau khi duoc tach la:\n");
	puts(ten);
}
//////////
char tachTen(char *c)
{
 int n=strlen(c);
for(int i=n-1;i>=0;i--)
{
	if(c[i]==32)
	{
		for(int j=i;j<=n;j++)
		{
			printf("%c", c[i]);
		}
		return 0;
	}
}
main()
{
	char c[100];
	printf("Nhap xau : ");
	gets(c);
	printf("Chuoi sau khi duoc tach ten\n: ");
	xuatTen(c);
}	
