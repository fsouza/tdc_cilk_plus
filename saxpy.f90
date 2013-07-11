! Copyright 2013 Francisco Souza. All rights reserved.
! Use of this source code is governed by a BSD-style
! license that can be found in the LICENSE file.

program saxpy
   implicit none
   real(kind=4), dimension(10) :: x, y
   real(kind=4) :: a
   x = 300
   y = 20
   a = 10
   y = y + a*x
   print *, y
end program
