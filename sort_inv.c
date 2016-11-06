/*
// The operation of inverse INSERTION-SORT on the array A = (5, 2, 4, 6, 1, 3).
*/
#include <stdio.h>

int main(void)
{
	int A[]={5,2,4,6,1,3};
	int i, j, A_len=sizeof(A)/sizeof(int);
	int key;

	for(j=1; j<A_len; j++)
	{
		key = A[j];
		i = j-1;
		while(i>=0 && A[i]<key)
		{
			A[i+1] = A[i];
			i = i-1;
		}
		A[i+1] = key;
	}

	for(i=0; i<A_len; i++)
		printf("%d ", A[i]);
	printf("\n");

	return 0;
}
