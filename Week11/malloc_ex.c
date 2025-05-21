#include <stdio.h>
#include <stdlib.h>

#define NUM 25

int main(void)
{
	int *p = (int *) malloc(NUM * sizeof(int));
	if (p == NULL)
	{
		fprintf(stderr, "malloc failed");
		exit(0);
	}
	printf("Allocated %lu bytes\n", NUM * sizeof(int));

	for (size_t i = 0; i < NUM; i++)
	{
		p[i] = i;
	}

	free(p);

	return 0;
}
