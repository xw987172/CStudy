#include <stdio.h>

int main() 
{
	int a = 0;
	for (char c = 0; c < 1000; c++) {
		a++;
	}
	printf("a=%d\n",a);
	return 0;
}