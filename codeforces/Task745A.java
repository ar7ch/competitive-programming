/*
A. Hongcow Learns the Cyclic Shift

Hongcow is learning to spell! One day, his teacher gives him a word that he needs to learn to spell. Being a dutiful student, he immediately learns how to spell the word.

Hongcow has decided to try to make new words from this one. He starts by taking the word he just learned how to spell, and moves the last character of the word to the beginning of the word. He calls this a cyclic shift. He can apply cyclic shift many times. For example, consecutively applying cyclic shift operation to the word "abracadabra" Hongcow will get words "aabracadabr", "raabracadab" and so on.

Hongcow is now wondering how many distinct words he can generate by doing the cyclic shift arbitrarily many times. The initial string is also counted.
Input

The first line of input will be a single string s (1 ≤ |s| ≤ 50), the word Hongcow initially learns how to spell. The string s consists only of lowercase English letters ('a'–'z').
Output

Output a single integer equal to the number of distinct strings that Hongcow can obtain by applying the cyclic shift arbitrarily many times to the given string.
*/
/*
  A. Коровоконг изучает циклические сдвиги
Коровоконг учится произносить слова! Однажды учитель дал ему новое слово, которое необходимо научиться правильно произносить. Будучи исполнительным студентом, Коровоконг сразу же выполнил задание.

Теперь Коровоконг хочет образовать новые слова, используя данное. Для этого он берёт текущее слово и переставляет его последнюю букву в начало. Такую операцию он называет циклическим сдвигом. Он может применить эту операцию произвольное количество раз, например, последовательно применяя циклический сдвиг к слову «abracadabra», он получит слова «aabracadabr», «raabracadab» и так далее.

Теперь Коровоконг хочет знать, сколько различных слов он может получить, применяя операцию циклического сдвига. Изначальную строку также необходимо учитывать.
Входные данные

В первой строке входных данных записана строка s (1 ≤ |s| ≤ 50) — слово, которое даётся Коровоконгу в самом начале. Строка s содержит только маленькие буквы английского алфавита («a»–«z»).
Выходные данные

Выведите одно целое число, равное количеству различных строк, которые можно получить, применяя операцию циклического сдвига к строке из входных данных.
*/
import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;
import java.util.Arrays;
public class Task745A{
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    StringBuilder sb = new StringBuilder();
    Set<String> set = new HashSet<String>();
    sb.append(in.nextLine());
    set.add(sb.toString());
    for(int i = 1; i < sb.length(); i++){
      sb.append(sb.charAt(0));
      sb.deleteCharAt(0);
      set.add(sb.toString());
    }
    System.out.println(set.size());
  }
}
