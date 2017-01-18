/*
750B
In this problem we assume the Earth to be a completely round ball and its surface a perfect sphere. The length of the equator and any meridian is considered to be exactly 40 000 kilometers. Thus, travelling from North Pole to South Pole or vice versa takes exactly 20 000 kilometers.

Limak, a polar bear, lives on the North Pole. Close to the New Year, he helps somebody with delivering packages all around the world. Instead of coordinates of places to visit, Limak got a description how he should move, assuming that he starts from the North Pole. The description consists of n parts. In the i-th part of his journey, Limak should move ti kilometers in the direction represented by a string diri that is one of: "North", "South", "West", "East".

Limak isn’t sure whether the description is valid. You must help him to check the following conditions:

If at any moment of time (before any of the instructions or while performing one of them) Limak is on the North Pole, he can move only to the South.
If at any moment of time (before any of the instructions or while performing one of them) Limak is on the South Pole, he can move only to the North.
The journey must end on the North Pole.
Check if the above conditions are satisfied and print "YES" or "NO" on a single line.

Input
The first line of the input contains a single integer n (1 ≤ n ≤ 50).

The i-th of next n lines contains an integer ti and a string diri (1 ≤ ti ≤ 106, ) — the length and the direction of the i-th part of the journey, according to the description Limak got.
*/
/* Accepted 46 ms	2044 KB */

#include <iostream>

int main()
{
  int n;
  std::cin >> n;
  int *t = new int[n];
  std::string *dir = new std::string[n];
  int distanceToNorthPole = 0;
  int distanceToSouthPole = 20000;
  bool atNorthPole = true;
  bool atSouthPole = false;
  for (int i = 0; i < n; i++)
  {
    std::cin >> t[i];
    std::cin >> dir[i];
  }
  if(dir[n-1] != "North")
  {
    std::cout << "NO" << '\n';
    return 0;
  }
  if(dir[0] != "South")
  {
    std::cout << "NO" << '\n';
    return 0;
  }
  if(t[n-1] > 20000 )
  {
    std::cout << "NO" << '\n';
    return 0;
  }

  for (int i = 0; i < n-1; i++) {
    if(dir[i] == "North" && t[i] > 20000)
    {
      std::cout << "NO" << '\n';
      return 0;
    }
    if(dir[i] == "South" && t[i] > 20000)
    {
      std::cout << "NO" << '\n';
      return 0;
    }
    if(dir[i] == "South")
    {
      distanceToSouthPole -= t[i];
      distanceToNorthPole += t[i];
    }
    if(dir[i] == "North")
    {
      distanceToSouthPole += t[i];
      distanceToNorthPole -= t[i];
    }
    if(distanceToSouthPole > 20000 || distanceToSouthPole < 0)
    {
      std::cout << "NO" << '\n';
      return 0;
    }
    if(distanceToNorthPole > 20000 || distanceToNorthPole < 0)
    {
      std::cout << "NO" << '\n';
      return 0;
    }
    if(distanceToSouthPole == 0)
      atSouthPole = true;
    else
      atSouthPole = false;

    if(distanceToNorthPole == 0)
      atNorthPole = true;
    else
      atNorthPole = false;


    if(atNorthPole && dir[i+1] != "South" && i != (n-1))
    {
      std::cout << "NO" << '\n';
      return 0;
    }
    if(atSouthPole && dir[i+1] != "North")
    {
      std::cout << "NO" << '\n';
      return 0;
    }
  }
  if (distanceToNorthPole - t[n-1] == 0)
    std::cout << "YES" << '\n';
  else
    std::cout << "NO" << '\n';
  return 0;
}
