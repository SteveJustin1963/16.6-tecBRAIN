The mathematics for echos in a sphere filled with water is the same as for echos in a sphere filled with any other material. The echo is created when the sound waves reflect off of a surface. The size of the sphere will determine how long the echo will last.what is the wave equation for waves travel through a medium and how they reflect off of surfaces. 

The wave equation is:

wave equation: ΔP/Δt = -Bv∇^2P - g∇h 

where:

ΔP/Δt is the change in pressure over time

Bv is the Bulk modulus times the velocity

∇^2P is the Laplacian of pressure

g∇hand P is the gravitational potential times the gradient of pressure

P is the pressure 

///////////////////

#include <stdio.h>
#include <math.h>

int main()

{

   double pi=3.141592653589793238462643383279502884197169399375105820974944592307816406286;
   double r; //radius of sphere
   double v; //velocity of sound waves
   double t; //time

printf("Enter the radius of the sphere: ");
scanf("%lf", &r);

printf("Enter the velocity of the sound waves: ");
scanf("%lf", &v);

printf("Enter the time: ");
scanf("%lf", &t);

   double echo;

echo=r/v*t;

printf("The echo will last for %lf seconds.\n", echo);

return 0;
}
