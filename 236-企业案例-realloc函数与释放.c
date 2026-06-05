#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <errno.h>

void printBudgets(double* budgets, int size);



int main(void) {
	//动态调整部门预算列表
	int size = 3; //初始的预算项数

	double* budgets = (double*)malloc(size *sizeof(double));

	if (budgets == NULL) {
		perror("Failed to allocate inital budgets");
		return EXIT_FAILURE;
	}

	// 假设的初始预算分配












	return 0;
}