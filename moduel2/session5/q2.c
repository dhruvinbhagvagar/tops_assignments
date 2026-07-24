#include<stdio.h>
main(){
	int choice;
	
	printf("press 1 for breackfast  ");
	printf("\n press 2 for lunch  ");
	printf("\n press 3 for snacks ");
	printf("\n press 4 for dinner ");
	
	printf("\n enter your choise : ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("\n ypur breakfast menue is : 1.idli 2.dosa ");
		break;
		
		case 2:
			printf("\n your lunch routine is : 1.rice 2.salad");
			break;
			
			case 3:
			printf("\n your snacks are : 1.apple 2.banana");
			break;
			 
			  case 4:
			  	printf("\n your dinner are : 1.pizza 2.kfc");
			  	break;
			  	
			  	default:
			  	printf("\n not founf!!");
			  	
	}
	
	
}
