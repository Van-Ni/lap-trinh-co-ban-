#include <stdio.h>
void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap phan tu thu a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
int demMax(int a[], int n)
{
 int max = 0 , gt, dem;
 for (int i = 0; i < n-1; i++)
 {
    dem=0;
  for (int j =i+1; j < n; j++)
  {
   if (a[i] == a[j]) 
      dem++;
  }
  if (dem>max)
  {
   max = dem;
    gt = a[i];
  }
 }
 return gt;
}
main()
{
	int a[10];
	nhapMang(a,5);
	printf("Phan tu xuat hien nhieu nhat : %d", demMax(a,5));
}
