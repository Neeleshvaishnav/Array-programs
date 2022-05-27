#include<stdio.h>
int main(){
	int a[100],i,j,n,temp;
	printf("enter size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("after reversing:");
	for(i=0,j=n-1;i=n/4;i++,j--){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(i=0;i<n;i++){
		printf("\na[%d]=%d",i,a[i]);
	}
	return 0;
	}

