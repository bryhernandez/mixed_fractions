#include <iostream>
using namespace std;

int main() {
  int numerator = 1, denominator = 1;

  while(numerator != 0 && denominator != 0){
    cin >> numerator;
    cin >> denominator;
    if( numerator == 0 && denominator == 0)
      break;
    cout << numerator/denominator << " " << numerator%denominator << " / " << denominator << endl;
  }

}
