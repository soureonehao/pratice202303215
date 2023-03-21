#include<stdio.h>
void main() {	//打印1000以内水仙花数
	int unit, hun, ten, figure,i;	//定义变量
	printf("1000以内的水仙花数有：");
	for (i = 100; i <= 999; i++) {	//范围定在1000内
		unit = (i % 10) * (i % 10) * (i % 10);	//求出个位数立方
		ten = (i / 10 % 10) * (i / 10 % 10) * (i / 10 % 10);	//求出十位数立方
		hun = (i / 100) * (i / 100) * (i / 100);	//求出百位数立方
		if (i == unit + ten + hun) {	//令各位数立方和是否等于本身
			printf("%d ", i);
		}
	}
}