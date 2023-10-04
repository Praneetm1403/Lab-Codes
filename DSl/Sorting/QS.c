#include<stdio.h>
// Not stable algorithm
void QS(int arr[],int lo,int hi);


int main()
{
	int i;
	int arr[7]={100,40,2,7,11,6,19};
	printf("Unsorted Array\n");
	for(i=0;i<7;i++)
	{
		printf("%d\n",arr[i]);
	}
	QS(arr,0,6);
	printf("After applying QS:\n");
	for(i=0;i<7;i++)
	{
		printf("%d\n",arr[i]);
	}

	
	
	return 0;
}
void QS(int arr[],int lo,int hi)
{
if ( lo < hi){
   int pivot= hi;
   int i = lo;
   int j = hi ;
  
   
   while(i<j)
   {
   	while (arr[i]< arr[pivot] && i<=hi )
   	{
   		i++;
   	}
   	while (arr[j]> arr[pivot] && j >= lo)
   	{
   		j--;
   	}
   	if (i<j)
   	{
   		int temp = arr[i];
   		arr[i] = arr[j];
   		arr[j]=temp;
   	}
   }
   if(i>j){
   
   int temp = arr[i];
   arr[i]=arr[pivot];
   arr[pivot] = temp;
   }
   
   QS(arr,lo,i-1);
   QS(arr,i+1,hi);
}
}

