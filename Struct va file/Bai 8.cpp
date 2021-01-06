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
	f=fopen("sothuc.txt","w");
	for(int i=0;i<n;i++)
	{
		fprintf(f," %d ", a[i]);
	}
	fclose(f);
}
void timMax()
{
   FILE *f;
   f=fopen("sothuc.txt", "r");
   int so;
   int max=0;
   while(fscanf(f," %d ", &so)>0)
   {
   	  if(so>max)
		max=so;
   }
   printf(" SO lon nhat= %d ", max);
   fclose(f);
 
}
main()
{
	int a[10];
	nhapMang(a,5);
	ghiTep(a,5);
	timMax();
}
