// Auto-generated code below aims at helping you parse
// the standard input according to the problem statement.
// ---
// Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
program Answer;
{$H+}
uses sysutils, classes, math;

// Helper to read a line and split tokens
procedure ParseIn(Inputs: TStrings) ;
var Line : string;
begin
    readln(Line);
    Inputs.Clear;
    Inputs.Delimiter := ' ';
    Inputs.DelimitedText := Line;
end;

var
    lx : Int32; // the X position of the light of power
    ly : Int32; // the Y position of the light of power
    x : Int32; // Thor's starting X position
    y : Int32; // Thor's starting Y position
    remainingTurns : Int32;
    Inputs: TStringList;
begin
    Inputs := TStringList.Create;
    ParseIn(Inputs);
    lx := StrToInt(Inputs[0]);
    ly := StrToInt(Inputs[1]);
    x := StrToInt(Inputs[2]);
    y := StrToInt(Inputs[3]);

    // game loop
    while true do
    begin
        ParseIn(Inputs);
        remainingTurns := StrToInt(Inputs[0]);

        if y < ly then
        begin
            y := y + 1;
            write('S');
        end;
        
        if y > ly then
        begin
            y := y - 1;
            write('N');
        end;

        if x < lx then
        begin
            x := x + 1;
            write('E');
        end;
        
        if x > lx then
        begin
            x := x - 1;
            write('W');
        end;

        writeln(''); // A single line providing the move to be made: N NE E SE S SW W or NW
        flush(StdErr); flush(output); // DO NOT REMOVE
    end;
end.
