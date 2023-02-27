#include <iostream>
// #include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  // int j = 5;
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
 
  // int value;
  // cout << "Give me a number and i will square it!\n";
  // cin>> value;

  // int square = value * value;
  // cout << "You'v given "<< value << endl;
  // cout << "the squared value is "<< square << endl;
  // if(value >= 0.0) {
  //   float squareroot = sqrtf(value);
    // cout<< "You'v given: "<< value << endl;
    // cout << "the sqaure root is: "<< squareroot << endl;
  // }
  // int i = 10, j = 3;
  // int k = (i % j * i /3  )/(j % i- j /i);
  // cout << k << endl;
  // char z = 'Z';
  // cout<< (int)z << endl;

  // float a;
  // cin >> a;
  // a *= a;
  // a *= a;
  // a = sqrtf (a) * sqrtf(a);
  // cout << a ;
  // cout << "hi"<< endl;
  // char character = '\x27';
  // cout << character << endl;
  // char character = 'X';
  // int integer  = character;
  // cout << character << " " << static_cast<int>(character) << endl;
  // cout << character << " " << static_cast<char>(character) << endl;
  // int i = 10, j = 3;
  // int k = (i % j * i / 3) / (j % i - j / i);
  // cout << k << endl;
  // char character = 'Z';
  // cout << static_cast<int>(character) << endl;
  // int i, j;
  // cin >> i;
  // j = i;
  // if (i >= 9)
  //   i += 9 - i;
  // j /= i;
  // cout << j;

  // float a, b;
  // cin >> a;
  // if (b >= 1)
  //   a += b;
  // if (a > b)
  //   b += a;
  // cout << a + b << endl;

//   float a;
//   cin >> a;
//   a *= a;
//   a *= a;
//   a = sqrtf (a) * sqrtf(a);
//   cout << a;
//  }
  // short counter = 2424;
  // cout << counter << endl;

  // signed positive = -3;
  // cout << positive << endl;

  // unsigned char little_counter = 0;
  // signed char satisfaction_level = -1;
  // cout<< little_counter << endl;
  // cout<< satisfaction_level<<endl;
  // float x = 1.0/4.0;
  // int i = x;
  // cout << i << endl;
  // int i = 3, j, k;
  // if (i > 0) j = 2 + i * i;
  // if (k >= 0) k = j %i %k;
  // cout << k << endl;
  // int k = 1 % 2 + 4 % 2;
  // cout << k<< endl;

  // float x;
  // cin>> x;
  // cout<< scientific<< "x"<<endl;
  // char x = 0x1A;
  // cout<< static_cast<int>(x) <<endl;

  // int i;
  // cin >> i;
  // cout << i << hex << i + i << oct << i << endl;
  // int i = 3, j = ++ i, k = ++i;

  // cin >> i;
  // cout << k + i << j - i << i * i;

  // int i = 3, j = 3, k = -1;

  // if (i > 0) {
  //   if (j <= 0) {
  //     if (k < 0)
  //       k++;
  //     if (k <= 0)
  //       k--;

  //   if (j > 0)
  //     i++;
  //   }
  //   if (i <= 0)
  //     j++;
  //   k = i + j + k;
  //   cout << k << endl;
  // }


  // unsigned char little_counter = 0;
  // signed char satisfication_level = -1;
  // cout<< static_cast<char>(little_counter) << endl;
  // cout<< static_cast<int>(satisfication_level) << endl;
  // float num = 11111111000.0 ;
  // float num1 = 0.00011111111;
  // cout << num + num1 << endl;
  // int number1, number2;

  // read two numbers 
  // cin >> number1;
  // cin >> number2;
  // we willsave the lagest nunmber here
  // we will assume the former number is the largest
  // we will check it soon
  // int max = number1;

  // we will check if the assumption was false
  // if (number2 > max)
  //   max = number2;

  // cout<<"the largest number is "<< max <<endl;

  int num1, num2, num3;

  // read in the 3 number

  cin >> num1;
  cin >> num2;
  cin >> num3;

  int max = num1;

  if (num2 > max)
    max = num2;
  if (num3 > max)
    max = num3;
  
  cout<< "the largest number is "<< max <<endl;

}