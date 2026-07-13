#include<stdio.h>
main(){
	int age;
	
	printf("Enter the Age of the Guy : ");
	scanf("%d",&age);
	
	if(age >1 && age<=18){
		printf("\n school guy");
	} 
	else if(age > 18 && age<25){
		printf("\n college guy");
	}
	else if(age > 25 && age < 60){
		printf("\n guy is corrently doing job");
	}
	else if(age >60){
		printf("guy is retired");
	}
	else{
		printf("Stupid person age cant be negetive");
		
	}
}
