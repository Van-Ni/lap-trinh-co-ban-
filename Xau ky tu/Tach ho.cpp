#include <stdio.h>
#include <string.h>
void tachHo(char *ht, char *ho)
{
	char *p;
	p=strstr(ht, " ");// lay tu vi tri dau cach tro di
	strncpy(ho,ht,p-ht);// ho: noi dung duoc sao chep//ht: chuoi duoc sao chep // p-ht: so ky tu duoc sao chep tu ht lenh tren
	ho[p-ht]='\0';
}
main()
{
	char ht[30]="Nguyen Van NI";
	char ho[10];
	tachHo(ht,ho);
	puts(ho);
}
