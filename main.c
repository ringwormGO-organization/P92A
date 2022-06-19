#include <stdio.h>
#include <string.h>

#define MAX 20000

void help()
{
 	printf("Help >>\n");
 	printf(" Shell info:\n");
  	printf("  -q = exit\n");
	printf("  -h = help\n");
	printf("  -v = version\n");
	printf("  -ws = which shell\n");
}

int main()
{
	printf("Termi-Plan 9 / 9Front\n");

	// VARIABLES //
	char input[MAX];
	////////////////

	while(1)
	{
		scanf("%s", &input);

		if (strcmp(input, "-h") == 0)
			help();

		else if (strcmp(input, "-v") == 0)
			printf("Ver > 1.0\n");

		else if (strcmp(input, "-q") == 0)
			return 0;

		else if (strcmp(input, "-ws") == 0)
			printf("TP9 Shell 1.0\n");
		
	}
}
