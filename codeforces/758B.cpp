#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
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
    printf("%d %d %d %d\n", toChange[0], toChange[1], toChange[2], toChange[3]);
  }
