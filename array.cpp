// Array declaration by specifying size
int arr1[10];

// With recent C/C++ versions, we can also declare an array of user specified size
int n = 10;
int arr2[n];

// Array declaration by initializing elements
int arr[] = { 10, 20, 30, 40 }

// Array declaration by specifying size and initializing elements
int arr[6] = { 10, 20, 30, 40 }

//simple execution of array
#include <stdio.h>
int main()
{
	int arr[5];
	arr[0] = 5;
	arr[2] = -10;
	arr[3 / 2] = 2;
	arr[3] = arr[0];
  printf("%d %d %d %d", arr[0],arr[1], arr[2], arr[3]);
  return 0;
}




