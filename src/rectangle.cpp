#include <iostream>
#include "../header/rectangle.hpp"

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
	if(width <= 0 || height <= 0){
		return "Error: cannot accept negative or zero values";
	}

	return width * height;
}

int Rectangle::perimeter(){
	if(width <= 0 || height <= 0){
                return "Error: cannot accept negative or zero values";
        }

	int sideW = width * 2;
	int sideH = height * 2;
	int add = sideH + side W;
	return add;
}	
