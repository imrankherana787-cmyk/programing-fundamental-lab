#include <iostream>
#include <iomanip>
using namespace std;
int main () { 
 double item1= 12.95;
 double item2= 24.95;
 double item3= 6.95;
 double item4= 14.95;
 double item5= 3.95;
 double subtotal ;
 double salestax;
 double total ;
 subtotal=item1 +item2+item3+item4+item5;
 salestax=subtotal* 0.06;
 total= subtotal+salestax;
 cout << "item1 price=" << item1 <<"$"<<  endl;
cout << "item2 price=" << item2 << "$"<< endl;
cout << "item3 price=" << item3 << "$"<< endl;
cout << "item4 price=" << item4 << "$"<< endl;
cout << "item5 price=" << item5 <<  "$" << endl;
cout << "subtotal" << subtotal << endl;
cout << "salestax" << salestax << endl;
cout << "total" << total << endl;
return 0;
}