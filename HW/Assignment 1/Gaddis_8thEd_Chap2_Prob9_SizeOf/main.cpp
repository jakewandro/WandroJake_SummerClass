/* 
 * File:   main.cpp
 * Author:Jake Wandro
 * Purpose: Size of all the data types
 * Created on August 22, 2016, 1:44 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    char a;
    unsigned char b;
    short c;
    unsigned short d;
    int e;
    unsigned int f;
    bool g;
    float h;
    double i;
    long double j;
    long k;
    unsigned long l;
    
    cout<<"Character has          "<<sizeof(a)<<" byte"<<endl;
    cout<<"Unsigned character has "<<sizeof(b)<<" bytes"<<endl;
    cout<<"short has              "<<sizeof(c)<<" bytes"<<endl;
    cout<<"unsigned short has     "<<sizeof(d)<<" bytes"<<endl;
    cout<<"integer has            "<<sizeof(e)<<" bytes"<<endl;
    cout<<"unsigned integer has   "<<sizeof(f)<<" bytes"<<endl;
    cout<<"boolean has            "<<sizeof(g)<<" bytes"<<endl;
    cout<<"float has              "<<sizeof(h)<<" bytes"<<endl;
    cout<<"double has             "<<sizeof(i)<<" bytes"<<endl;
    cout<<"long double has        "<<sizeof(j)<<" bytes"<<endl;
    cout<<"long has               "<<sizeof(k)<<" bytes"<<endl;
    cout<<"unsigned long has      "<<sizeof(l)<<" bytes"<<endl;
       
    
    return 0;
}

