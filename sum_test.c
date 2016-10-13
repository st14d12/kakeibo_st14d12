#include <stdio.h>
#include "sum.h"

int main(void)
{
int payments[5] = {1, 2, 3, 4, 5};
	if (sum(payments) == 15) {
		printf("ok\n");
	} else {
	printf("error\n");
	}
return 0;
}
