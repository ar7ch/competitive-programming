#include <iostream>
#include <cstring>

int main()
{
    std::string s;
    std::cin >> s;
    char ch[100001];
    strcpy(ch, s.c_str());

    int answer = 0;
    unsigned long timesMeeted[7] = {0};

      for(int i = 0; i < s.size(); i++){
      switch (ch[i]) {
        case 'B':
          timesMeeted[0]++;
          continue;
        case 'u':
          timesMeeted[1]++;
          continue;
        case 'l':
          timesMeeted[2]++;
          continue;
        case 'b':
          timesMeeted[3]++;
          continue;
        case 'a':
          timesMeeted[4]++;
          continue;
        case 's':
          timesMeeted[5]++;
          continue;
        case 'r':
          timesMeeted[6]++;
          continue;
      }
      
    }
      while(timesMeeted[0] > 0 && timesMeeted[1] >= 2 && timesMeeted[2] > 0 && timesMeeted[3] > 0 && timesMeeted[4] >= 2 && timesMeeted[5] > 0 && timesMeeted[6] > 0 ){
        timesMeeted[0]--;
        timesMeeted[1]-= 2;
        timesMeeted[2]--;
        timesMeeted[3]--;
        timesMeeted[4]-= 2;
        timesMeeted[5]--;
        timesMeeted[6]--;
        answer++;
      }
    std::cout << answer << '\n';
  }
