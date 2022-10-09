#include "../include/windows.c"
struct wndclassex
{
	unsigned int cbSize;
	unsigned int style;
	void *lpfnWndProc;
	int cbClsExtra;
	int cbWndExtra;
	void *hInstance;
	void *hIcon;
	void *hCursor;
	void *hbrBackground;
	char *lpszMenuName;
	char *lpszClassName;
	void *hIconSm;
} wc;
struct msg
{
	void *hwnd;
	unsigned int message;
	unsigned int wparam;
	unsigned int lparam;
	unsigned int time;
	unsigned long ptx;
	unsigned long pty;
	unsigned int lprivate;
	unsigned int pad;
} msg;
#define IDI_APPLICATION ((char *)0x7f00)
#define IDC_ARROW ((char *)0x7f00)
#define WS_EX_WINDOWEDGE 0x100
#define WS_VISIBLE 0x10000000
#define WS_SYSMENU 0x80000
#define WS_CAPTION 0xc00000
#define WM_DESTROY 0x2
int _WndProc(void *hwnd,unsigned int Message,unsigned int wParam,unsigned int lParam); // NOTE: SCC uses a different calling convention
asm "@_WndProc"
asm "push %r9"
asm "push %r8"
asm "push %rdx"
asm "push %rcx"
asm "call @WndProc"
asm "add $32,%rsp"
asm "ret"
int WndProc(void *hwnd,unsigned int Message,unsigned int wParam,unsigned int lParam)
{
	if(Message==WM_DESTROY)
	{
		exit(0);
	}
	return DefWindowProcA(hwnd,Message,wParam,lParam);
}
int main(int argc,char **argv,void *hInstance)
{
	void *hwnd;
	wc.cbSize=sizeof(wc);
	wc.lpfnWndProc=_WndProc;
	wc.lpszClassName="test";
	wc.hInstance=hInstance;
	wc.hbrBackground=(void *)8;
	wc.hIcon=LoadIconA(0,IDI_APPLICATION);
	wc.hCursor=LoadCursorA(0,IDC_ARROW);
	if(!RegisterClassExA(&wc))
	{
		MessageBoxA(0,"Cannot register window class","Error",0);
		return 0;
	}
	hwnd=CreateWindowExA(WS_EX_WINDOWEDGE,"test","Window Test",WS_VISIBLE|WS_SYSMENU|WS_CAPTION,0,0,640,480,0,0,hInstance,0);
	if(!hwnd)
	{
		MessageBoxA(0,"Cannot create window","Error",0);
		return 0;
	}
	while(GetMessageA(&msg,0,0,0)>0)
	{
		TranslateMessage(&msg);
		DispatchMessageA(&msg);
	}
	return msg.wparam;
}
