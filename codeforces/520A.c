/*
520A
Pangram
A word or a sentence in some language is called a pangram if all the characters of the alphabet of this 
language appear in it at least once. Pangrams are often used to demonstrate fonts in printing or test the 
output devices.

You are given a string consisting of lowercase and uppercase Latin letters. Check whether this string is a 
pangram. We say that the string contains a letter of the Latin alphabet if this letter occurs in the string 
in uppercase or lowercase.

Input
The first line contains a single integer n (1 ≤ n ≤ 100) — the number of characters in the string.

The second line contains the string. The string consists only of uppercase and lowercase Latin letters.

Output
Output "YES", if the string is a pangram and "NO" otherwise.
*/
/* Accepted 15 ms 1800 KB */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef int bool;
#define true 1
#define false 0

bool is_pangram(bool a[]);
int main()
{
  char str[101];
  scanf("%d\n");
  scanf("%100s", str);
  bool letters_met[26];
  memset(letters_met, 0, sizeof(letters_met));
  int i = 0;
  while(str[i])
  {
    str[i] = tolower(str[i]);
    i++;
  }
  for(i = 0; i < strlen(str); i++)
  {
    if(isalpha(str[i]))
    {
      switch (str[i]) {
        case 'a':
		      letters_met[0] = true;
	         break;
	      case 'b':
		      letters_met[1] = true;
		      break;
	      case 'c':
		      letters_met[2] = true;
		       break;
	      case 'd':
		      letters_met[3] = true;
		       break;
	      case 'e':
		      letters_met[4] = true;
	 	      break;
	      case 'f':
		      letters_met[5] = true;
		      break;
	      case 'g':
		      letters_met[6] = true;
		      break;
	      case 'h':
		      letters_met[7] = true;
		      break;
	      case 'i':
		      letters_met[8] = true;
		      break;
	      case 'j':
		      letters_met[9] = true;
		      break;
	      case 'k':
		      letters_met[10] = true;
		      break;
	      case 'l':
		      letters_met[11] = true;
		      break;
	      case 'm':
		      letters_met[12] = true;
		      break;
	      case 'n':
		      letters_met[13] = true;
		      break;
	      case 'o':
		      letters_met[14] = true;
		      break;
	      case 'p':
		      letters_met[15] = true;
		      break;
	      case 'q':
		      letters_met[16] = true;
		      break;
	      case 'r':
		      letters_met[17] = true;
		      break;
	      case 's':
		      letters_met[18] = true;
		      break;
	      case 't':
		      letters_met[19] = true;
		      break;
	      case 'u':
		      letters_met[20] = true;
		      break;
	      case 'v':
		      letters_met[21] = true;
		      break;
	      case 'w':
		      letters_met[22] = true;
		      break;
	      case 'x':
		      letters_met[23] = true;
		      break;
	      case 'y':
		      letters_met[24] = true;
		      break;
	      case 'z':
		      letters_met[25] = true;
		      break;
      }
    }
  }
  if(is_pangram(letters_met))
    printf("YES\n");
  else
    printf("NO\n");
  return 0;

}
bool is_pangram(bool a[])
{
  for(int i = 0; i < 26; i++)
  {
    if(!a[i])
      return false;
  }
  return true;
}
