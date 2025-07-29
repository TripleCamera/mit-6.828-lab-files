/*
 * Compile this *without* -O in order to make the bug
 * even more likely to manifest itself.
 */
#include <stdio.h>
#include <setjmp.h>

void f(void);
void g(void);
void h(void);
int callsetjmp(jmp_buf);
int callsetjmp0(jmp_buf);

jmp_buf env;

int
main(void)
{
	printf("entering main\n");
	switch(callsetjmp(env)){
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

/*
 * Calling setjmp, returning, and then eventually
 * calling longjmp on that env is a cardinal sin.
 * Hint: making all these function calls makes it
 * more likely that the sin will come back to haunt us.
 */

int
callsetjmp(jmp_buf env)
{
	return callsetjmp0(env);
}

int
callsetjmp0(jmp_buf env)
{
	return callsetjmp1(env);
}

int
callsetjmp1(jmp_buf env)
{
	return callsetjmp2(env);
}

int
callsetjmp2(jmp_buf env)
{
	return callsetjmp3(env);
}

int
callsetjmp3(jmp_buf env)
{
	return callsetjmp4(env);
}

int
callsetjmp4(jmp_buf env)
{
	return callsetjmp5(env);
}

int
callsetjmp5(jmp_buf env)
{
	return setjmp(env);
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
	printf("entering h - %s, %s, %s, %s, %s, %s, %s, %s, %s, %s\n",
		"ha", "ha", "ha", "ha", "ha", "ha", "ha", "ha", "ha", "ha");
	longjmp(env, 2);
	printf("exiting h\n");
}
