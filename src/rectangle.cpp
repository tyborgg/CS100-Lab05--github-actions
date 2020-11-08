#include <iostream>
#include "rectangle.hpp"

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

int Rectangle::area(){
	return width * height;
}

int Rectangle::perimeter(){
	int sideW = width * 2;
	int sideH = height * 2;
	int add = sideH + side W;
	return add;
}	
