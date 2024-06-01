#pragma once
 
#include <iostream>
#include "Shapes_Square.h"
#include "Shapes_Triangle.h"
#include "Shapes_Circle.h"
#include "Area.h"

using namespace std;
using namespace shapes;

int main() {
    char choice;
    do {
        cout << "Choose a shape:" << endl;
        cout << "1. Square" << endl;
        cout << "2. Triangle" << endl;
        cout << "3. Circle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1/2/3/4): ";
        cin >> choice;
		

        switch (choice) {
            case 1: {
                double side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                Square square(side);
                double area = Area::calculateSquareArea(square);
                cout << "Area of the square: " << area << endl;
                break;
            }
            case 2: {
                double base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                Triangle triangle(base, height);
                double area = Area::calculateTriangleArea(triangle);
                cout << "Area of the triangle: " << area << endl;
                break;
            }
            case 3: {
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                double area = Area::calculateCircleArea(circle);
                cout << "Area of the circle: " << area << endl;
                break;
            }
            case 4:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please select 1, 2, 3, or 4." << endl;
        }
    } while (choice != '4');

    return 0;
};
