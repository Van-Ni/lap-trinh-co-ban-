#include <stdio.h>
void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap phan tu thu a[%d]", i);
		scanf("%d", &a[i]);
	}
}
void daoNguoc(int a[], int n)
{
	if(n==1)
	printf("%d", a[0]);
	else
	{
		printf("%d", a[n-1]);
		daoNguoc(a,n-1);
	}
}
main()
{
	int a[10];
	nhapMang(a,5);
	daoNguoc(a,5);

}
