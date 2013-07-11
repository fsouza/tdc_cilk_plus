! Copyright 2013 Francisco Souza. All rights reserved.
! Use of this source code is governed by a BSD-style
! license that can be found in the LICENSE file.

subroutine saxpy(x, y, a, n)
   integer, intent(in) :: n
   real(kind=4), dimension(n), intent(in) :: x
   real(kind=4), dimension(n), intent(inout) :: y
   real(kind=4), intent(in) :: a
   y = y + a*x
end subroutine

program saxpyp
   implicit none
   real(kind=4), dimension(10) :: x, y
   real(kind=4) :: a
   x = 300
   y = 20
   a = 10
   call saxpy(x, y, a, 10)
   print *, y
end program
