/*
764A
Comrade Dujikov is busy choosing artists for Timofey's birthday and is recieving calls from Taymyr from Ilia-alpinist.

Ilia-alpinist calls every n minutes, i.e. in minutes n, 2n, 3n and so on. Artists come to the comrade every m minutes, i.e. in minutes m, 2m, 3m and so on. The day is z minutes long, i.e. the day consists of minutes 1, 2, ..., z. How many artists should be killed so that there are no artists in the room when Ilia calls? Consider that a call and a talk with an artist take exactly one minute.

Input
The only string contains three integers — n, m and z (1 ≤ n, m, z ≤ 104).

Output
Print single integer — the minimum number of artists that should be killed so that there are no artists in the room when Ilia calls.
*/
/* Accepted 15 ms 2036 KB */

#include <iostream>

int main()
{
  int n, m, z;
  std::cin >> n >> m >> z;
  int artistsTimesPassed = 0;
  int callTimesPassed = 0;
  int timeForArtists = m;
  int timeForCall = n;
  bool isTimeForArtists = false;
  bool isTimeForCall = false;
  int howmuch = 0;
  for(int i = 1; i <= z; i++)
  {
    artistsTimesPassed++;
    callTimesPassed++;
    if(callTimesPassed == n){
      isTimeForCall = true;
      callTimesPassed = 0;
    }
    if(artistsTimesPassed == m){
      isTimeForArtists = true;
      artistsTimesPassed = 0;
    }
    if(isTimeForCall && isTimeForArtists)
      howmuch++;
    isTimeForCall = false;
    isTimeForArtists = false;
  }

  std::cout << howmuch << '\n';
  return 0;
}
