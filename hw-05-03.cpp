#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

int fact(int a)
{
  int otv = 1;

  for (int i = 2; i <= a; i++)
  {
    otv *= i;
  }
  return otv;
}

int main()
{
  int a = 0;
  int b = 1;
  double q = 0.1;
  double w = 0.0001;
  double ch = 0;
  double sum = 0;
  double func = 0;
  std::cout << " x   s(x)  f(x)" << "\n";

  for (double x = a; x <= b; x += q)
  {
    sum = 0;
    for (int i = 0; i < 100000; i++)
    {
      ch = pow(2 * x, i) / fact(i);

      if (std::abs(ch) < w)
      {
        break;
      }
      sum += ch;
    }

    func = pow(M_E, 2 * x);

    std::cout << std::fixed << std::setprecision(1) << x << ' ';
    std::cout << std::setprecision(4) << sum << ' ' << func << "\n";
  }

  return 0;
}
