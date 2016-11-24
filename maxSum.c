#include <stdio.h>
int firstSequenceNumber (int *, int N, int K);

int main ()
{
	int N, K;
	printf ("Please, enter count of element: ");
	scanf ("%d", &N);
	int arr[N];
	printf ("Enter elements:\n");
	int i;
	for (i = 0; i < N; i++)
	{
		printf("arr[%d] = ", i + 1);
		scanf ("%d", &arr[i]);
	}
tryAgain:
	printf ("Enter count of sequence:\n");
	scanf ("%d", &K);
	if (K > N)
	{
		printf ("error: K > N. please, try again.\n");
		goto tryAgain;
	}
	
	i = 0;
	i = firstSequenceNumber(arr, N, K);
	for (i; i < K; i++)
		printf("%d ", arr[i]);
	return 0;
}

int firstSequenceNumber (int * arr, int N, int K)
{
	int i, j;
	int sum = 0, maxSum = 0, maxStart = 0;
	for (i = 0; i < N-K; i++)
		for (j = i; j< K+i; j++)
		{
			sum += arr[j];
			if (maxSum < sum)
			{
				maxSum = sum;
				maxStart = i;
			}
		}
	
   	printf("maxStart: %d\n", maxStart); 
	return maxStart;
}
