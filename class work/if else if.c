/*copyright by jeet 
date: 06/08/2025
cp: if else if condition*/

#include<stdio.h>
void main(){
	int a;
	printf("choose the icon number from the above menu:\n 1->jalebi fafada \n 2-> vadapav \n 3 -> bhajiya \n 4 -> patra \n 5 -> khandvi \n");
	printf("enter the value in a");
	scanf("%d",&a);	
	if(a==1){
		printf("please pay 110 for jalebi fafda");
	
	}
	else if(a==2){
		printf("please pay 20 rupees for vadapav");
}
	else if(a==3){
		printf("please pay 30 rupees for bhajiya");
}
	else if(a==4){
		printf("please pay 50 rupees for patra");
}
	else if(a==5){
		printf("please pay 70 rupees for khandvi");
}
	else {printf("kai na levu hoye to side  hat khoti na kar");}
}