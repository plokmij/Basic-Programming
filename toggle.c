//Program 1 Second attempt

#include<stdio.h>
void main(){
	int i;
	char arr[100];
	scanf("%s",arr);
	for(i=0;arr[i]!='\0';i++){
		if(arr[i]<=90)
			printf("%c",arr[i]+32);
		else
			printf("%c",arr[i]-32);
	}
	
}
