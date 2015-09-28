/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

var inputs = readline().split(' ');
var lx = parseInt(inputs[0]); // the X position of the light of power
var ly = parseInt(inputs[1]); // the Y position of the light of power
var x = parseInt(inputs[2]); // Thor's starting X position
var y = parseInt(inputs[3]); // Thor's starting Y position

// game loop
while (true) {
    var remainingTurns = parseInt(readline());
    var ans = ''

    if (y < ly) {
        y++; ans += 'S';
    }   
    else if (y > ly) {
        y--; ans += 'N';
    }   
                        
    if(x < lx) {
        x++; ans += 'E';
    }   
    else if(x > lx) {
        x--; ans += 'W';
    }

    print(ans);

}
