! Copyright 2013 Francisco Souza. All rights reserved.
! Use of this source code is governed by a BSD-style
! license that can be found in the LICENSE file.

program sum_arrays
   implicit none
   integer, dimension(10) :: a, b, c
   a = 300
   b = 20
   c = a + b
   print *, c
end program
