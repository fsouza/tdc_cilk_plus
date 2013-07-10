// Copyright 2013 Francisco Souza. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#include <stdio.h>
#include <cilk/cilk.h>

int
fib(int n)
{
	if(n < 2) {
		return n;
	}
	int x, y;
	x = cilk_spawn fib(n-1);
	y = fib(n-2);
	cilk_sync;
	return x + y;
}

int
main(void)
{
	printf("%d\n", fib(30));
	return 0;
}
