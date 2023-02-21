
	

#include<stdio.h>
int main()
{
	int arr[6]={10,20,30,40,50,60},i;
	
	for(i=1;i<=4;i++){
		arr[i]=arr[i+1];
	}
	
	for(i=0;i<=4;i++){
		printf("%d  ",arr[i]);
	}
	
	
	return 0;
}
		
     


