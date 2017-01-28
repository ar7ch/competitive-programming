#include <iostream>
#include <cmath>
#include <vector>
#include <set>
int main()
{
  long long n;
  int k;
  std::cin >> n >> k;
  std::set <unsigned long long> divisorsSet;
  std::set <unsigned long long>::iterator itSet;
  std::set <unsigned long long>::const_iterator cItSet;

  for (int i = 1; i <= sqrt(n); ++i)
  {
    if (n % i == 0)
    {
        divisorsSet.insert((unsigned long long)i);
        if(n/i != 0)
          divisorsSet.insert((unsigned long long)n/i);
    }
  }
  std::vector<unsigned long long> divisors(divisorsSet.begin(), divisorsSet.end());
  if(divisors.size() >= k)
    std::cout << divisors.at(k-1) << '\n';
  else
    std::cout << "-1" << '\n';
}
