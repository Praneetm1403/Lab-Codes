#include<stdio.h>
int bs(int a[],int key);
int main()
{ 
int a[6]={10,2,6,84,55,13};
for(int i=0;i<=6;i++){
	printf("%d\t",a[i]);
	
}

int key,mid;
printf("Enter element you want to search:");
scanf("%d",&key);
int result = bs(a,key);
if (result == -1){

printf("element not found");}
else{
	printf("element found at index %d",mid);
	
}
	
	
	
	
	
	return 0;
}


 bs(int a[],int key)
 {
 	int l=0 , h= 5;
  
 	while (l<=h)
 	{
 		int mid = (l+h)/2;
 		if (a[mid]==key)
 		{
 			return mid;
		 }
		 else if(a[mid]>key){
		 	h= mid-1;
		 }
		 else{
		 	l=mid+1;
		 }
	 }
	 return -1;
 }
