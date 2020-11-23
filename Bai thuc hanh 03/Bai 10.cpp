#include <stdio.h>
main()
{
	int n, i;
	printf("Nhap n: ");
	scanf("%d", &n);
    i=1;
	while(i<=n)
	{
		if(n%i==0)
		printf("Ket qua: %d", i);
		i=i+1; 
	 } 
}
