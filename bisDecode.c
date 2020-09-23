#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char input, halfbits[2]="";
	int last=-1, halfbitCounter=0, bitSize=0;
	
	do{
		input=fgetc(stdin);
		if(halfbitCounter<2){
			if(input=='-' || input=='+'){
				halfbits[halfbitCounter]=input;
				halfbitCounter++;
			}
		}
		if(halfbitCounter==2){
			if(strcmp(halfbits, "+-")==0 || strcmp(halfbits, "-+")==0){
				printf("0");
			}
			else if(strcmp(halfbits, "++")==0 || strcmp(halfbits, "--")==0){
				printf("1");
			}
			strcpy(halfbits,"");
			halfbitCounter=0;
		}	
	}while(input!='\n');
	printf("\n");
	return 0;
}
