/* This program converts a distance in meters to the corresponding 
 * English distance in feet or inches
 * 1 inch = 0.0254 meters
 * 1 foot = 12 inches
 */

#include <iostream>
#include <cmath>
using namespace std;

void distanceConversion(double meters, double & inches, double & foot);

int main() {
  cout << "The program converts a distance in meters to inches and foot" << endl;
  double meters, inches, foot;
  cout << "Enter a distance in meters: ";
  cin >> meters;
  distanceConversion(meters, inches, foot);
  cout << meters << " meters" << " equal to " 
       << inches << " inches" << " or "
       << foot << " foot." << endl;
  return 0;
}

void distanceConversion(double meters, double & inches, double & foot) {
  inches = 0.0254 * meters;
  foot = 12 * inches;
}
