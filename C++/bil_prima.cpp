#include <iostream>
using namespace std;

int cekBilPrima(int);

int main()
{
  int n;

  cout << "Masukan Bilangan Bulat: ";
  cin >> n;
  
  if(cekBilPrima(n) == 0)
    cout << n << " bilangan prima.";
  else
    cout << n << " bukan bilangan prima";
  return 0;
}
int cekBilPrima(int n)
{
  bool flag = false;

  for(int i = 2; i <= n/2; ++i)
  {
      if(n%i == 0)
      {
          flag = true;
          break;
      }
  }
  return flag;
}

