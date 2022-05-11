\ untested
\ convert to forth 83 code

\ Wave equation

: c@ 2dup * fm/ mod 1 and \ c in m/s
: u@ t@ 2dup * fm/ mod 1 and \ u is the displacement of the wave
: t@ 2dup * fm/ mod 1 and \ t is time
: x@ y@ + z@ + \ x^2+y^2+z^2
: k@ * \ k is the wave number
: exp i * \ exp(ik(x^2+y^2+z^2))
: g( \ g(t) is a solution to the wave equation
: t@ 2dup * fm/ mod 1 and \ t is time
: omega@ * \ omega is the angular frequency
: exp i * \ exp(-i*omega*t)
: f( \ f(x,y,z) is a solution to the Helmholtz equation
: x@ y@ + z@ + \ x^2+y^2+z^2
: k@ * \ k is the wave number
: exp i * \ exp(-ik(x^2+y^2+z^2))
: u( \ u(x,y,z,t) = f(x,y,z)*g(t)
: x@ y@ + z@ + t@ + \ x^2+y^2+z^2+t^2
: c@ * \ c is the speed of the wave
: nabla2 @ \ nabla2 is the Laplacian operator
: * \ u_tt = c^2*nabla^2*u
: exp \ this is the solution to the wave equation
