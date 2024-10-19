#include<stdio.h>
int add(int x,int y){
printf("The sum of %d and %d is %d\n",x,y,x+y);
}
int sub(int x,int y){
printf("The sum of %d and %d is %d\n",x,y,x-y);
}
int mul(int x,int y){
printf("The sum of %d and %d is %d\n",x,y,x*y);
}
int div(int x,int y){
printf("The sum of %d and %d is %d\n",x,y,x/y);
}
int mod(int x,int y){
printf("The sum of %d and %d is %d\n",x,y,x%y);    
}
    
int main(){
	int choice;

	do{
	
        printf("enter 1 for +\n");
        printf("enter 2 for -\n");
        printf("enter 3 for *\n");
        printf("enter 4 for /\n");
        printf("enter 5 for %\n");
        printf("enter 0 for exit\n");
        
        printf("enter your choice here:");
        scanf("%d",&choice);
        
        int num1,num2;
        printf("enter 1 number :");
        scanf("%d",&num1);
        printf("enter 2 number :");
        scanf("%d",&num2);
        
        switch(choice){
        	case 1:
        	add(num1,num2);
        	break;
        	case 2:
        	sub(num1,num2);	
        	break;
        	case 3:
        	mul(num1,num2);
        	break;
			case 4:
			div(num1,num2);
			break;
			case 5:
			mod(num1,num2);
			break;
			case 6:
			printf("youb are exit");
			break;
	}

}
while(choice!=0);
}


