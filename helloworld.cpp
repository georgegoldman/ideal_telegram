#include <iostream>
// #include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  int j = 5;
  // printf("%d\n", k);
  // int sheep_counter = 0;
  // sheep_counter = sheep_counter + 1;
  // printf("%d\n", sheep_counter);
  // printf("%c\n", character);
  // int herd_size = 110;
  // cout << herd_size << endl;
  // cout << "Byte in hex:" << hex << byte << endl;
  // base convertion 
  // int byte = 255;
  // cout << setbase(8) << byte << endl;
  
  // float f = 1.5;
  // int i = static_cast<int>(f);
  // cout << i  << endl;
 
  int value;
  cout << "Give me a number and i will square it!\n";
  cin>> value;

  // int square = value * value;
  // cout << "You'v given "<< value << endl;
  // cout << "the squared value is "<< square << endl;
  if(value >= 0.0) {
    float squareroot = sqrtf(value);
    cout<< "You'v given: "<< value << endl;
    cout << "the sqaure root is: "<< squareroot << endl;
  }
}