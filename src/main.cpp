//============================================================================
// Name        : main.cpp
// Author      : janhkrueger
// Description : Hello World in C++, tutorial for Gitlab CI/CD Pipeline
//============================================================================

#include <string>
#include <iostream>


class FeatureFlags {
  public:
    static constexpr bool hello = true; // This would also work with 'const' instead of 'constexpr' actually.
};



int main() {
  
  if (FeatureFlags::hello) {
    std::cout << "Hello World" << std::endl;
  }


  return 0;
}
