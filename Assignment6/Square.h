
/* 
 * File:   Square.h
 * Author: bhitt
 *
 * Created on November 9, 2019, 3:03 PM
 */

#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle{   
public:
    using Rectangle::Rectangle;
    int calcArea();
};

#endif /* SQUARE_H */

