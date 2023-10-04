#include<stdio.h>
// in bubble sort we get n-1 comparisons and n-1 possible swaps.
//eg: 6 size then 5 comparisons and 5 possible swaps.
//o(n^2) = time complexity

void obs(int a[],int n)
{
	int rounds = 0;
	int i,j;
	for ( i=0;i<n-1;i++)    // i loop for number of passes
	{
	printf("Number of passes is %d\n",i+1);
	//rounds++;
		int flag = 0;
		for( j=0;j<(n-i-1);j++)      // j loop for number of comparisons in each pass
		{
			if(a[j]>a[j+1])
			{
				flag = 1 ;
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1]= temp;
				flag = 1;
			}
		}
		if(flag == 0)
		{
			break;
		}
	}
//	printf("Number of rounds are %d\n",rounds);
	printf("sorted array is :\n");
	for (i=0;i<5;i++){
		printf("%d\n",a[i]);
	}
	
}
int main()
{
	int a[5]={65,34,87,12,33}; 
	//int a[5]={1,2,3,4,5};         // this is eg for only 1 pass as array is sorted
	obs( a,5);
}
