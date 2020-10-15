#include <stdio.h>
#include <stdlib.h>
int  main(int argc, char const *argv[])
{	char pass[7];
	char cmppass[7] = "s7fn6g";
	cmppass[6] = 0;
	printf("Hello there!\nEnter the password[len = 6]:\n");
	scanf("%s",pass);
	pass[6]=0;
	for(int i=0; i<6;i++){
		if(pass[i]+3 != cmppass[i])
			{
				printf("Wrongg!!\n");
				exit(0);
			}
			
	}
	printf("correct!!!\n");
	return 0;
}