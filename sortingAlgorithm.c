/* all credit to ruanchao on github */
#include<string.h>
#include<stdlib.h>

/*
 * function : bubbleSort2
 * purpose  : sorts integers using bubble sort algorithm
 * input/output : arr
 * input : count
 */
 
void bubbleSort(int arr[], int count)
{
	int i = count, j;
	int temp;

	while(i > 0)
	{
		for(j = 0; j < i - 1; j++)
		{
			if(arr[j] > arr[j + 1])
			{   temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		i--;
	}

}

/*
 * function : bubbleSort1
 * purpose  : a more general sorting algorithm using bubble sort
 * input/output : arr
 * input : count
 * input : size
 * input : compare
 */
void bubbleSort1(){
	return;
}























/*
 * function : bubbleSort2
 * purpose  : a more general sorting algorithm using bubble sort
 * input/output : arr
 * input : count
 * input : size
 * input : compare
 */
void bubbleSort2(void* arr, int count,int size, const int compare(const void*,const void*))
{
	
	int i = count, j;

	/*
	 * Bubble sort requires a temparay varible,
	 * but we do not know the varible type,
	 * therefore we need to allocate the space with a void pointer and initalize it to zero
	 */
	void* temp = malloc(size);
	memset(temp,size,0);

	while(i > 0)
	{
		for(j = 0; j < i - 1; j++)
		{
			/* we need to bultiply by size since we do not know varible type */
			if((*compare)(arr + j*size,arr + (j+1)*size))
			{   
				/* we need to use memcpy since we do not know varible type */
				temp = memcpy(temp,arr + j*size,size);

				memcpy(arr + j*size, arr + (j+1)*size,size);

				memcpy(arr + (j+1)*size, temp, size);
			}
		}
		i--;
	}
	/* make sure to free allocated memory*/
	free(temp);
}
