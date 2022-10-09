#include "../include/windows.c"
#define MB_YESNO 4
#define IDYES 6
#define IDNO 7
int main(void)
{
	int ret;
	ret=MessageBoxA(0,"Dialog Test","Dialog Test",MB_YESNO);
	if(ret==IDYES)
	{
		MessageBoxA(0,"You have clicked Yes.","Dialog Test",0);
	}
	else if(ret==IDNO)
	{
		MessageBoxA(0,"You have clicked No.","Dialog Test",0);
	}
	return 0;
}
