#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//   declarations of functions
int search(int);
int display();
int back();
int check(int);       //   for checking quantity
int value=0;


struct node {
	int ID;
	char proName[100];
	double prePrice;            //   product price
	int quantity;
struct    node* next;
};

//functions to be used
int search(int);
int display();
int back();
int check(int);       //   for checking quantity
int value=0;


int main(){
    int flag,flag1;
    printf("<<<<<<<<<<<<<<<<<<<<<<<<   SuperMarket   >>>>>>>>>>>>>>>>>>>>\n");              
	printf("<<<<<<<<<<<<<<<<<<<<<<<<   Store         >>>>>>>>>>>>>>>>>>>>\n\n\n");
	int temp=1;
	while(1)
    {
    int cm;
    flag=1;
    flag1=1;
	printf("\t\tEnter 1 for Shopkeeper portal \n\n\t\tEnter 2 for Customer portal\n\n\t\tEnter 0 for exit\n\n");
	printf("*********>>>>>***********>>>>>>>>");
	scanf("%d",&cm);
	switch(cm)
	{
    case 1 :
    while(flag){
	int ch;                     
	printf("\t\tEnter 1 for ADD a new product \n\n\t\tEnter 2 to display all products \n\n\t\tEnter 3 for MODIFY Existing product\n\n");
	printf("\t\tEnter 4 for Delete a particular product item\n\n\t\tEnter 0 for exit\n\n");
	printf("*********>>>>>***********>>>>>>>>");
    scanf("%d",&ch);
	switch(ch){
	case 1:
	if (temp==0){             
	end();
	}
	if(temp==1){
    value++;                   
	beg();
	temp=0;
	}
	break;
    case 2:
	system("cls");
	display();
    break;
    case 3:
	modify();
	break;
    case 4:
	delPro();
	break;
    case 0:
        printf("Exiting...\n");
	    flag=0;                //   exit from while loop
        break;
    default:
         system("cls");
         printf("\t\t<<<Wrong choice>>>\n\n");
         break;
	}
	}
break;
case 2:
    while(flag1)
    {
        int cd;
      printf("\n\n\t\tEnter 1 To buy something\n\n\t\tEnter 2 to return something\n\n\t\tEnter 0 for exit\n\n");
      printf("*********>>>>>***********>>>>>>>>");
      scanf("%d",&cd);
       switch(cd)
       {
       case 1 :
           buy();
	       break;
       case 2 :
        back();
        break;
       case 0 :
        printf("Exiting...\n");
	    flag1 = 0;                    //   exit from while loop
        break;
        default: system("cls");
           printf("\t\t<<<Wrong choice>>>\n\n");
           break;
       }
    }break;
    case 0 :
        printf("Exiting...\n");
	    exit(1);                    //   exit from while loop
        break;
    default: system("cls");
        printf("\t\t<<<Wrong choice>>>\n\n");
        break;

}
    }
}

