// Hoppock, Zachary
// lightColor.cpp
// 9/30/2020
// Program will decide if the color of a light is green or red
// Version # 1
#include <iostream>
using namespace std;

int main()
{ 
  string light_color;
  const string color_green = "green";
  const string color_red = "red";
  cout << "Is the color of a light green or red? ";
  cin >> light_color;
  if (light_color == color_green)
  {
    cout << "The color of the light is green.";
  }
  else if (light_color == color_red)
  {
    cout << "The color of the light is red.";
  }
  return 0;
}
