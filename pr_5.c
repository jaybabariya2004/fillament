#include<stdio.h>

int main(){
	
	char a[20];
	int i;
	
	printf("Enter value : ");
	gets(a);
	
	for(i=0; a[i]!='\0'; i++){
		
		if(a[i] >= 'a'  && a[i] <= 'z'){
			
			a[i] = a[i] - 32;
		}
		else if(a[i] >= 'A' && a[i] <= 'Z'){
			
			a[i] = a[i] + 32;
		}
	}
	printf("This is a Title case = %s",a);
	
	return 0;
}
