#include <string>
#include <iostream>

template <typename T>
T const&  max(T const& a , T const& b)
{
  std::cout <<  "template vesion\n";
  return a < b ? b : a;
}

char const * max (char const* a, char const* b)
{
  std::cout <<  "non-template vesion\n";
  return std::strcmp(a, b) ? b : a;
}

template <typename T>
T const& max(T const& a, T const& b, T const& c)
{
  std::cout << "the template version\n";
  return max(max(a,b), c);
}

int main()
{
  const char* a = "abc";
  const char* b = "bcd";
  const char* c = "kekeke";
  auto keke = max(a,b);
  max(a,b,c);
  return 0;
}
//the question is why use the template version other than the const char* version.
