// Copyright 2013 Francisco Souza. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#include <stdio.h>
#include "dump.h"

void
multiply(int *a, int *b, int *c, int n)
{
	int i;
	for(i = 0; i < n; i++) {
		c[i] = a[i] * b[i];
	}
}

int
main(void)
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int b[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 10};
	int c[10];
	multiply(a, b, c, 10);
	dump(c, 10, "%d ");
	return 0;
}
