#include "geom.h"
#include <fstream>
#include <iomanip>
#include <iostream>

int main() {
    std::ofstream f;

    f.open("/Users/amina/CLionProjects/geometry/tests.txt");

    Rdec2D r1 = {0, 100}; // location of first cannon
    Rdec2D r2 = {300, 100}; // location of second cannon
    Rdec2D v1 = {5, 5};
    Rdec2D v2 = {-2, 4};
    double delta_s;
    double t1, t2, delta_t, x1, x2, y1, y2, k = 0, d_t = 1;
    const double c = 300.0, g = 10.0; // speed of sound and g
    delta_s = Norm(r2 - r1);
    delta_t = delta_s / c;
    double tmp = 0;
    x1 = r1.x;
    x2 = r2.x;
    y1 = r1.y;
    y2 = r2.y;
    double pl = 0.01;
    double rad = 0;
    int ans = 0;
    while (rad < 3.14) {
        std::cout << x1 << " " << y1 << " " << Norm(v1) << " " << x2 << " " <<
                  y2 << " " << Norm(v2) << '\n';
        while (y1 >= 0 && (y1 != y2 && x1 != x2)) {
            std::cout << x1 << " " << y1 << " " << Norm(v1) << " " << x2 << " " <<
                      y2 << " " << Norm(v2) << '\n';
            tmp = tmp + 0.01;
            t1 = delta_t + d_t * tmp;
            t2 = d_t * tmp;
            y1 = v1.y * t1 - g * t1 * t1 / 2;
            x1 = r1.x + v1.x * t1;
            v2.x = Norm(v2) * std::cos(rad);
            v2.y = Norm(v2) * std::sin(rad);
            y2 = v2.y * t2 - g * t2 * t2 / 2;
            x2 = r2.x + v2.x * t2;
            std::cout << x1 << " " << y1 << " " << Norm(v1) << " " << x2 << " " <<
                      y2 << " " << Norm(v2) << '\n';
        }
        if (y1 == y2 && x1 == x2) {
            //f << std::fixed << std::setprecision(4) << x1 << " " << y1 << " " << Norm(v1) << " " << x2 << " " <<
            //  y2 << " " << Norm(v2) << '\n';
           // f << "end!" << " " << rad;
             std::cout << x1 << " " << y1 << " " << Norm(v1) << " " << x2 << " " <<
                y2 << " " << Norm(v2) << '\n';
            ans = 1;
            break;
        }
        if (y1 < 0 && (y1 != y2 || x1 != x2)) {
           // f << std::fixed << std::setprecision(4) << x1 << " " << y1 << " " << Norm(v1) << " " << x2 << " " <<
           //   y2 << " " << Norm(v2) << '\n';
           // f << rad << '\n';
            std::cout << x1 << " " << y1 << " " << Norm(v1) << " " << x2 << " " <<
                      y2 << " " << Norm(v2) << '\n';
            std::cout << "imp";
            break;
        }
        rad += pl;
    }
}
        /*

        if (y1 > 0) {
        //f << std::fixed << std::setprecision(4) << tmp << " " << Norm(v1) << " " << Norm(v2) << " " << t1 << " " << x1 << " " << y1 << " " << x2 << " " << y2 << " " << t2 << std::endl;
        }
        if (x1 == x2 && y1 == y2){
       // f << std::fixed << std::setprecision(4) << tmp << " " << Norm(v1) << "  v2 = Error" << " " << t1 << "  " << x1 << " " << y1 << " " << x2 << " " << y2 << std::endl;
       // f << "game over" << std::endl;
        break;
        }
        else {
        //f << std::fixed << std::setprecision(4) << tmp << " " << Norm(v1) << "  v2 = Error" << " " << t1 << "  " << x1 << " " << y1 << " " << x2 << " " << y2 << std::endl;
        break;
    }
    }
    //f.close();
} */