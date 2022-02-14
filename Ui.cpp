//
// Created by Oliver on 13.02.2022.
//

#include <iostream>
using namespace  std;
#include "Ui.h"

void Ui::application() {
    cout << "Do you want to calculate the polar-coordinates(p) or the cartesian-coordinates(c)?" << std::endl
    << "Please input (p) or (c):";
    cin >> input;

    if (input == 'c'){
        cout << "Betrag (r):";
        cin >> input_r;
        cout << "Phase-Degree (a):";
        cin >> input_a;
        cn.setPolarCoordinates(input_r, input_a);
        cout << "The values are calculated with degrees:" << std::endl;
        cn.getCartesianCoordinates();
    } else if (input == 'p'){
        cout << "Realteil (x):";
        cin >> input_x;
        cout << "Imaginaerteil (y):";
        cin >> input_y;
        cn.setCartesianCoordinates(input_x, input_y);
        cout << "The values are calculated with degrees:" << std::endl;
        cn.getPolarCoordinates();
    } else {
        cout << "Incorrect input";
    }
}
