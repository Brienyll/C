#include <stdio.h>
#include <stdlib.h>

int isInside(double x0, double y0, double x1, double y1, double x2, double y2, double xp, double yp);
int die(const char * msg);

float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
   return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}

int main()
{
  double x0, y0, x1, y1, x2, y2, xp, yp;
  printf("Enter 6 coords of vertices of the triangle\n");
  scanf("%lf%lf%lf%lf%lf%lf", &x0, &y0, &x1, &y1, &x2, &y2);
  printf("Enter points (2) \n");
  scanf("%lf%lf", &xp, &yp);
  if (!x0 || !y0 || !x1 || !y1 || !x2 || !y2 || !xp || !yp) die("input failure");
   if (isInside(x0, y0, x1, y1, x2, y2, xp, yp))
     printf ("Inside");
   else
     printf ("Not Inside");
 
   return 0;
}

int isInside(double x0, double y0, double x1, double y1, double x2, double y2, double xp, double yp)
{   
   double A = area (x0, y0, x1, y1, x2, y2);
   double A1 = area (xp, yp, x1, y1, x2, y2);
   double A2 = area (x0, y0, xp, yp, x2, y2);
   double A3 = area (x0, y0, x1, y1, xp, yp);
   return (A == A1 + A2 + A3);
}

int die(const char * msg) {
	printf("Fatal error: %s\n", msg);
	exit(EXIT_FAILURE);
}
