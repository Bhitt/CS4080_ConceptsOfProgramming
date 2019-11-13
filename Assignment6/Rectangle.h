
/* 
 * File:   Rectangle.h
 * Author: bhitt
 *
 * Created on November 9, 2019, 2:53 PM
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle{
private:
    int width;
    int height;
    
public:
    Rectangle(int,int);                 //constructor
    virtual int calcArea();            //virtual calcArea function (dynamic)
    int calcArea2();                   //static calcArea function (static)
    int getWidth() {return width;}      //accessor
    int getHeight() {return height;}    //accessor
    void setWidth(int w) {width=w;}     //mutator
    void setHeight(int h) {height=h;}   //mutator
};

#endif /* RECTANGLE_H */

