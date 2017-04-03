/*
141A
Amusing Joke
So, the New Year holidays are over. Santa Claus and his colleagues can take a rest and have guests at last. When two "New Year and Christmas Men" meet, thear assistants cut out of cardboard the letters from the guest's name and the host's name in honor of this event. Then the hung the letters above the main entrance. One night, when everyone went to bed, someone took all the letters of our characters' names. Then he may have shuffled the letters and put them in one pile in front of the door.

The next morning it was impossible to find the culprit who had made the disorder. But everybody wondered whether it is possible to restore the names of the host and his guests from the letters lying at the door? That is, we need to verify that there are no extra letters, and that nobody will need to cut more letters.

Help the "New Year and Christmas Men" and their friends to cope with this problem. You are given both inscriptions that hung over the front door the previous night, and a pile of letters that were found at the front door next morning.

Input
The input file consists of three lines: the first line contains the guest's name, the second line contains the name of the residence host and the third line contains letters in a pile that were found at the door in the morning. All lines are not empty and contain only uppercase Latin letters. The length of each line does not exceed 100.

Output
Print "YES" without the quotes, if the letters in the pile could be permuted to make the names of the "New Year and Christmas Men". Otherwise, print "NO" without the quotes.
*/
/* Accepted 30 ms	1800 KB */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef int bool;
#define true 1
#define false 0

int main()
{
  char name1[101];
  char name2[101];
  char pile[101];
  char names[202];

  int letters_count_names[26] = { 0 };
  int letters_count_pile[26] = { 0 };
  scanf("%100s\n%100s\n%100s", name1, name2, pile);
  strcat(names, name1);
  strcat(names, name2);
  if(strlen(names) != strlen(pile))
  {
    printf("NO\n");
    return 0;
  }
  for(int i = 0; i < strlen(names); i++)
  {
    if(isupper(names[i]))
      names[i] = tolower(names[i]);
    if(isupper(pile[i]))
      pile[i] = tolower(pile[i]);
  }

  for(int i = 0; i < strlen(names) ; i++)
  {
    switch(names[i]) //thank god i have python scripts for stuff like that
    {
      case 'a':
      	letters_count_names[0]++;
      	break;
      case 'b':
      	letters_count_names[1]++;
      	break;
      case 'c':
      	letters_count_names[2]++;
      	break;
      case 'd':
      	letters_count_names[3]++;
      	break;
      case 'e':
      	letters_count_names[4]++;
      	break;
      case 'f':
      	letters_count_names[5]++;
      	break;
      case 'g':
      	letters_count_names[6]++;
      	break;
      case 'h':
      	letters_count_names[7]++;
      	break;
      case 'i':
      	letters_count_names[8]++;
      	break;
      case 'j':
      	letters_count_names[9]++;
      	break;
      case 'k':
      	letters_count_names[10]++;
      	break;
      case 'l':
      	letters_count_names[11]++;
      	break;
      case 'm':
      	letters_count_names[12]++;
      	break;
      case 'n':
      	letters_count_names[13]++;
      	break;
      case 'o':
      	letters_count_names[14]++;
      	break;
      case 'p':
      	letters_count_names[15]++;
      	break;
      case 'q':
      	letters_count_names[16]++;
      	break;
      case 'r':
      	letters_count_names[17]++;
      	break;
      case 's':
      	letters_count_names[18]++;
      	break;
      case 't':
      	letters_count_names[19]++;
      	break;
      case 'u':
      	letters_count_names[20]++;
      	break;
      case 'v':
      	letters_count_names[21]++;
      	break;
      case 'w':
      	letters_count_names[22]++;
      	break;
      case 'x':
      	letters_count_names[23]++;
      	break;
      case 'y':
      	letters_count_names[24]++;
      	break;
      case 'z':
      	letters_count_names[25]++;
      	break;
    }
  }
  for(int i = 0; i < strlen(pile); i++)
  {
    switch(pile[i])
    {
      case 'a':
      	letters_count_pile[0]++;
      	break;
      case 'b':
      	letters_count_pile[1]++;
      	break;
      case 'c':
      	letters_count_pile[2]++;
      	break;
      case 'd':
      	letters_count_pile[3]++;
      	break;
      case 'e':
      	letters_count_pile[4]++;
      	break;
      case 'f':
      	letters_count_pile[5]++;
      	break;
      case 'g':
      	letters_count_pile[6]++;
      	break;
      case 'h':
      	letters_count_pile[7]++;
      	break;
      case 'i':
      	letters_count_pile[8]++;
      	break;
      case 'j':
      	letters_count_pile[9]++;
      	break;
      case 'k':
      	letters_count_pile[10]++;
      	break;
      case 'l':
      	letters_count_pile[11]++;
      	break;
      case 'm':
      	letters_count_pile[12]++;
      	break;
      case 'n':
      	letters_count_pile[13]++;
      	break;
      case 'o':
      	letters_count_pile[14]++;
      	break;
      case 'p':
      	letters_count_pile[15]++;
      	break;
      case 'q':
      	letters_count_pile[16]++;
      	break;
      case 'r':
      	letters_count_pile[17]++;
      	break;
      case 's':
      	letters_count_pile[18]++;
      	break;
      case 't':
      	letters_count_pile[19]++;
      	break;
      case 'u':
      	letters_count_pile[20]++;
      	break;
      case 'v':
      	letters_count_pile[21]++;
      	break;
      case 'w':
      	letters_count_pile[22]++;
      	break;
      case 'x':
      	letters_count_pile[23]++;
      	break;
      case 'y':
      	letters_count_pile[24]++;
      	break;
      case 'z':
      	letters_count_pile[25]++;
      	break;
    }
  }
  for(int i = 0; i < 26; i++)
  {
    if(letters_count_names[i] != letters_count_pile[i])
    {
      printf("NO\n");
      return 0;
    }
  }
  printf("YES\n");
  return 0;
}
