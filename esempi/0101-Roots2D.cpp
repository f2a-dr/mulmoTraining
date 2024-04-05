/* roots of a 2nd degree equation with real coefficients */
#include <cmath>
#include <iostream>

using namespace std;

int main() {
   double a, b, c;
   cout << "Solving ax^2+bx+c=0, enter a: "; cin >> a;
   cout << endl << " enter b: "; cin >> b;
   cout << endl << " enter c: "; cin >> c;
   cout << "Solving "<< a << "x^2 + "<< b <<"x + "<< c << "=0"<<endl;

   double delta = b*b - 4.0*a*c; 
   if (delta < 0.0) {
      cerr << "Sorry, no real roots."; return -1; 
   }
   delta = sqrt (delta);
   double x1, x2;
   x1 = (-b + delta) / (2.0 * a);  x2 = (-b - delta) / (2.0 * a);
   
   cout << "Real roots: " << x1 << ", " << x2 << endl;
   return 0; 
}
