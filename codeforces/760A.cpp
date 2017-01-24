/*
760A
Petr wants to make a calendar for current month. For this purpose he draws a table in which columns 
correspond to weeks (a week is seven consequent days from Monday to Sunday), rows correspond to weekdays, 
and cells contain dates. For example, a calendar for January 2017 should look like on the picture:

http://codeforces.com/predownloaded/ca/26/ca26abffc774467d105ce266640bda655e2dd61f.png

Petr wants to know how many columns his table should have given the month and the weekday of the first date 
of that month? Assume that the year is non-leap.

Input
The only line contain two integers m and d (1 ≤ m ≤ 12, 1 ≤ d ≤ 7) — the number of month (January is the 
first month, December is the twelfth) and the weekday of the first date of this month (1 is Monday, 7 is 
Sunday).

Output
Print single integer: the number of columns the table should have.
*/
/* Accepted 31 ms 2044 KB */

#include <iostream>

int main()
{
  int m,d;
  std::cin >> m >> d;
  int currentDay = d;
  int columns = 0;
  int daysInMonths[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  for(int i = 0; i <= daysInMonths[m-1]; i++) // m-1 bc of array indexing 
  {
    if(currentDay == 7)
    {
      columns++;
      currentDay = 1;
    }
    currentDay++;
  }
  std::cout << columns << '\n';
}
