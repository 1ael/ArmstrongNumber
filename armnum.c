#include <stdio.h>

int main() {
	int num, copy_of_num, sum = 0, rem;

	printf("enter a number:\n");
	scanf("%d", &num);

	copy_of_num = num;

	while (num != 0) {
		rem = num % 10;
		sum = sum + (rem * rem * rem);
		num = num / 10;
	}

	if (copy_of_num == sum)
		printf("%d is an armstrong number\n", copy_of_num);
	else
		printf("%d is not an armstrong number\n", copy_of_num);
	return(0);
}
