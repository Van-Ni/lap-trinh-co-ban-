#include <stdio.h>
int KiemTraHoanThien(int n)
{
   int i, tong=0;
   for(i=1;i<n;i++)
   {
   	    if(n%i==0)
   	    tong=tong+i;
   }
   if(tong==n)
   return true;
   else
   return false;
}

void LietKeHoanThien(int n)
{
	int i;
	for(i=1;i<=1000;i++)
	{
		if(KiemTraHoanThien(i)==true)
		printf("  %d  ", i);
	}
}
main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	LietKeHoanThien(n);
}
