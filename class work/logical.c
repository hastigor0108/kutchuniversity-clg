/*copyright by:vidhya
date:29/7/2025 10:20
cp():logical operator*/

#include <stdio.h>
void main(){

	int a,b,c,d;
	printf("enter the value for a");
	scanf("%d",&a);
	printf("enter the value for b");
	scanf("%d",&b);
	printf("enter the value for c");
	scanf("%d",&c);
	d=(a>b&&a>c)?a:(b>c?b:c);
	
	printf("%d",d);
	
	
	
}