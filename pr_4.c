#include<stdio.h>

int main(){
	
	char a;
	
	printf("Enter value : ");
	scanf("%c",&a);
	
	if(a >= 'a'  && a <= 'z'){
		
		a -= 32;
		printf("%c",a);
	}
	else{
		
		printf("%c",a);
	}
	
	return 0;
}
