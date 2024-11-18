//Wan Aishah Wan Harun
//Prelimenary Questions

#include <iostream>
#include <math.h>

int vector_sum(double);
int main (){

    double xx,yy;

    std::cout << "Now enter X and y for the Vector Summation ";

    xx=2.3 ;
    yy=4.5 ;
    double new_answer=vector_sum;
    std::cout << "anwers= "<< new_answer << std::ends;
    return 0;

}
double vector_sum(int xx,int yy){
    return sqrt((xx*xx)+(yy*yy));
}