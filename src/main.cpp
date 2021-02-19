//============================================================================
// Name        : main.cpp
// Author      : janhkrueger
// Description : Hello World in C++, tutorial for Gitlab CI/CD Pipeline
//============================================================================

#include <string>
#include <iostream>

std::string getEnvVar( std::string const & key ) {
    char * val = getenv( key.c_str() );
    return val == NULL ? std::string("") : std::string(val);
}

int main() {
  
  if ( getEnvVar("hello") != "" ) {
    std::cout << "Hello World" << std::endl;
  }
  else {
    std::cout << "Hello Mars" << std::endl;
  }

  return 0;
}
