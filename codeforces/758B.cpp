/*
758B
Nothing is eternal in the world, Kostya understood it on the 7-th of January when he saw partially dead 
four-color garland.

Now he has a goal to replace dead light bulbs, however he doesn't know how many light bulbs for each color 
are required. It is guaranteed that for each of four colors at least one light is working.

It is known that the garland contains light bulbs of four colors: red, blue, yellow and green. The garland 
is made as follows: if you take any four consecutive light bulbs then there will not be light bulbs with 
the same color among them. For example, the garland can look like "RYBGRYBGRY", "YBGRYBGRYBG", "BGRYB", but 
can not look like "BGRYG", "YBGRYBYGR" or "BGYBGY". Letters denote colors: 'R' — red, 'B' — blue, 'Y' — 
yellow, 'G' — green.

Using the information that for each color at least one light bulb still works count the number of dead 
light bulbs of each four colors.

Input
The first and the only line contains the string s (4 ≤ |s| ≤ 100), which describes the garland, the i-th 
symbol of which describes the color of the i-th light bulb in the order from the beginning of garland:

'R' — the light bulb is red,
'B' — the light bulb is blue,
'Y' — the light bulb is yellow,
'G' — the light bulb is green,
'!' — the light bulb is dead.
The string s can not contain other symbols except those five which were described.

It is guaranteed that in the given string at least once there is each of four letters 'R', 'B', 'Y' and 
'G'.

It is guaranteed that the string s is correct garland with some blown light bulbs, it means that for 
example the line "GRBY!!!B" can not be in the input data.

Output
In the only line print four integers kr, kb, ky, kg — the number of dead light bulbs of red, blue, yellow 
and green colors accordingly.
*/
/* Accepted 30 ms 2044 KB  */

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
int main()
{
    std::string s;
    std::cin >> s;
    char *ch = new char[s.length()+1];
    std::strcpy(ch, s.c_str());
    int currentLamp = 0;
    int counter = 0;
    int toChange[4] = {0}; //R - toChange[0], B - toChange[1], Y - toChange[2], G - toChange[3]
    char posd[4];
    posd[0] = ch[0];
    posd[1] = ch[1];
    posd[2] = ch[2];
    posd[3] = ch[3];

      for(int i = 0; i < s.length(); i++){
        if(counter == 0 && ch[i] != '!'){
          posd[0] = ch[i];
        }
        else if(counter == 1 && ch[i] != '!')
        {
        posd[1] = ch[i];

        }
        else if(counter == 2 && ch[i] != '!')
        {
          posd[2] = ch[i];

        }
        else if(counter == 3 && ch[i] != '!'){
          posd[3] = ch[i];

        }
        counter++;
        if (counter == 4) counter = 0;
      }

      counter = 0;

      for(int i = 0; i <= s.length(); i++){
        if(ch[i] == '!'){

          if(counter == 0)
          {
          if(posd[0] == 'R') toChange[0]++;
          else if(posd[0] == 'B') toChange[1]++;
          else if(posd[0] == 'Y') toChange[2]++;
          else if(posd[0] == 'G') toChange[3]++;
          }
          else if(counter == 1)
          {
            if(posd[1] == 'R') toChange[0]++;
            else if(posd[1] == 'B') toChange[1]++;
            else if(posd[1] == 'Y') toChange[2]++;
            else if(posd[1] == 'G') toChange[3]++;
          }
          else if(counter == 2)
          {
            if(posd[2] == 'R') toChange[0]++;
            else if(posd[2] == 'B') toChange[1]++;
            else if(posd[2] == 'Y') toChange[2]++;
            else if(posd[2] == 'G') toChange[3]++;
          }
          else if(counter == 3){
            if(posd[3] == 'R') toChange[0]++;
            else if(posd[3] == 'B') toChange[1]++;
            else if(posd[3] == 'Y') toChange[2]++;
            else if(posd[3] == 'G') toChange[3]++;
        }
      }
      counter++;
      if (counter == 4) counter = 0;
    }
    delete[] ch;
    printf("%d %d %d %d\n", toChange[0], toChange[1], toChange[2], toChange[3]);
  }
