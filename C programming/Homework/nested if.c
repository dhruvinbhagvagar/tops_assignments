#include<stdio.h>
main(){
	int math,phy,chem,total,subtotal;
	
	printf("\n enter the value of the three sub :");
	scanf("%d %d %d",&math,&phy,&chem);
	
	if(math >55 && phy >60 && chem >40){
		total= math+phy+chem;
		subtotal=math+phy;
		
		if(total >150 || subtotal > 120){
			printf("\n eligbel for addmission");
			
		}
		else{
			printf("\n not eligbel for addmission");
			
		}
	}
	else{
			printf("\n not eligbel for addmission");
			
		}

	
}
