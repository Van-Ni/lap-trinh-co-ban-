#include <stdio.h>
main()
{
	float a, b, c; 
	printf("Nhap a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	if((a*a<b*b+c*c) && (b*b<a*a+c*c) && (c*c<a*a+b*b))
	{
	    printf("La do dai 3 canh cua tam giac");
    }
    else
    if(a==b && b==c)
    {
    	printf("Tam giac deu");
	}
	else
	if(a==b || a==c || b==c)
	{
	 printf("Tam giac can");
    }
    if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
    {
    	printf("Tam giac vuong");
	}
	else
	{
	  printf("Tam giac thuong");
    }
}
