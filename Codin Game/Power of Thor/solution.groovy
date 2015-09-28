input = new Scanner(System.in);

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

lx = input.nextInt() // the X position of the light of power
ly = input.nextInt() // the Y position of the light of power
x = input.nextInt() // Thor's starting X position
y = input.nextInt() // Thor's starting Y position

// game loop
while (true) {
    remainingTurns = input.nextInt()

    if (y < ly) {
        y++; print("S");
    }   
    else if (y > ly) {
        y--; print("N");
    }   
                
    if(x < lx) {
        x++; print("E");
    }   
    else if(x > lx) {
        x--; print("W");
    }
    
    print("\n");
}
