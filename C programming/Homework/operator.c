#include<stdio.h>
main(){
	
	 int a,b,c,p,q;
	float div;
	
	 printf("enter the value of a:");
	 scanf("%d",&a);
	 printf("\nenter the value of b:");
	 scanf("%d",&b);
	 
	 c=a+b;
	  printf("\n a+b=%d",c);
	 
	 c=a-b;
	 printf("\n a-b=%d",c);
	 
	div=a/b;
	printf("\n a/b=%f",div);
	printf("\n a%b=%d",a%b);
	
	printf("\n enter the value of p:");
	scanf("%d",&p);
	printf("\n enter the value of q:");
	scanf("%d",&q);
	
	printf("\n p>q=%d ",p>q);
	printf("\n p==q=%d ",p==q);
	printf("\n p!=q=%d",p!=q);
	printf("\n p<q=%d",p<q);
	printf("\n p<=q=%d",p<=q);
	
	printf("\n (p>q  || q>10)=%d",p>q,q>10);
    printf("\n (p>q  && q>10)=%d",p>q,q>50);
	
}
