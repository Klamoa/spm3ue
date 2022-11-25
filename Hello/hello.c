#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
	// argc -- count of cli arguments
	// argv -- arguments
	
	printf("Hello World!!!!\n");
	
	int sum = 0;
	for(int i = 0; i < argc; ++i) {
		int num;
		if (sscanf(argv[i], "%d", &num) == 1) sum += num;
		else printf("\"%s\" is not a number.\n", argv[i]);
		//sum += atoi(argv[i]);
	}
	
	printf("sum: %d\n", sum);
	return EXIT_SUCCESS;
}

//gcc -std=c17 -Wall -Wextra -Wpedantic -Wconversion -Werror=vla -lm hello.c