#include <stdio.h>
#include <setjmp.h>

void f(void);
void g(void);
void h(void);

jmp_buf env;

int
main(void)
{
	printf("entering main\n");
	switch(setjmp(env)){
	case 0:
		printf("setjmp returned 0\n");
		f();
		break;
	case 1:
		printf("setjmp returned 1\n");
		g();
		break;
	case 2:
		printf("setjmp returned 2\n");
		break;
	}
	printf("exiting main\n");
	return 0;
}

void
f(void)
{
	printf("entering f\n");
	longjmp(env, 1);
	printf("exiting f\n");
}

void
g(void)
{
	printf("entering g\n");
	h();
	printf("exiting g\n");
}

void
h(void)
{
	printf("entering h\n");
	longjmp(env, 2);
	printf("exiting h\n");
}

