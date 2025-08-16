#include<stdio.h>
	void main() {
		int a,b;
			printf("enter a value for a:");
			scanf("%d", &a);

			printf("enter a value for b:");
			scanf("%d", &b);

			printf("%d + %d=%d\n", a,b,(a+b));
			printf("%d - %d=%d\n", a,b,(a-b));
			printf("%d * %d=%d\n", a,b,(a*b));
			printf("%d / %d=%d\n", a,b,(a/b));
			printf("%d %% %d=%d\n", a,b,(a%b));

}