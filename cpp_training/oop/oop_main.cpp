#include "date.h"
#include <iostream>
#include "circle.h"
#include "rectangle.h"


using namespace std;

int main(){
    Date date(28, 2, 1998);
    date.printDate();

    date.addDay();
    date.printDate();

    date++;
    date.printDate();

    ++date;
    date.printDate();

    date += 10;
    date.printDate();

    
    //casting
    int a = (int)1.234;
    cout << a << endl;

    int b = static_cast<int>(2.456);
    cout << b << endl;

    int* time = date;
    cout << time[0] << endl;
    cout << time[1] << endl;
    cout << time[2] << endl;


    // Inheritance
    Circle circle = Circle(0, 0, 5);
    float area;
    try{
        area = circle.calcArea();
        cout << "Circle area is: " << area << endl;
        area = circle.Shape::calcArea();
        cout << "Circle area is: " << area << endl;
    }
    catch(const char* str){
        cout << "Error: " << str << endl;
    }
    cout << Circle::counter << endl;
    circle.~Circle();
    cout << Circle::counter << endl;


    // Polymorphism
    int numOfShapes = 3;
    Shape** shapesArray = new Shape*[numOfShapes];
    shapesArray[0] = new Circle(0, 0, 4);
    shapesArray[1] = new Rectangle(4, 6);
    shapesArray[2] = new Circle(1, 2, 5);

    for (int i=0; i<numOfShapes; i++){
        try{
            auto area = shapesArray[i]->calcArea();
            cout << "Area is: " << area << endl;
        }
        catch(const char* str){
            cout << "Error: " << str << endl;
        }
    }



    return 0;
}