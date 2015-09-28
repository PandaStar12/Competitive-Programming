using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
class Player
{
    static void Main(string[] args)
    {
        StreamWriter stdout = new StreamWriter(Console.OpenStandardOutput());
        
        string[] inputs = Console.ReadLine().Split(' ');
        int lx = int.Parse(inputs[0]); // the X position of the light of power
        int ly = int.Parse(inputs[1]); // the Y position of the light of power
        int x = int.Parse(inputs[2]); // Thor's starting X position
        int y = int.Parse(inputs[3]); // Thor's starting Y position

        // game loop
        while (true)
        {
            int remainingTurns = int.Parse(Console.ReadLine());

            if (y < ly) {
                y++; Console.Write('S');
            }   
            else if (y > ly) {
                y--; Console.Write('N');
            }   
                
            if(x < lx) {
                x++; Console.Write('E');
            }   
            else if(x > lx) {
                x--; Console.Write('W');
            }
            
            Console.Write('\n');
        }
        
        //stdout.Write('\n');
    }
}
