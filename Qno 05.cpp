#include<stdio.h>
#include<ctype.h>
int main(){
	
	int i=0, count=0;
	char array[100];
	
	printf("Enter a String: ");
	scanf("%[^\n]", array);
	
	while(array[i] != '\0'){
		
		if(isspace(array[i])){    
			
			count++;
		}
		i++;
	}
	
	printf("Whitespace characters in your string: %d", count);
	
	return 0;
		
	}
	
	
	
	

