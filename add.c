//For Adding records
#include"1.h"
void add(){
	
	Student x;
	printf("\nEnter Name\t");
	scanf("%s",&x.name);
	printf("\nEnter Branch\t");
	scanf("%s",&x.branch);
	printf("\nEnter Roll No.\t");
	scanf("%d",&x.roll);
	FILE *file=fopen(FILENAME,"+ab"); //Opening File in append Mode
	fwrite(&x,sizeof(x),1,file);
	fclose(file);
	printf("\nRecords Written");
	
}

