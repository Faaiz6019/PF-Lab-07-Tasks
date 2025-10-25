#include<stdio.h>
int main(){
	
	int i, n;
	
	printf("Enter Number of elements: ");
	scanf("%d", &n);
	
	int array[n];
	
	printf("Enter %d elements: \n", n);
	
	for(i=0; i<n; i++){
		
		scanf("%d", &array[i]);
	}
	
	for(i=n-1; i>=0; i--){
		
		printf("%d, ", array[i]);
	}
	return 0;
}
