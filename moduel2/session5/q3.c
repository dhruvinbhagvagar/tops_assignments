#include<stdio.h>
main(){
	
	int cart,finalprice;
	printf("\n enter your cart total amount : ");
	scanf("%d",&cart);
	
	if(cart>=2000){
		finalprice=cart-(cart*20/100);
		printf("\n after discount your final amount is :%d",finalprice);
			
	}
	if(cart>=1000 && cart<=2000){
		finalprice=cart-(cart*10/100);
			printf("\n after discount your final amount is :%d",finalprice);
	}
	if(cart<=1000){
		printf("\n no disscount n your final prise is =%d",cart);
	}
	
}
