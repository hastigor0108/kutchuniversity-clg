/*copyright by: hasti gor
date:11/8/2025 10.19
cp: switch
*/
#include<stdio.h>
void main() {
	int a;
	printf("please let the option from below\n 1.ice gola \n 2. waffle \n 3. tava icecream \n 4.Hot chocolate brownie \n 5. biscoff cheesecake thick shake\n");
	printf("enter the value of a:");
	scanf("%d", &a);
	switch(a){
		case 1:
		printf("\nice gola na khavay gadu pakdai jase");
		case 2:
		printf("\naa su wafer biscuits khava");
		break;
		case 3:
		printf("\naama chemical hoy aavu na khavay tava upar thodi icecream banti hoy!");
		break;
		case 4:
		printf("\ngaram thandu bhegu na karay diabitis thai jaase aavdu mithu khais toh");
		break;
		case 5:
		printf("\ncake icecream shake aavu kevu combination che cheese vadu aavu te kai khavatu hase eww!");
		break;
		default:
		printf("\ntu ke e mangavie beta amne kai j vandho nathi");
	}
}