#include <stdio.h>

int main(void) {
	int num1,num2,num3,num4;
	printf("enter first num\n");
	scanf("%d",&num1); 
	printf("enter second num\n");
	scanf("%d",&num2);
	printf("enter third num\n");
	scanf("%d",&num3);
	printf("enter fourth num\n");
	scanf("%d",&num4);
	if(num1>num2 &&num1>num3 &&num1>num4){
	    printf("number %d is greatest\n",num1);
	}
	if(num2>num1&&num2>num3&&num2>num4){
	    printf("number %d is greatest\n",num2);
	}if(num3>num4&&num3>num1&&num3>num2){
	    printf("number %d is greatest\n",num3);
	}if(num4>num1&&num4>num2&&num4>num3){
	    printf("number %d is greatest\n",num4);
	}
	return 0;
}

