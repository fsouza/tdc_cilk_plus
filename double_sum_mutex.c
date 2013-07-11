// Copyright 2013 Francisco Souza. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#include <stdio.h>
#include <threads.h>
#include <cilk/cilk.h>

#define N 50000

int
main(void)
{
	mtx_t m;
	mtx_init(&m, mtx_plain);
	int i, values[N];
	for(i = 0; i < N; i++) {
		values[i] = i + 32;
	}
	long result = 0;
	cilk_for(i = 0; i < N; i++) {
		mtx_lock(&m);
		result += values[i] * 2;
		mtx_unlock(&m);
	}
	printf("%ld\n", result);
	mtx_destroy(&m);
	return 0;
}
