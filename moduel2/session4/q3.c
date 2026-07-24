#include<stdio.h>
main(){
	
	int  age;
	float ordervalue;
	
	printf("\n enter your age : ");
	scanf("%d",&age);
	
	printf("\n enter your ordervalue :");
	scanf("\n %f",&ordervalue);
		
	if(age >= 18 || ordervalue >= 500)
		
		printf(" \n true");
	
	else
		printf("\n false");
		
	
}
