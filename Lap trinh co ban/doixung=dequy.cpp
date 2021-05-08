#include <stdio.h>
void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap phan tu thu a[%d]", i);
		scanf("%d", &a[i]);
	}
}
int doiXung(int a[], int n)
{
	for(int i=0;i<n/2;i++)
	{
		if(a[i]!=a[n-1-i])
		{
			return 0;
			break;
		}
    }
    return 1;
}
main()
{
	int a[10];
	nhapMang(a,5);
	if(doiXung(a,5)==1)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
