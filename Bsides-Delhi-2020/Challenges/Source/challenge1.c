#include <stdio.h>
void printflag();

int  main(int argc, char const *argv[])
{	int c = 0;
	printf("Hello there!\nHere is your flag:\n");
	
	if(c == 0){
		printf("Not so simple!!\n");
	}
	else{
		printflag();
	}
	return 0;
}

void printflag(){
	int a[26] = {110, 100, 105, 111, 115, 120,105, 124, 107, 96, 97, 102, 111, 87, 124, 109, 123, 124, 87, 120, 105, 123, 123,109,108,117};
	char flag[27] ;
	for(int i=0; i<26;i++){
		flag[i] = a[i]^8;
	}
	flag[26] = 0;
	printf("%s\n",flag);
}
