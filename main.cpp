//
//  main.cpp
//  PureAbstractBase
//
//  Created by Bo Ying Liu on 11/10/19.
//  Copyright © 2019 Bo Ying Liu. All rights reserved.
//

#include <iostream>
using namespace std;

//Defines abstract class and its members.
class BasicShape
{
private:
    double area;
    
public:
    
    double getArea()
    {
        return area;
    }
    
    void setArea(double a)
    {
        area = a;
    }
    
    virtual void calcArea() = 0;
};

//Defines the base class Circle.
class Circle : public BasicShape
{
private:
    long int centerX;
    long int centerY;
    int radius;
    
public:
    
    //Constructor
    Circle(long int X, long int Y, double r)
    {
        
        centerX = X;
        centerY = Y;
        radius = r;
        getArea();
    }
    
    //Getter functions
    long int getcenterX()
    {
        return centerX;
    }
    
    long int getcenterY()
    {
        return centerY;
    }
    
    //Overrides method to calculate area.
    void calcArea()
    {
        double temp = 3.14 * radius * radius;
        setArea(temp);
    }
    
};

//Defines the base class Rectangle.
class Rectangle : public BasicShape
{
private:
    long int width;
    long int length;
    
public:
    
    //Constructor
    Rectangle (long int w, long int l)
    {
        
        width = w;
        length = l;
        getArea();
    }
    
    //Getter functions
    long int getWidth()
    {
        return width;
    }
    
    long int getLength()
    {
        return length;
    }
    
    //Overrides method to calculate area.
    void calcArea()
    {
        double temp = width * length;
        setArea(temp);
    }
    
};

//Driver class
int main()
{   //initial user input variables for user enter
    long int centerX;
    long int centerY;
    double radiusR;
    
    long int recWidth;
    long int recLength;
    
    
    //ask user for input for circle and rectangle shape variables
    cout<<"\nPlease enter the x coordinate of the circle's center: ";
    cin>>centerX;
    cout<<"\nPlease enter the y coordinate of the circle's center: ";
    cin>>centerY;
    cout<<"\nPlease enter the radius of the circle: ";
    cin>>radiusR;
    Circle circle(centerX, centerY, radiusR);
    circle.calcArea();
    cout << "\nThe area of the circle is: " << circle.getArea();
    
    
    cout<<"\nPlease enter the width of the rectangle: ";
    cin>>recWidth;
    cout<<"\nPlease enter the length of the rectangle: ";
    cin>>recLength;
    Rectangle rect(recWidth,recLength);
    rect.calcArea();
    cout << "\nThe area of the rectangle is: " << rect.getArea() <<"\n";
    
  
    
    return 0;
}
