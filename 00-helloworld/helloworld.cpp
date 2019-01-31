#include <iostream>

int main(int argc, const char* argv[])
{
  using namespace std;
  
  const string message = "Hello, World!";
  cout << message << endl;

  return cout.good() ? EXIT_SUCCESS : EXIT_FAILURE;
}
