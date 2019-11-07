#include <stdio.h>
#include "sortingAlgorithm.h"

int compare_int(const void*,const void*);

int compare_int(const void* a, const void* b){
	return *(int*)a > *(int*)b;
}

int main(){
	/*
	 * Use case without function pointers
	 */
	int a[] = {5,4,2,10,9,2,1};

	printf("List : a\n");
	printf("Un-Sorted List : ");
	for(int i = 0; i < sizeof(a)/sizeof(a[0]);i++){
		printf("%d,",a[i]);
	}
	printf("\n");

	bubbleSort(a,sizeof(a)/sizeof(a[0]));

	printf("Sorted List : ");
	for(int i = 0; i < sizeof(a)/sizeof(a[0]);i++){
		printf("%d,",a[i]);
	}
	printf("\n");
	
	/*
	 * Use case with function pointers
	 */

	int b[] = {5,4,2,10,9,2,1};

	printf("List : b\n");
	printf("Un-Sorted List : ");
	for(int i = 0; i < sizeof(b)/sizeof(b[0]);i++){
		printf("%d,",b[i]);
	}
	printf("\n");

	// sorting?
	bubbleSort1();

	printf("Sorted List : ");
	for(int i = 0; i < sizeof(b)/sizeof(b[0]);i++){
		printf("%d,",b[i]);
	}
	printf("\n");























	/*
	printf("List : b\n");
	printf("Un-Sorted List : ");
	for(int i = 0; i < sizeof(b)/sizeof(b[0]);i++){
		printf("%d,",b[i]);
	}
	printf("\n");
	*/

	/*
	 * You see we need the array, 
	 * 	the array size, 
	 * 	the size of the stuff in the array, 
	 * 	and our comparater function pointer
	 */
	bubbleSort2(b,sizeof(b)/sizeof(b[0]),sizeof(b[0]),compare_int);

	/*
	printf("Sorted List : ");
	for(int i = 0; i < sizeof(b)/sizeof(b[0]);i++){
		printf("%d,",b[i]);
	}
	printf("\n");
	*/

}

