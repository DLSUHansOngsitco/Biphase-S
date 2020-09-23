#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char input;
	int last=-1;//previous value, initialized as 0
	
	do{
		input=fgetc(stdin);//gets a character from the input stream
		if(input=='0'){//biphase s encoder
			if(last==1){
				printf("-1+1");
				last=1;
			}
			else if(last==-1){
				printf("+1-1");
				last=-1;
				
			}
		}
		else if(input=='1'){
			if(last==-1){
				printf("+1+1");
				last=1;
			}
			else if(last==1){
				printf("-1-1");
				last=-1;
			}
		}
	}while(input!='\n');
	printf("\n");//new line to signify end of bit stream
	return 0;
}
