/*copyright by jeet 
date: 06/08/2025
cp: if else if condition*/

#include<stdio.h>
void main(){
	int a,b;
	printf("enter the value in a");
	scanf("%d",&a);
	printf("enter the value in b");	
	scanf("%d",&b);
	if (a!=b){
		if(a>b){
			printf("a is bigger");
		}else{
			printf("b is bigger");
		}	
	}
	else{
		printf("both are same");
	}

}