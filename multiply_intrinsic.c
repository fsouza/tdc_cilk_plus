// Copyright 2013 Francisco Souza. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#include <stdio.h>
#include <string.h>
#include <smmintrin.h>
#include "dump.h"

void
multiply(int *a, int *b, int *c, int n)
{
	int i;
	__m128i *pa, *pb, pc;
	for(i = 0; i < n; i += 4) {
		pa = (__m128i *)&a[i];
		pb = (__m128i *)&b[i];
		pc = _mm_mullo_epi32(*pa, *pb);
		memcpy(&c[i], &pc, 4*sizeof(int));
	}
}

int
main(void)
{
	int a[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	int b[8] = {10, 20, 30, 40, 50, 60, 70, 80};
	int c[8];
	multiply(a, b, c, 8);
	dump(c, 8, "%d ");
	return 0;
}
