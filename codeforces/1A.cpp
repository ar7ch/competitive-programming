/*
1A
Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a.

What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.

Input
The input contains three positive integer numbers in the first line: n,  m and a (1 ≤  n, m, a ≤ 109).

Output
Write the needed number of flagstones.
*/
/* Accepted	15 ms	1900 KB */
#include <iostream>
#include <cmath>

int main ()
{
    unsigned long n, m, a;
    std::cin >> n >> m >> a;
    std::cout.setf(std::ios::fixed);
    std::cout.precision(0);
    std::cout << (int) ceil(n / (double) a) * ceil(m / (double) a) << '\n';
    return 0;
}
