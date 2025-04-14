#include <stdio.h>

void print_arr(int *arr, size_t len) {
	for (size_t i = 0; i < len; i++)
	{
		printf("arr[%zu] = %d\n", i, *(arr + (sizeof(int) * i)));
	}
}

int main() {
	int arr[5] = {1, 2, 3, 4, 5};
	size_t arr_len = sizeof(arr) / sizeof(arr[0]);
	printf("%zu\n", arr_len);
	print_arr(arr, arr_len);

	return 0;
}
