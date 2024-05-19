#include <iostream>
#include <iomanip>
#include <cmath>

const long double PI = 3.141592653589793238462643383279502884L;

int main() 
{
  long double ans = 0, xk;
  int n = 6, m = 13, N = 1 + n * (m - 1), k = 0;
  long double a = 1.0L;

  while(k <= N - 1)
  {
    xk = a + (k * PI) / N;
    ans += powl((sinl(13 * xk) / sinl(xk)), 12);
    k++;
  }
  ans = ans * 13 / N;

  std::cout << std::fixed << std::setprecision(0) << ans << std::endl;

  return 0;
}