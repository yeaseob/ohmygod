#include<stdio.h>
#include<stdint.h>
typedef struct dkyposition
{


	int xx;
	int yy;
	float zz;
	int aabc;
	

}dkupos;
float sum1(struct dkyposition* aa)
{

	float rst = (aa->xx + aa->yy);
	aa->zz = rst;
	return rst;

}
int main(void)
{
	struct dkyposition xypos;
	xypos.xx = 10;
	xypos.yy = 20;
	sum1(&xypos);
	printf("x:%d, y:%d\r\n", xypos.xx, xypos.yy);
	printf("sum: % d\r\n", sum1);
		
	return 0;



}
