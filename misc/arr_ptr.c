#include <stdio.h>

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	int my_arr[] = {1, 2, 4};

	for (size_t i = 0; i < 5; i++)
	{
		printf("arr[%d] = %d\n", i, *(arr + i);
	}

	return 0;
}
