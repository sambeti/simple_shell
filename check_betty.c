#include <stdio.h>
#include <stdlib.h>

#define MAX_ARRAY_SIZE 100

/**
 * main - Entry point
 * print_arry - Prints the elements of an integer array.
 * @arr: the array to be printed
 * @size: the number of elements in the array
 * Description: This function takes an integer array and its size as parameters
 * Return: Always 0 (Success)
 */


void print_arry(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(void)
{
	int array[MAX_ARRAY_SIZE];
	int size;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	printf("Enter the elements of the array: ");
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &array[i]);
	}

	printf("The array elements are: ");
	print_array(array, size);

	return (0);
}

