//
// Created by Oliver on 13.02.2022.
//

#ifndef AUFGABE1_COMPLEXNUMBER_H
#define AUFGABE1_COMPLEXNUMBER_H

class ComplexNumber {
public:
    void setCartesianCoordinates(double x, double y);
    void setPolarCoordinates(double r, double a);

    void getCartesianCoordinates();
    void getPolarCoordinates();

private:
    double m_x, m_y, m_r, m_a;
};

#endif //AUFGABE1_COMPLEXNUMBER_H
