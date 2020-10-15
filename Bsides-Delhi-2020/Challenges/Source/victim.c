#include <stdio.h>
#include <windows.h>
#include <unistd.h>

int main(){
	printf("[+]Starting the process.\n");
	for(int i =0;i<5;i++){
		Sleep(10000);
		printf("[+] Running the %dth time.\n",i+1);
	}
	printf("Sleep is now over \n");  
return 0;
}