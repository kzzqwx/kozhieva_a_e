#include "geom.h"
#include <fstream>
#include <iomanip>

const double eps = std::numeric_limits<double>::epsilon();

int main() {
   std::ofstream f;

    f.open("/Users/amina/CLionProjects/geometry/tests.txt");

    Rdec2D r_m = {0, -20}; // mouse's location
    Rdec2D r_c = {0, 0}; // cat's location
    Rdec2D v_m = {0, 1};
    Rdec2D v_c = {3, 1};
    double m_v0_m = Norm(v_m);
    double m_v0_c = Norm(v_c);

    const double r_defeat = 0.5;
    double time = 0.1;
    double k1 = 0.1;
    double k2 = - 0.5; // for acceleration

    Rdec2D a_d = (r_c - r_m) / (Norm(r_m - r_c) + k2) * k1;
    Rdec2D a_m = {0.0, Norm(a_d)}; //acceleration of mouse
    double pr_d = Norm(r_m - r_c); // previous distance

    v_c = (r_m - r_c) / Norm(r_m - r_c) * m_v0_c;
    // v_m = v_0 + at
    v_m = -r_m / Norm(r_m) * m_v0_m * time + a_m * time;

    double prev = Norm(r_m - r_c);
    f << std::fixed << std::setprecision(4)  << 0 << " " << r_m.x << " " << r_m.y << " " << r_c.x << " " << r_c.y << " " <<
     Norm(v_m) << " " << Norm(a_m) << " " << Norm(r_m - r_c)<< std::endl;
    for (int i = 1; i != 0; i++) {

        v_c = (r_m - r_c) / Norm(r_m - r_c) * m_v0_c;
        a_d = (r_m - r_c) / (Norm(r_m - r_c) + k2) * k1;
        a_m = {0.0, Norm(a_d)};
        v_m = -r_m / Norm(r_m) * Norm(v_m) + a_m;

        r_c = r_c + v_c * time;
        r_m = r_m + v_m * time;

        f << std::fixed << std::setprecision(4)  << i << " " << r_m.x << " " << r_m.y << " " << r_c.x << " " << r_c.y << " " <<
          Norm(v_m) << " " << Norm(a_m) << " " << Norm(r_m - r_c)<< std::endl;

        // mouse run up to hole(0,0) so if y >= 0 that means it is in the hole
        if (r_m.y >= 0) {
             f << std::fixed << std::setprecision(4) << i + 1 << " " << r_m.x << " " << r_m.y << " " << r_c.x << " " << r_c.y << " " <<
             Norm(v_m) << " " << Norm(a_m) << " " << Norm(r_m - r_c) << "\n" << "mouse is alive!!!" << std::endl;
            break;
        }
        // if distance between cat and mouse is less than r_defeat - mouse is dead
        if (Norm(r_m - r_c) <= r_defeat) {
             f << std::fixed << std::setprecision(4) << i + 1 << " " << r_m.x << " " << r_m.y << " " << r_c.x << " " << r_c.y << " " <<
               Norm(v_m) << " " << Norm(a_m) << " " << Norm(r_m - r_c) <<"\n " << "mouse is dead(((" << std::endl;
            break;
        }
        // if distance on the previous period of time is longer than current distance - mouse has super speed and is in the hole for sure
        // or cat run through the hole
        if (r_c.x < 0 || Norm(r_m - r_c) > pr_d) {
            f << std::fixed << std::setprecision(4) << i + 1 << " " << r_m.x << " " << r_m.y << " " << r_c.x << " " << r_c.y << " " <<
             Norm(v_m) << " " << Norm(a_m) << " " << Norm(r_m - r_c) << "\n" << "mouse is far away" <<std::endl;
            break;
        }
        // saving current value
        pr_d = Norm(r_m - r_c);

    }
    f.close();


}

/*
    Rdec2D r1 = { 0 , 10 }; // location of first cannon
    Rdec2D r2 = { 10, 0 }; // location of second cannon
    Rdec2D v1 = { 100, 150 };
    Rdec2D v2;
    double delta_s;
    double t1, t2, delta_t, x1, x2, y1, y2, k = 0, d_t = 1;
    const double c = 300.0, g = 10.0; // speed of sound and g
    delta_s = Norm(r2 - r1);
    delta_t = delta_s / c;
    int tmp = 0;
    x1 = r1.x;
    x2 = r2.x;
    y1 = r1.y;
    y2 = r2.y;
    while (tmp < 100) {
        t1 = delta_t + d_t * tmp; // time of flight of the first charge
        t2 = d_t * tmp; // time of flight of the second charge
        x1 = v1.x * t1 - g* t1 * t1 / 2;
        x2 = v2.x * t1 - g * t2 * t2 / 2;
        y1 = v1.y * t1 - g * t1 * t1 / 2;
        y2 = v2.y * t2 - g * t2 * t2 / 2;
        v2.x = (v1.x * t1) / t2;
        v2.y = (v1.y * t1 - g * t1 * t1 / 2 + g * t2 * t2 / 2) / t2;
        tmp++;

        if (y1 > 0) {
            f << std::fixed << std::setprecision(4) << tmp << " " << Norm(v1) << " " << Norm(v2) << " " << t1 << " " << x1 << " " << y1 << " " << x2 << " " << y2 << " " << t2 << std::endl;
        }
        if (x1 == x2 && y1 == y2){
            f << std::fixed << std::setprecision(4) << tmp << " " << Norm(v1) << "  v2 = Error" << " " << t1 << "  " << x1 << " " << y1 << " " << x2 << " " << y2 << std::endl;
            f << "game over" << std::endl;
            break;
        }
        else {
            f << std::fixed << std::setprecision(4) << tmp << " " << Norm(v1) << "  v2 = Error" << " " << t1 << "  " << x1 << " " << y1 << " " << x2 << " " << y2 << std::endl;
            break;
        }
    }
    f.close();
} */
