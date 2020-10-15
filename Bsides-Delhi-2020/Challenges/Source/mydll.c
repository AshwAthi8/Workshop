
#include<windows.h>
void callmedude();
BOOL APIENTRY DllMain( HMODULE hModule,                      
						DWORD  fwdreason,
	                    LPVOID lpReserved
                     )
{
    switch (fwdreason)
    {
    case DLL_PROCESS_ATTACH:
        callmedude();
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

void callmedude() {
	int lol[31] = {100,106,95,101,121,98,106,106,93,71,108,104,99,97,114,99,98,93,113,115,97,99,113,113,100,115,106,106,119,31,123};
	char f[32];
	int i;
	for(i=0;i<31;i++){
		f[i] = lol[i]+2;
	}
	lol[i] =0;
    MessageBoxA(0,f, "injected", 0);
    
}
