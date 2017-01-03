/*
275A
Lenny is playing a game on a 3 × 3 grid of lights. In the beginning of the game all lights are switched on. Pressing any of the lights will toggle it and all side-adjacent lights. The goal of the game is to switch all the lights off. We consider the toggling as follows: if the light was switched on then it will be switched off, if it was switched off then it will be switched on.

Lenny has spent some time playing with the grid and by now he has pressed each light a certain number of times. Given the number of times each light is pressed, you have to print the current state of each light.

Input
The input consists of three rows. Each row contains three integers each between 0 to 100 inclusive. The j-th number in the i-th row is the number of times the j-th light of the i-th row of the grid is pressed.

Output
Print three lines, each containing three characters. The j-th character of the i-th line is "1" if and only if the corresponding light is switched on, otherwise it's "0".
*/
/* Accepted	155 ms */

import java.util.Arrays;
import java.util.Scanner;

public class Task275A{

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[][] lights = new int[3][3];
        int[][] org = new int[3][3];

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                lights[i][j] = in.nextInt();
                org[i][j] = 1;
            }
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (lights[i][j] == 0)
                    continue;
                if (lights[i][j] % 2 == 0)
                    continue;
                else {
                    org[i][j] = 1 - org[i][j];
                    if ((j + 1) < 3) {

                        org[i][j + 1] = 1 - org[i][j + 1];
                    }
                    if ((i + 1) < 3) {
                        org[i + 1][j] = 1 - org[i + 1][j];
                    }
                    if ((i - 1) >= 0) {
                        org[i - 1][j] = 1 - org[i - 1][j];
                    }
                    if ((j - 1) >= 0) {
                        org[i][j - 1] = 1 - org[i][j - 1];
                    }

                }
            }
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                System.out.print(org[i][j]);
            System.out.println();
        }
        in.close();

    }

}
