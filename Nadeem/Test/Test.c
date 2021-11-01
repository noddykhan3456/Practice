#include <stdio.h>

int main()
{
    int age;
    int vip=0;
    
    printf("enter ur age\n",age);
    scanf("%d",&age);
    
    printf("Enter 1 if you are VIP\n",vip);
    scanf("%d",&vip);
    
    
    if(age<=70 || vip==1)
    {
        printf("true");
    }
    else
    { 
        printf("false");
    }
    return 0;
}
