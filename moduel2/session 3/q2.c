#include<stdio.h>

main(){
	
	int  num;
	float GST = 18;
	float Grandtotal;
	
	printf("enter the price of your zomato order : %d",num);
	scanf("%f",&num);
	
	Grandtotal = num + (num*GST/100);
	 
	printf("\n Your Grandtotal is : %f",Grandtotal);
	
	
	
}
