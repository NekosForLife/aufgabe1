//
// Created by Oliver on 13.02.2022.
//

#include "iostream"
#include "cmath"
#include "sstream"
#include "ComplexNumber.h"

void ComplexNumber::setCartesianCoordinates(double x, double y) {
    m_x = x;
    m_y = y;
    std::cout << "x-Coordinate: " << m_x << std::endl << "y-Coordinate: " << m_y << std::endl;
}

void ComplexNumber::setPolarCoordinates(double r, double a) {
    m_r = r;
    m_a = a;
    std::cout << "r-Coordinate: " << m_r << std::endl << "a-Grad with degrees: " << m_a << std::endl;
}

void ComplexNumber::getCartesianCoordinates() {
    m_x = m_r * cos(m_a * M_PI / 180);
    m_y = m_r * sin(m_a * M_PI / 180);
    std::cout << "x-Coordinate: " << m_x << std::endl << "y-Coordinate: " << m_y << std::endl;
}

void ComplexNumber::getPolarCoordinates() {
    m_r = sqrt(m_x * m_x + m_y * m_y);
    m_a = atan(m_y/m_x) * 180/ M_PI;
    std::cout << "r-Coordinate: " << m_r << std::endl << "a-Grad: " << m_a << std::endl;
}
