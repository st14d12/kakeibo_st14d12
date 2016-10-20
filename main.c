#include <stdio.h>
#include "average.h"
#include "sum.h"
int main ()
{
	int payments[5];
	int i;
	for(i=0;i<5;i++) {
		scanf("%d", &payments[i]);
	}
	printf("平均値：%d\n",average(payments));
	printf("合計値：%d\n",sum(payments));
}
