
#include <stdio.h>
void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
	printf("Nhap phan tu thu a[%d]", i);
	scanf("%d", &a[i]);
    }
}
void ghiTep(int a[], int n)
{
	FILE *f;
	f=fopen("songuyen.txt", "w");
	fprintf(f,"  %d\n  ", n);
	for(int i=0;i<n;i++)
	{
		fprintf(f, " %d\n ", a[i]);
	}
	fclose(f);
}
float tbc()
{
	FILE *f;
	int tong, n, so;
	f=fopen("songuyen.txt", "r");
	fscanf(f," %d ", &n);
	for(int i=0;i<n;i++)
	{
		fscanf(f," %d ", &so);
		tong=tong+so;
	}
	fclose(f);
	return (float)tong/n;
}
main()
{
	int a[10];
	nhapMang(a,5);
	ghiTep(a,5);
	float kq=tbc();
	printf("Ket qua= %f", kq);
}
