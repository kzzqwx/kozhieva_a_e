#include <iostream>
#include <cmath>
int main()
{
    float a = 0.1;
    float b = 1;
    double deltax = 0.05;
    double eps = 0.0001;
    for (float x=a; x <= b; x += deltax)
    {
        int i = 0;
        float s_i = 1.0;
        float sum = 0.0;
        while (std::abs(s_i) >= eps)
        {
            s_i = std::pow(-1, i + 1) * (std::pow(x, 2 * i + 1) / (4*i^2 - 1));
            sum += s_i;
            i++;
        }
        std::cout<<" "<<x<<"  "<<sum<<std::endl;
    }
    return 0;
}
    }

