#include <stdio.h>
#include <string.h>
void tachTen(char *hoTen, char *ten)
{
      int i;
      i=strlen(hoTen)-1;
      while(i>=0&& hoTen[i]!=' ')
      i--;
      strcpy(ten,hoTen+i);
}
main()
{
	char hoTen[]="Nguyen Van NI";
	char ten[10];
	tachTen(hoTen,ten);
	printf("Ten xau khi duoc tach la:\n");
	puts(ten);
}

