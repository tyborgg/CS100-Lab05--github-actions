#include <iostream>
#include "../header/rectangle.hpp"

using namespace std;

int main(){

int width = 0;
int height = 0;
Rectangle call;

cout << "Perimeter: " << call.perimeter(4,2) << endl;
cout << "Area: " << call.area(4,2) << endl;

cin >> width;
cin >> height;

cout << "Perimeter: " << call.perimeter(width,height) << endl;
cout << "Area: " << call.area(width,height) << endl;


return 0;
}
