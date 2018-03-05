#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "rect.h"
#include "triangle.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
  string s;

  s = box(4,3);
  cout << s << endl;
  cout << "\n-----------------\n\n";
  s = triangle(4);
  cout << s << endl;
  return 0;
}
