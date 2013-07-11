       program main
          real(kind=4), dimension(10) :: x, y
          real(kind=4) :: a
          x = 300
          y = 20
          a = 10
          y = y + a*x
          print *, y
       end program
