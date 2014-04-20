#include <stdio.h>
#include "StructMain.h"

int 
main ()
{
	
	int iLoop;
	int iRtrValue;	
	int iArrBinSch[10];
	printf("Struct Algorithm.\n");
	/* Call Search files; */
	/* Binary Search */
	
	for( iLoop = 0; iLoop < 10; iLoop++ )
	{
		iArrBinSch[iLoop] = iLoop + 5;
	}
	iRtrValue = BinarySearch( iArrBinSch, 8, 10 ); 
	printf("Search Result : %d\n", iRtrValue);
}

int 
BinarySearch( const ElementType Arr[], ElementType X, int N)
{
	int low, mid , high;
	low = 0;
	high = N - 1;

	while( low <= high )
	{
		mid = ( low + high )/2;

		if( Arr[mid] > X )
		{
			high = mid - 1;
		}
		else
		if ( Arr[mid] < X )
		{
			low = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}
