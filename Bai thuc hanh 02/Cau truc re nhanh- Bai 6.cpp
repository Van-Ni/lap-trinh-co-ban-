#include <stdio.h>
main()
{
	char kyTu;
	printf("Nhap vao 1 ky tu: ");
	scanf("%c", &kyTu);
	if(kyTu >='0' && kyTu <= '9')
	printf("Chu so"); 
	else
	if(kyTu >= 'A' && kyTu <= 'Z' || kyTu >= 'a' && kyTu <= 'z')
	printf("Chu cai");
	else  
	printf("Ky tu khac");
}
