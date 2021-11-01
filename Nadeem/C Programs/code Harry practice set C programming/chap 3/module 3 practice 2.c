#include <stdio.h>

int main(void) {
	int phy,chem,maths;
	float total_per;
	printf("enter your phy marks\n");
	scanf("%d",&phy);
	printf("enter your chem marks\n");
	scanf("%d",&chem); 
	printf("enter your maths marks\n");
	scanf("%d",&maths);
	total_per=(phy+chem+maths)/3;
	if((total_per<40)||phy<33||chem<33||maths<33){
	    printf("your percentage is %f and you are fail",total_per);
	}
	else{
	    printf("your percentage is %f and you are pass",total_per);
	}
	
	return 0;
}

