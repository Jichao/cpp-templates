
#include <string>
#include <iostream>

template <typename T>
T const&  max(T const& a , T const& b)
{
  std::cout <<  "template vesion\n";
  return a < b ? b : a;
}

template <typename T>
T const& max(T const& a, T const& b, T const& c)
{
  std::cout << "the template version\n";
  return max(max(a,b), c);
}

int const * max (int const* a, int const* b)
{
  std::cout <<  "non-template vesion\n";
  return a < b? b : a;
}

int main()
{
  return max(1,2,3);
}
//the question is why use the template version other than the const char* version.
