
/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Magdalena Sobrino-Almanzar
 */


#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    int a,b,c;
    float r1,r2,real,imaginary;//declare variables//
    
    cout<<"The quadratic equation is of the form ax^2+bx+c. \n";
    
    cout<<"Enter the values for a , b and c for the quadratic equation:";
    cin>>a>>b>>c;
    

  int disc = (b*b)-(4*a*c); //calculate discriminant //

    //comparing the values of discriminant//
    if(disc == 0){
        r1 =(float)(-b + sqrt(disc))/(2*a);
        cout << "The roots of the quadratic equation are real and same.\nThe roots are r1=r2="<<r1 << "\n";
        }
    else if(disc>0){
        r1 =(float)(-b+sqrt(disc))/(2*a);
        r2 =(float)(-b-sqrt(disc))/(2*a);
        cout << "The roots of the quadratic equation are real and different.\nThe roots are r1="<<r1<<" and r2="<<r2 << "\n";
        }
    else{
        real =(float) (-b/(2*a));
        imaginary =(float)(sqrt(-disc)/(2*a));
        cout << "The roots of the quadratic equation are complex and imaginary roots.\nThe roots are r1 = "<<real<<"+"<<imaginary<<"i"<< "\n";
        cout << "r2 = " << real << "-" << imaginary << "i" << "\n";
    }

    return 0;
}    

