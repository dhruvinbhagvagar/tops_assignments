#include<stdio.h>
main(){
	 int r,l,b,h,base,ch;
	 float pi=3.14;
	  printf("\n press 1 for area of circle : ");
	   printf("\n press 2 for area of rectangle : ");

	   printf("\n enter your choise");
	   scanf("%d",&ch);
	   
	   switch(ch){
	   	case 1:
	   		printf("\n enter radious:");
	   		scanf("%d",&r);
	   		printf("\n area of circle is : %f",r*r*pi);
	   		break;
         
		 case 2:
		 printf("\n enter length and breath:");
		 scanf("%d %d",&l,&b);
		 printf("\n the area of rectangle is %d ",l*b);
		 break;
		 	   		default:
		 	   			printf("\n you blind person there is only two opetion:");
		 	   			break;
		 	   			
	   }
	
	
	
	
	
}
