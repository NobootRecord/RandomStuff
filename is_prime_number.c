// Is prime number?
// Usage: ipn $number

#include <stdio.h>
#include <stdlib.h>

int is_prime_number(int num) {
	for (int i = 1; i < num; i++) {
		if ((num % i == 0) && (i > 1) && (i < num)) return 0;
	};
	return 1;
}

int main(int argc, char *argv[]) {
	if (argc < 2) printf("Usage: ipn $number\n");
	else {
		if (atoi(argv[1]) < 2) printf("The number must be greater than 1!\n", argv[1]);
		else {
			if (is_prime_number(atoi(argv[1]))) printf("%s is prime number\n", argv[1]);
			else printf("%s is not prime number\n", argv[1]);
		};
	};
	return 0;
}