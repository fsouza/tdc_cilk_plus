// Copyright 2013 Francisco Souza. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

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
	for(i = 0; i < N; i++) {
		cilk_spawn do_something(i);
	}
	cilk_sync;
	return 0;
}
