#include <stdio.h>
struct SinhVien
{
	char fullName[50];
	int age;
	float dtb;
};
void nhapSV(struct SinhVien &sv)
{
	printf("Enter your full name: ");
	gets(sv.fullName);
	printf("Enter your age: ");
	scanf("%d", &sv.age);
	printf("Enter your dtb: ");
	scanf("%f", &sv.dtb);
	fflush(stdin);
}
void inSV(struct SinhVien sv)
{
	printf("\nMy name is: %s", sv.fullName);
	printf("\n My age : %d", sv.age);
	printf("\n DTB: %f", sv.dtb);
}
main()
{
	struct SinhVien sv1, sv2;
	nhapSV(sv1); 
	nhapSV(sv2);
	if(sv1.dtb>=sv2.dtb)
	{
		inSV(sv1);
	}
	else
	{
		inSV(sv2);
	}
}

