/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Rectangle.h"

Rectangle::Rectangle(int w, int h){
    width = w;
    height = h;
}

int Rectangle::calcArea(){
    int area = width * height;
    return area;
}

int Rectangle::calcArea2(){
    int area = width * height;
    return area;
}
