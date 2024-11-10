! The wave equation is a differential equation that describes the propagation of waves. It is a second order partial differential equation.
! The wave equation is:
! $$\frac{\partial^2 u}{\partial t^2} = c^2 \nabla^2 u$$
! where $u$ is the displacement of the wave, $t$ is time, $c$ is the speed of the wave, and $\nabla^2$ is the Laplacian operator.
! The wave equation is a linear equation, so it can be solved by the method of separation of variables.


!this is the solution to the wave equation

      implicit none
      integer, parameter :: dp = selected_real_kind(15,307)
      real(kind=dp), parameter :: c = 2.99792458e8_dp
!c in m/s
      real(kind=dp) :: u, t, x, y, z
      real(kind=dp), dimension(3,3) :: nabla2
!nabla2 is the Laplacian operator

!solve the wave equation for u(x,y,z,t)

!u(x,y,z,t) = f(x,y,z)*g(t)

!where f(x,y,z) is a solution to the Helmholtz equation
!and g(t) is a solution to the wave equation

      f(x,y,z) = exp(-i*k*(x**2+y**2+z**2))
      g(t) = exp(-i*omega*t)

!k is the wave number
!omega is the angular frequency

!substitute f(x,y,z) and g(t) into the wave equation
!and solve for u(x,y,z,t)

      u(x,y,z,t) = exp(-i*k*(x**2+y**2+z**2)-i*omega*t)

