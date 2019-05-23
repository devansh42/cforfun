#include<stdio.h>
#include<process.h>
#include"1.h"

void printMenu(){

printf("\n1. Add Record");
printf("\n2. Read Record");
printf("\n3. Delete Record");
printf("\n4. Update Record");
}


int choice;

void main(){
	

printf("Hello, Here is the Menu");
printMenu();
printf("\n");
scanf("%d",&choice);
switch(choice){

case 1:
	add();
	break;
case 2:
	read();
	break;
case 3:
	del();
	break;
case 4:
	update();
	break;
case 0:
	exit(0);
	break;
}

	
}
