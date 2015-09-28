import java.util.*;
import java.io.*;
import java.math.*;

class Player {

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int lx = in.nextInt(); // the X position of the light of power
        int ly = in.nextInt(); // the Y position of the light of power
        int x = in.nextInt(); // Thor's starting X position
        int y = in.nextInt(); // Thor's starting Y position

        // game loop
        while (true) {
            int remainingTurns = in.nextInt();
            if (y < ly) {
                y++; System.out.print("S");
            }   
            else if (y > ly) {
                y--; System.out.print("N");
            }   
                            
            if(x < lx) {
                x++; System.out.print("E");
            }   
            else if(x > lx) {
                x--; System.out.print("W");
            }
            
            System.out.print("\n");
        }
    }
}
