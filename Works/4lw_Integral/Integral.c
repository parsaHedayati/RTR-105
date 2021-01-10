#include <stdio.h>
#include<math.h>

void
main ()
{
  double a, b, delta_x, h, intg1, intg2, sum = 0, sum1 = 0;
  double integral, x, integral2, m;
  int n, k;
  printf ("Integral of asin(x)\n");
  printf ("please enter the initial limit:\n");
  scanf ("%lf", &a);
  printf ("please enter the final limit:\n");
  scanf ("%lf", &b);
  printf ("please enter the precision value:\n");
  scanf ("%lf", &delta_x);
  printf ("Please enter the number of sub intervals:\n");
  scanf ("%d", &n);
  intg2 = (b - a) * (asin (a) + asin (b)) / n;
  while (fabs (intg2 - intg1) > delta_x)	// rectangle Rule
    {
      n = n * 2;
      h = (b - a) / n;
      intg1 = intg2;
      intg2 = 0;
      for (k = 0; k < n; k++)
	intg2 += h * asin (a + (k + 0.5) * h);
    }
  printf ("integral value by rectangle Rule is:\n%lf\n", intg2);
  h = (b - a) / n;
  int i, b1;
  for (i = 1; i < n; i++)
    {				//simpson's Rule
      x = a + i * h;
      if (i % 2 == 0)
	{
	  sum = sum + (2 * asin (x));
	}
      else
	{
	  sum = sum + (4 * asin (x));
	}
    }

  integral = (h / 3) * (asin (a) + sum + asin (b));
  printf ("The integral by simpson's Rule is:\n%lf\n", integral);
  m = (b - a) / n;
  for (b1 = 1; b1 < n; b1++)
    {
      x = a + b1 * h;
      sum1 = sum1 + asin (x);
    }
  integral2 = (m / 2.0) * (asin (a) + (2 * sum1) + asin (b));
  printf ("integral by trapezoidal Rule is:\n%lf", integral2);

}
