#include<iostream>
using namespace std;

int print_ftoc_table(int start, int end, int jump)
{
  int i=start;
  float c;
  while (i <= end)
  {
      c = ((i-32)*5.0)/9.0;
      cout << i << "  " << c << endl;
      i += jump;
  }
  
}

int main()
{
    int start, end, jump;
    cin >> start >> end >> jump;
    print_ftoc_table(start, end, jump);
}