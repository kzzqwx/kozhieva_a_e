#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
  int a = 0;
  int b = 1;
  double q = 0.05;
  double w = 0.001;
  double ch = 0;
  double sum = 0;
  double func = 0;
  double xi = 0;

  for (double x = a; x <= b; x += q)
  {
    sum = 0;
    func = 0;
    xi = 1;
    for (int i = 1; i < 1000000; i++)
    {
      if (i % 4 == 0)
      {
        i++;
      }

      if ((x > 0.65) && (x < 0.75))
      {
        std::cout << ch << "\n";
      }

      xi *= x;
      ch = xi * sin(i * M_PI / 4);

      if (std::abs(ch) < w)
      {
        break;
      }
      sum += ch;
    }

    func = x * sin(M_PI / 4) / (1 - 2 * x * cos(M_PI / 4));

    std::cout << std::fixed << std::setprecision(2) << x << ' ';
    std::cout << std::setprecision(3) << sum << ' ' << func << "\n";
  }

  return 0;
}
