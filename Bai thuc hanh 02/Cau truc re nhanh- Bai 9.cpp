#include <stdio.h>
main()
{
	int dtt, dtn, tienDien, tieuThu;
	printf("Chi so dien thang truoc: ");
	scanf("%d", &dtt);
	printf("Chi so dien thang nay: ");
	scanf("%d", &dtn);
	tieuThu = dtt-dtn;
	if(tieuThu<=100)
	{
	  tienDien = 100*1418;
	}
	else
	if(tieuThu<=150)
	{
		tienDien = 100*1418+(tieuThu-100)*1622;
	}
	else
	if(tieuThu<=200)
	{
		tienDien = 100*1418+50*1622+(tieuThu-150)*2044;
	}
	else
	if(tieuThu<=300)
	{
		tienDien = 100*1418+50*1622+50*2044+(tieuThu-200)*2210;
	}
	else
	if(tieuThu<=400)
	{
		tienDien =  100*1418+50*1622+50*2044+50*2210+(tieuThu-300)*2361;
	}
	else
	if(tieuThu>=401)
	{
		tienDien =  100*1418+50*1622+50*2044+50*2210+50*2361+(tieuThu-400)*2420;
	}
	else
	printf("Chi so dien thang truoc: %d", dtt);
	printf("Chi so dien thang nay: %d", dtn);
	printf("Tien dien: %d", tienDien); 	
}
