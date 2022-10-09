asm ".entry"
asm "push %rbp"
asm "mov %rsp,%rbp"
asm "and $0xf0,%spl"
asm "call @__init"
asm "mov %rbp,%rsp"
asm "pop %rbp"
asm "ret"
int __getmainargs(int *argc,char ***argv);
asm "@__getmainargs"
asm "push %rbp"
asm "mov %rsp,%rbp"
asm "and $0xf0,%spl"
asm "push %r8"
asm "push %r9"
asm "push %r10"
asm "push %r11"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "pushq $0"
asm "mov 16(%rbp),%rcx"
asm "mov 24(%rbp),%rdx"
asm "xor %r8d,%r8d"
asm "mov $1,%r9d"
asm "push %r8"
asm "lea 8(%rsp),%r8"
asm "push %r8"
asm "push %r9"
asm "lea 16(%rsp),%r8"
asm "push %r8"
asm "push %rdx"
asm "push %rcx"
asm ".dllcall \"msvcrt.dll\" \"__getmainargs\""
asm "add $48,%rsp"
asm "add $256,%rsp"
asm "pop %r11"
asm "pop %r10"
asm "pop %r9"
asm "pop %r8"
asm "mov %rbp,%rsp"
asm "pop %rbp"
asm "ret"
int _main(int argc,char **argv,void *hInstance);
asm "@_main"
asm "jmp @main"
int __init(void)
{
	int argc;
	char **argv;
	if(__getmainargs(&argc,&argv))
	{
		return -1;
	}
	return _main(argc,argv,(void *)0x400000);
}
int MessageBoxA(void *hwnd,char *msg,char *title,int style);
asm "@MessageBoxA"
asm "push %rbp"
asm "mov %rsp,%rbp"
asm "and $0xf0,%spl"
asm "push %r8"
asm "push %r9"
asm "push %r10"
asm "push %r11"
asm "mov 16(%rbp),%rcx"
asm "mov 24(%rbp),%rdx"
asm "mov 32(%rbp),%r8"
asm "mov 40(%rbp),%r9"
asm "push %r9"
asm "push %r8"
asm "push %rdx"
asm "push %rcx"
asm ".dllcall \"user32.dll\" \"MessageBoxA\""
asm "add $32,%rsp"
asm "pop %r11"
asm "pop %r10"
asm "pop %r9"
asm "pop %r8"
asm "mov %rbp,%rsp"
asm "pop %rbp"
asm "ret"
void *fopen(char *name,char *mode);
asm "@fopen"
asm "push %rbp"
asm "mov %rsp,%rbp"
asm "and $0xf0,%spl"
asm "push %r8"
asm "push %r9"
asm "push %r10"
asm "push %r11"
asm "mov 16(%rbp),%rcx"
asm "mov 24(%rbp),%rdx"
asm "push %rdx"
asm "push %rcx"
asm ".dllcall \"msvcrt.dll\" \"fopen\""
asm "add $16,%rsp"
asm "pop %r11"
asm "pop %r10"
asm "pop %r9"
asm "pop %r8"
asm "mov %rbp,%rsp"
asm "pop %rbp"
asm "ret"
int fclose(void *fp);
asm "@fclose"
asm "push %rbp"
asm "mov %rsp,%rbp"
asm "and $0xf0,%spl"
asm "push %r8"
asm "push %r9"
asm "push %r10"
asm "push %r11"
asm "mov 16(%rbp),%rcx"
asm "sub $8,%rsp"
asm "push %rcx"
asm ".dllcall \"msvcrt.dll\" \"fclose\""
asm "add $16,%rsp"
asm "pop %r11"
asm "pop %r10"
asm "pop %r9"
asm "pop %r8"
asm "mov %rbp,%rsp"
asm "pop %rbp"
asm "ret"
/*
int fflush(void *fp);
asm "@fflush"
asm "mov %rsp,%rbp"
asm "and $0xf0,%spl"
asm "push %r8"
asm "push %r9"
asm "push %r10"
asm "push %r11"
asm "mov 16(%rbp),%rcx"
asm "sub $8,%rsp"
asm "push %rcx"
asm ".dllcall \"msvcrt.dll\" \"fflush\""
asm "add $16,%rsp"
asm "pop %r11"
asm "pop %r10"
asm "pop %r9"
asm "pop %r8"
asm "mov %rbp,%rsp"
asm "pop %rbp"
asm "ret"
*/
int ferror(void *fp);
asm "@ferror"
asm "push %rbp"
asm "mov %rsp,%rbp"
asm "and $0xf0,%spl"
asm "push %r8"
asm "push %r9"
asm "push %r10"
asm "push %r11"
asm "mov 16(%rbp),%rcx"
asm "sub $8,%rsp"
asm "push %rcx"
asm ".dllcall \"msvcrt.dll\" \"ferror\""
asm "add $16,%rsp"
asm "pop %r11"
asm "pop %r10"
asm "pop %r9"
asm "pop %r8"
asm "mov %rbp,%rsp"
asm "pop %rbp"
asm "ret"
int clearerr(void *fp);
asm "@clearerr"
asm "push %rbp"
asm "mov %rsp,%rbp"
asm "and $0xf0,%spl"
asm "push %r8"
asm "push %r9"
asm "push %r10"
asm "push %r11"
asm "mov 16(%rbp),%rcx"
asm "sub $8,%rsp"
asm "push %rcx"
asm ".dllcall \"msvcrt.dll\" \"clearerr\""
asm "add $16,%rsp"
asm "pop %r11"
asm "pop %r10"
asm "pop %r9"
asm "pop %r8"
asm "mov %rbp,%rsp"
asm "pop %rbp"
asm "ret"
int fread(void *buf,int size,int count,void *fp);
asm "@fread"
asm "push %rbp"
asm "mov %rsp,%rbp"
asm "and $0xf0,%spl"
asm "push %r8"
asm "push %r9"
asm "push %r10"
asm "push %r11"
asm "mov 16(%rbp),%rcx"
asm "mov 24(%rbp),%rdx"
asm "mov 32(%rbp),%r8"
asm "mov 40(%rbp),%r9"
asm "push %r9"
asm "push %r8"
asm "push %rdx"
asm "push %rcx"
asm ".dllcall \"msvcrt.dll\" \"fread\""
asm "add $32,%rsp"
asm "pop %r11"
asm "pop %r10"
asm "pop %r9"
asm "pop %r8"
asm "mov %rbp,%rsp"
asm "pop %rbp"
asm "ret"
int fwrite(void *buf,int size,int count,void *fp);
asm "@fwrite"
asm "push %rbp"
asm "mov %rsp,%rbp"
asm "and $0xf0,%spl"
asm "push %r8"
asm "push %r9"
asm "push %r10"
asm "push %r11"
asm "mov 16(%rbp),%rcx"
asm "mov 24(%rbp),%rdx"
asm "mov 32(%rbp),%r8"
asm "mov 40(%rbp),%r9"
asm "push %r9"
asm "push %r8"
asm "push %rdx"
asm "push %rcx"
asm ".dllcall \"msvcrt.dll\" \"fwrite\""
asm "add $32,%rsp"
asm "pop %r11"
asm "pop %r10"
asm "pop %r9"
asm "pop %r8"
asm "mov %rbp,%rsp"
asm "pop %rbp"
asm "ret"
void *malloc(unsigned long size);
asm "@malloc"
asm "push %rbp"
asm "mov %rsp,%rbp"
asm "and $0xf0,%spl"
asm "push %r8"
asm "push %r9"
asm "push %r10"
asm "push %r11"
asm "mov 16(%rbp),%rcx"
asm "sub $8,%rsp"
asm "push %rcx"
asm ".dllcall \"msvcrt.dll\" \"malloc\""
asm "add $16,%rsp"
asm "pop %r11"
asm "pop %r10"
asm "pop %r9"
asm "pop %r8"
asm "mov %rbp,%rsp"
asm "pop %rbp"
asm "ret"
void free(void *ptr);
asm "@free"
asm "push %rbp"
asm "mov %rsp,%rbp"
asm "and $0xf0,%spl"
asm "push %r8"
asm "push %r9"
asm "push %r10"
asm "push %r11"
asm "mov 16(%rbp),%rcx"
asm "sub $8,%rsp"
asm "push %rcx"
asm ".dllcall \"msvcrt.dll\" \"free\""
asm "add $16,%rsp"
asm "pop %r11"
asm "pop %r10"
asm "pop %r9"
asm "pop %r8"
asm "mov %rbp,%rsp"
asm "pop %rbp"
asm "ret"
void exit(int code);
asm "@exit"
asm "push %rbp"
asm "mov %rsp,%rbp"
asm "and $0xf0,%spl"
asm "push %r8"
asm "push %r9"
asm "push %r10"
asm "push %r11"
asm "mov 16(%rbp),%rcx"
asm "sub $8,%rsp"
asm "push %rcx"
asm ".dllcall \"msvcrt.dll\" \"exit\""
asm "add $16,%rsp"
asm "pop %r11"
asm "pop %r10"
asm "pop %r9"
asm "pop %r8"
asm "mov %rbp,%rsp"
asm "pop %rbp"
asm "ret"