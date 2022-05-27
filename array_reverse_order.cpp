#include<stdio.h>
int main(){
	int a[100],n,i;
	printf("enter the size of arrat");
	scanf("%d",&n);
	printf("enter the elementsof array");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("the reverse oreder  is:");
	for(i=n-1;i>=0;i--){
		printf("%d\t",a[i]);
	}
	return 0;
}
