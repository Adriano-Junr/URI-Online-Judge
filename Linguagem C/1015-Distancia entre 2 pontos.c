#include <stdio.h>      /* printf */
#include <math.h>       /* sqrt */

int main (){
  double x1, y1, x2, y2, distancia, result;
  scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
  distancia = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
  result = sqrt (distancia);
  printf ("%.4lf", result );
  printf("\n");
  return 0;
}