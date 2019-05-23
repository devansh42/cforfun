#include<stdio.h>
#include"1.h"

void read(){
	
	printf("\nReading Records ");
	int count=0;
	FILE *file;
	file=fopen(FILENAME,"rb");
	Student x;
	while(fread(&x,sizeof(x),1,file)!=EOF){
	printf("\n\t%s\t%s\t%d",x.name,x.branch,x.roll);
	count++;
	}

	printf("Total %d Record(s) Readed",count);
	fclose(file);	//Closing file	
}
