#include <stdio.h>
#include <string.h>
char DemKyTu(char *xau)
{
	int dem=0;
	for(int i=0;i<strlen(xau);i++)
	{
		if(xau[i]>='A'&&xau[i]<='Z')
		{
			dem++;
		}
	}
	if(dem>0)
	{
		printf("Trong chuoi co %d chu hoa",  dem);
	}
	if(dem==0)
	{
		return 1;
	}
}
main()
{
	char xau[100];
	printf("Nhap xau: ");
	gets(xau);
	if(DemKyTu(xau)==1)
	{
		printf("khong co chu in hoa");
	}
	
}
