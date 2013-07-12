// Copyright 2013 Francisco Souza. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#include <stdio.h>
#include "dump.h"

float
multiply(float a, float b)
{
	return a * b;
}

void
saxpy(float *x, float *y, float a, int n)
{
	y[0:n] += multiply(a, x[0:n]);
}

int
main(void)
{
	float a, x[10], y[10];
	x[:] = 300;
	y[:] = 20;
	a = 10;
	saxpy(x, y, a, 10);
	dump(y, 10, "%f ");
	return 0;
}
