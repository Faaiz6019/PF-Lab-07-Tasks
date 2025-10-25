#include<stdio.h>
int main(){
	
	int sum=0, i, n;
	
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	
	int array[n];
	
	printf("Enter %d elements: \n", n);
	
	for(i=0; i<n; i++){
		
		scanf("%d", &array[i]);
		
		sum = sum + array[i];
	}
	
	printf("Sum of the elements: %d", sum);
	
	return 0;
}
