#include <iostream>

using namespace std;

int main()
{
  int num;

  cout << "Enter the Number to check condition:" << endl;
  cin >> num;

  if (num > 0)
  {
    cout << "The Number is +ve";
  }
  else
  {
    cout << "The Number is -ve";
  }

  return 0;
}