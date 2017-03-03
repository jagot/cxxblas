#include "cxxblas.h"
#include <complex>
#include <vector>
#include <iostream>

template<class T>
void pvec(const std::vector<T>& v)
{
  std::cout << "[";
  for(const auto &e : v)
    std::cout << e << " ";
  std::cout << "]" << std::endl;
}

int main(int argc, char* argv[])
{
  int n = 10;
  std::vector<std::complex<double>> x(n, {0.0, 1.0});

  pvec(x);

  cxxblas::scale(5.0, x);
  
  pvec(x);

  return 0;
}
