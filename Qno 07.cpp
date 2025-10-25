#include<stdio.h>
int main(){
	
	int array1[10];
	int n, found = 0;
	
	printf("Enter 10 Elements in the Array: \n");
	
	for(int i=0; i<10; i++){
		
		scanf("%d", &array1[i]);
	}
	
	printf("Type a Number to search for: ");
	scanf("%d", &n);
	
	for(int i=0; i<10; i++){
		
		if(array1[i] == n){
			printf("Number %d is at Index = %d\n", n, i);
			found = 1; 	
		}
		}
		if(!found){
			printf("-1");
	}

	return 0;
}
