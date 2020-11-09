#include <iostream>
#include "../header/rectangle.hpp"

using namespace std;

Rectangle::Rectangle(int w, int h){
	this->width = w;
	this->height = h;
}

Rectangle::Rectangle(){
}

void Rectangle::set_width(int w){
	this->width = w;
}

void Rectangle::set_height(int h){
	this->height = h;
}

int Rectangle::get_width(){
	return width;
}

int Rectangle::get_height(){
	return height;
}

int Rectangle::area(){

	return width * height;
}

int Rectangle::perimeter(){

	int sideW = width * 2;
	int sideH = height * 2;
	int add = sideH + sideW;
	return add;
}	
