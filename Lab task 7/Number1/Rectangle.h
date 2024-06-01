#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:  // anything from this point on is private
    double length_;  
    double width_;

public:
    Rectangle(); // declaring a default constructer
    ~Rectangle(); 

    // declaring Accessor methods
    void setLength(double length);
    void setWidth(double width);
    double getLength() const; 
    double getWidth() const; 

    // declaring member function to calculate area
    double calculateArea() const; 
};

#endif // RECTANGLE_H