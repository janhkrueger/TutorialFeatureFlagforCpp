//============================================================================
// Name        : main.cpp
// Author      : janhkrueger
// Description : Hello World in C++, tutorial for Gitlab CI/CD Pipeline
//============================================================================

#include <string>
#include <iostream>

std::string get_env_var( std::string const & key ) {
  char * val;
  val = getenv( key.c_str() );
  std::string retval = "";
  if (val != NULL) {
    retval = val;
  }                                                                                  
  return retval;                                                                        
} 


int main() {
  
  if (get_env_var() ) {
    std::cout << "Hello World" << std::endl;
  }
  else {
    std::cout << "Hello Mars" << std::endl;
  }

  return 0;
}
