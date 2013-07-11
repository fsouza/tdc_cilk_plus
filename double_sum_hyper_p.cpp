// Copyright 2013 Francisco Souza. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#include <stdio.h>
#include <cilk/cilk.h>
#include <cilk/reducer_opadd.h>

#define N 50000

int
main(void)
{
	int values[N];
	for(int i = 0; i < N; i++) {
		values[i] = i + 32;
	}
	cilk::reducer_opadd<long> result;
	cilk_for(int i = 0; i < N; i++) {
		result += values[i] * 2;
	}
	printf("%ld\n", result.get_value());
	return 0;
}
