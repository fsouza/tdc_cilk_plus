#include <stdio.h>
#include <cilk/cilk.h>

#define N 10

void
do_something(int i)
{
	printf("Doing something with %d\n", i);
}

int
main(void)
{
	int i;
	cilk_for(i = 0; i < N; i++) {
		do_something(i);
	}
	return 0;
}
