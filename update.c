#include<stdio.h>
#include"1.h"
void update(){

	FILE *file;
	int c,roll;
	printf("\nEnter Roll No. to Edit\t");
	scanf("%d",&roll);
	Student x;
	printf("\nWhat you want to change?");
	printf("\n1. Name\n2. Branch\n");
	scanf("%d",&c);
	file=fopen(FILENAME,"ab+");
	rewind(file);
	Student x;
	while(fread(&x,sizeof(x),1,file)!=EOF){
		if(roll==x.roll){
	
		switch(c){

		case 1:
			printf("\nEnter name\t");
			
			scanf("%s",&x.name);
			break;
		case 2:
			printf("\nEnter Branch\t");
			scanf("%s",&x.branch);
			break;
		
		}
		fwrite(&x,sizeof(x),1,file);
					
		}		
	}
	fclose(file);
}
