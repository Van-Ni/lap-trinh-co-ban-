#include <stdio.h>
#include <math.h>
struct Diem2D 
{
	float x, y;
};
void EnterAB(struct Diem2D &d)
{
	printf("Enter A :");
	scanf("%f", &d.x);
	printf("Enter B: ");
	scanf("%f", &d.y);
}
void PrintAB(struct Diem2D d)
{
	printf("\nA= %f", d.x);
	printf("\nB= %f", d.y);
}
float Range(struct Diem2D d1, struct Diem2D d2)
//khoangcach= sqrt((x2-x1)^2+(y2-y1)^2)
{
	return sqrt((d2.x-d1.x)*(d2.x-d1.x)+(d2.y-d1.y)*(d2.y-d1.y));
}
main()
{
	float d;
	struct Diem2D A, B;
	EnterAB(A); EnterAB(B);
	d=Range(A,B);
	printf("%f", d);
	PrintAB(A); PrintAB(B);
	printf("\nkhoang cash 2 diem A va B la: %f\n\t", d);
	if(A.x==0&&B.y==0)
	{
		printf("A nam tren truc toa do");
	}
	else
	{
		if(A.x==0)
		printf("A nam tren truc tung");
		else
		{
			if(A.y==0)
			{
				printf("A nam tren truc hoanh");
			}
			else
			{
				printf("A nam ngoai truc");
			}
		}
	}
}
