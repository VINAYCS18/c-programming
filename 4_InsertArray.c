#include <stdio.h>

int main()
{
	int arr[100];
	int i, x, pos, n;
	printf("Enter size of array");
  	scanf("%d",&n);

	for (i = 0; i < n; i++)
	scanf("%d",&arr[i]);

	printf("enter element to be inserted ");
	scanf("%d",&x);

	printf("position at which element is to be inserted ");
	scanf("%d",&pos);
	n++;

	for (i = n; i >= pos; i--)
		arr[i] = arr[i - 1];

	arr[pos - 1] = x;


	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
