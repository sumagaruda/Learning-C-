#include <iostream>
using namespace std;

int is_prime(int num)
{
    for (int i=2; i*i <= num; i++)
    {
        if (num%i == 0)
        {
            return false;
        }
    }
    return true;
}
void print_prime (int start, int end)
{
  for (int i=start; i<=end; i++)
  {
      if (is_prime(i))
      {
          cout << i << "  ";
      }
  }
}

int main()
{
    int n;
    cin >> n;
    print_prime(2,n);
}