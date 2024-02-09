#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
     double side1 =  min(R1.x + R1.w,R2.x + R2.w)-max(R1.x,R2.x);
     double side2 =  min(R1.y,R2.y)-max(R1.y - R1.h,R2.y - R2.h);
     if(side1 > 0 && side2 > 0) return side1*side2;
     else return 0 ;
}