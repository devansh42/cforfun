#include<stdio.h>
#include"1.h"

void del(){
	int roll;
	printf("\nEnter Roll No. to Delete\t");
	scanf("%d",&roll);	
	FILE *file,*tfile;

	tfile=fopen("tfile","wb");
	file=fopen(FILENAME,"rb+");
	rewind(file); //Setting file pointer towards begining
	Student x;
	while(fread(&x,sizeof(x),1,file)!=EOF){
		if(x.roll==roll){
		continue;

		}

		fwrite(&x,sizeof(x),1,tfile);
	}
	fclose(file);
	fclose(tfile);
	remove(FILENAME);
	rename("tfile",FILENAME);				
	printf("\nRecord Deleted Successfully");
}
