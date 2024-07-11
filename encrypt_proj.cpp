//program to encrypt a text file..
#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *input,*output;
	char ch;
	
	input=fopen("sample.txt","r");
	if(input==NULL){
		puts("FILE READS ERROR");
		exit(1);
	}
	output=fopen("outpt.txt","w");
	if(output==NULL){
		puts("FILE WRITES ERROR");
		exit(1);
}
    do{
    	ch=fgetc(input);
    	fputc(ch+3,output);
	}while(ch!=EOF);
	
	printf("Encryption process completed successfully.\n");
	printf("outpt.txt file is generated.");
	
	fclose(input);
	fclose(output);
    return 0;
}
