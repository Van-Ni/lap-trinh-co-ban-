#include <stdio.h>
void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap phan tu thu [%d]", i);
		scanf("%d", &a[i]);
	}
}
void ghiTep(int a[], int n)
{
	FILE *f;
	f=fopen("songuyen.txt", "w");
	for(int i=0;i<n;i=i+2)
	{
		fprintf(f,"%d",a[i]);
	}
	fclose(f);
}
void docTep()
{
	FILE *f;
	int s=0, so, kq;
	f=fopen("songuyen.txt", "r");
	do
	{
		kq=fscanf(f,"%d",&so);
		if(kq!=EOF)
		{
			s=s+so;
		}
	}while(kq!=EOF);
	printf("TONG= %d", s);
	fclose(f);
}
main()
{
	int a[10];
	nhapMang(a,5);
	ghiTep(a,5);
	docTep();
}
