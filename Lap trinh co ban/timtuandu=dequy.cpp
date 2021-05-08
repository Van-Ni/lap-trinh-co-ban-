#include <stdio.h>
void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap phan tu thu a[%d]", i);
		scanf("%d", &a[i]);
	}
}
int TimTuanTu(int a[], int n, int x)
{
	if(n==1)
	return x;
	else
	{
		if(TimTuanTu(a,n-1,x)==x)
		return 0;
		else
		return 1;
	}
}
main()
{
	int a[10],x;
	nhapMang(a,5);
	printf("nhap x: ");
	scanf("%d", &x);
	if(TimTuanTu(a,5,x)==1)
	{
		printf("Yes");
	}
	if(TimTuanTu(a,5,x)==0)
	{
		printf("NO");
	}
}
