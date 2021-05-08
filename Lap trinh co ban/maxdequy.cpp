#include <stdio.h>
void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap phan tu thu a[%d]", i);
		scanf("%d", &a[i]);
	}
}
int max(int a[], int n)
{
	if(n==1)
	return a[0];
	else
	{
		if(max(a,n-1)>a[n-1])
		return max(a,n-1);
		else
		return a[n-1];
	}
}
main()
{
	int a[10];
	nhapMang(a,3);
	printf("MAX = %d", max(a,3));
}
