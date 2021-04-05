#include <stdio.h>

int main() {
	int i;
	int sum = 0;
	for (i = 1; i <= 10; i++) {
		sum += i;
		
	}
	printf("sum is the sum of integers from 1 to %d.\n",i);
        printf("sum = %d\n",sum);
	return 0;
}
