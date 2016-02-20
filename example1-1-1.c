#include <stdio.h>

double circularArea(double r);
void showArea(double r, double a);

int main()
{
   double radius = 1.0, area = 0.0;
   
   area = circularArea(radius);
   showArea(radius, area);

   radius = 5.0;
   area = circularArea(radius);
   showArea(radius, area);

   return 0;
}

double circularArea(double r)
{
   const double pi = 3.1415926536;

   return pi * r * r;
}

void showArea(double r, double a)
{
   printf("Radius		Area\n"
          "---------------------------\n");  
   printf("%4.1f		%4.2f\n", r, a);
}
