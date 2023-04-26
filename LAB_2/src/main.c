#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "IntVector.h"

int main () {
	struct IntVector *vector_new;
	struct IntVector *vector_copy;
	vector_new = int_vector_new(87);
	vector_copy = int_vector_copy(vector_new);

	int_vector_push_back(vector_copy,224);
	int_vector_push_back(vector_copy,222);
	int_vector_push_back(vector_copy,1);
	int_vector_push_back(vector_copy,8);
	printf("new and copy capacity - %zu size - %zu \n", int_vector_get_capacity(vector_copy), int_vector_get_size(vector_copy));
	for (size_t i = 0; i < int_vector_get_size(vector_copy); i++) {
		printf("%zu ", int_vector_get_item(vector_copy, i));
	}
	printf("\n");


	int_vector_shrink_to_fit(vector_copy);
	printf("shrink to fit capacity - %zu size - %zu \n", int_vector_get_capacity(vector_copy), int_vector_get_size(vector_copy));
	for (size_t i = 0; i < int_vector_get_size(vector_copy); i++) {
		printf("%zu ", int_vector_get_item(vector_copy, i));
	}
	printf("\n");

	int_vector_pop_back(vector_copy);
	printf("pop back capacity - %zu size - %zu \n", int_vector_get_capacity(vector_copy), int_vector_get_size(vector_copy));
	for (size_t i = 0; i < int_vector_get_size(vector_copy); i++) {
		printf("%zu ", int_vector_get_item(vector_copy, i));
	}
	printf("\n");

	int_vector_reserve(vector_copy, 12);
	printf("reserve capacity - %zu size - %zu \n", int_vector_get_capacity(vector_copy), int_vector_get_size(vector_copy));
	for (size_t i = 0; i < int_vector_get_size(vector_copy); i++) {
		printf("%zu ", int_vector_get_item(vector_copy, i));
	}
	printf("\n");

	int_vector_resize(vector_copy, 2);
	printf("resize capacity - %zu size - %zu \n", int_vector_get_capacity(vector_copy), int_vector_get_size(vector_copy));
	for (size_t i = 0; i < int_vector_get_size(vector_copy); i++) {
		printf("%zu ", int_vector_get_item(vector_copy, i));
	}
	printf("\n");

	int_vector_resize(vector_copy, 7);
	printf("resize capacity - %zu size - %zu \n", int_vector_get_capacity(vector_copy), int_vector_get_size(vector_copy));
	for (size_t i = 0; i < int_vector_get_size(vector_copy); i++) {
		printf("%zu ", int_vector_get_item(vector_copy, i));
	}
	printf("\n");

	int_vector_push_back(vector_copy, 1337);
	printf("push back capacity - %zu size - %zu \n", int_vector_get_capacity(vector_copy), int_vector_get_size(vector_copy));
	for (size_t i = 0; i < int_vector_get_size(vector_copy); i++) {
		printf("%zu ", int_vector_get_item(vector_copy, i));
	}
	printf("\n");

	int_vector_pop_back(vector_copy);
	printf("pop back capacity - %zu size - %zu \n", int_vector_get_capacity(vector_copy), int_vector_get_size(vector_copy));
	for (size_t i = 0; i < int_vector_get_size(vector_copy); i++) {
		printf("%zu ", int_vector_get_item(vector_copy, i));
	}
	printf("\n");

	int_vector_shrink_to_fit(vector_copy);
	printf("shrink to fit capacity - %zu size - %zu \n", int_vector_get_capacity(vector_copy), int_vector_get_size(vector_copy));
	for (size_t i = 0; i < int_vector_get_size(vector_copy); i++) {
		printf("%zu ", int_vector_get_item(vector_copy, i));
	}
	printf("\n");

	int_vector_free(vector_new);
	vector_new = int_vector_copy(vector_copy);
	printf("vector_copy capacity - %zu size - %zu \n",int_vector_get_capacity(vector_copy),int_vector_get_size(vector_copy));
	for (size_t i = 0; i < int_vector_get_size(vector_new); i++) {
		printf("%zu ", int_vector_get_item(vector_new, i));
	}
	printf("\n");

	int_vector_set_item(vector_copy, 3, 1488);
	printf("set item capacity - %zu size - %zu \n", int_vector_get_capacity(vector_copy), int_vector_get_size(vector_copy));
	for (size_t i = 0; i < int_vector_get_size(vector_copy); i++) {
		printf("%zu ", int_vector_get_item(vector_copy, i));
	}
	printf("\n");

	int_vector_free(vector_new);
	int_vector_free(vector_copy);

	return 0;
}
