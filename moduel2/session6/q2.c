#include<stdio.h>
#include<string.h>
main(){
	char team[4][30] = {"chennaisuperkings","mumbaiindians","gujarattitans"};
	
	int count=3,i;
	int choise;
	
	while(1){
	printf("\n press 1 for ipl team names : ");
	printf("\n press 2 for adding a team :");
	printf("\n press 3 for exit : ");
    printf("\n enter your choise : ");
    scanf("%d",&choise);
    
    if(choise==1){
    	printf("\n favourite ipl teams are :");
    	for(i=0;i<count;i++)
		{
    		printf("\n %d=%s",i+1,team[i]);
    		
		}
	}
	else if(choise ==2){
		if (count<4);
		
	
	printf("\n write your new team :");
	scanf("%s",&team[4]);
	count++;
   }  
    
	else if(choise==3){
		break;
		printf("\n exit :");
		
	}
	else{
		printf("\n select write choise :");
		
	}
  }
}
