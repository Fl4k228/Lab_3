/****************************
 *  Автор:      Вялов Г.В.  *
 *  Дата:       01.10.2024  *
 *  Название:   Лаба №3     *
 ***************************/
#include <iostream>
#include <hmath>
using namespace std;

int main() {
    double S2[] = { 30, 50, 65, 75, 80 };
    double Re = 2e4;
    double d = 25.4;
    double S1 = 60;

    for (double S2) {
        double Sg = d * sqrt(0.25 * pow(S1 / d, 2) + pow(S2 / d, 2));
        double delta = (S1 - d) / (Sg - d);
        double Nu;

        if (delta < 0.7) {
            Nu = 0.27 * pow(Re, 0.6) * delta;
        }
        else {
            Nu = 0.295 * pow(Re, 0.6) * pow(delta, 0.25);
        }
        cout.precision(5);
        cout << Nu << "   " << delta << endl;
    }

}