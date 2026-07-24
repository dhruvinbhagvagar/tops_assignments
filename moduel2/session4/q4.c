//likes comment and share
#include<stdio.h>
main(){
	
	int likes,share,comment;
	
	printf("enter your likes : ");
	scanf("%d",&likes);
	
		printf("enter your shares : ");
	scanf("%d" , &share);
	
		printf("enter your comments : ");
	scanf("%d",&comment);
	
	if(likes >=1000 || (comment >=200 && share >=50)){
		
	printf("\n congratulations youre trending!!");
}
else{
	printf("\n not trending!!");
	  
    }	
}
