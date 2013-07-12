// Copyright 2013 Francisco Souza. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#define dump(array, n, format)                    \
	do {                                      \
		int i;                            \
		for(i = 0; i < n; i++) {          \
			printf(format, array[i]); \
		}                                 \
		printf("\n");                     \
	} while(0)
