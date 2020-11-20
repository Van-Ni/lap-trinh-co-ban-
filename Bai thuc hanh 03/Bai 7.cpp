#include <stdio.h>
main()
{
	int n, tong, i;
	printf("Nhap n: ");
	scanf("%d", &n);
	tong=0;
	for(i=1;i<ns;i++)
    {
	   if(n%i==0)
       tong=tong+i;
   }
   if(tong==n)
   printf("So hoan thien: %d", n);
   else
   printf("Khong la so hoan thien: %d", n);
}
