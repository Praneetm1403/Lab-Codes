#include<stdio.h>
int main(){
	int n=5;
	int i,j;
	int a[5]={2,9,4,1,6};
	for(i=0;i<=5;i++){
		printf("%d\t",a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Sorted array:\n");
	for (i=0;i<n;i++)
	{
		printf("%d",a[i]);
		printf("\n");
	}
	return 0;
} 
