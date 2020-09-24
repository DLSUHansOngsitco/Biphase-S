/*
Biphase-S decoding for DIGDACM Project Term 3 2020
Made by Hans Ongsitco
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char input, halfbits[4]="";//stores an BiS encoded bit (ex. -1-1)
	int last=-1, halfbitCounter=0;
	
	do{
		input=fgetc(stdin);
		if(halfbitCounter<4){//reads input until 2 half bits are received and stored in halfbits
			if(input=='-' || input=='+'|| input=='1'){
				halfbits[halfbitCounter]=input;
				halfbitCounter++;
			}
		}
		if(halfbitCounter==4){//cdecodes the halfbit back into the original bit
			if(strcmp(halfbits, "+1-1")==0 || strcmp(halfbits, "-1+1")==0){
				printf("0");
			}
			else if(strcmp(halfbits, "+1+1")==0 || strcmp(halfbits, "-1-1")==0){
				printf("1");
			}
			strcpy(halfbits,"");
			halfbitCounter=0;
		}	
	}while(input!=EOF);

	return 0;
}
