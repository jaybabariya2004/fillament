#include<stdio.h>

int main(){
	
	char a[20];
	int i;
	
	printf("Enter value : ");
	gets(a);
	
	for(i=0; i<a[i]; i++){
		
		if(a[i]>=65 && a[i]<=90){
			a[i]+32;
		}
		else if(a[i]>=97 && a[i]<=122){
			a[i]-=32;
			
		}
	}
	printf("This is a Togglecase = %s",a);
	
	return 0;
}
