#include <iostream>
#include <string>

using namespace std;

int main()
{
  std::cout << "Hello world.\n";
  cout << "Hello world.\n";

  std::cout << "Hello world." << std::endl;
  cout << "Hello world." << endl;

  std::string message = "I love";
  string message2 = "I love";

  {
    int x = 10;
    cout << x << endl;
  }

  if(true){
    int x = 10;
    cout << x << endl;
  }

  cin >> message;
  cout << message;



}
