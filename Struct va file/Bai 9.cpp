#include <stdio.h>
void nhapMang(char  s[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap phan tu thu s[%d]: ", i);
		scanf("%c", &s[i]);
		fflush(stdin);
	}
}
void ghiTep(char s[], int n)
{
	FILE *f;
	f=fopen("nguyenam.txt", "w");
	for(int i=0;i<n;i++)
	{
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
		fprintf(f," %c ", s[i]);
	}
	fclose(f);
}
void docTep()
{
	FILE *f;
	f=fopen("nguyenam.txt", "r");
	int dem=0;
	char chu;
	while(fscanf(f," %c ", &chu)>0)
	{
		if(chu=='a')
		dem++;
	}
	printf("Co %d a nguyen am", dem);
	fclose(f);
}
main()
{
	char a[10];
	nhapMang(a,5);
	ghiTep(a,5);
	docTep();
}
