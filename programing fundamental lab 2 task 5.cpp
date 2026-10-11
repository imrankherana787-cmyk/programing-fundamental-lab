include <iostream>
using namespace std;
int main () { 
 const double pi=3.149;
double r,length,base,height,width;
//1•circle
cout << "enter radius" << endl;
cin>>r;
 double circleArea=pi*r*r;
cout << "circleArea" << circleArea << endl;
//2•rectangle
cout << "enter length and width" << endl;
cin >> length>>width;
double rectangle=length*width;
cout << "area of rectangle" << rectangle << endl;
//3•area of a triangle 
cout << "enter base and height" << endl;
cin >> base >> height;
double triangle=base*height*0.5;
cout << "area of triangle" << triangle<< endl;
return 0;
}


