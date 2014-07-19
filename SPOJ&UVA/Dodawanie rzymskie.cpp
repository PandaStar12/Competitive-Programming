#include <iostream>
#include <string>
#include <string.h>
 
#define ROMAN_N 7
unsigned int arabic[ROMAN_N] = {1000, 500, 100, 50, 10, 5, 1};
char roman[ROMAN_N] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
 
char *arabic2roman(char *result, int number)
{
int i = 0, //position in arabic and roman arrays
j = 0; //position in result
 
if ((number > 3999) || (number <= 0))
{
return NULL;
}
 
while ((number) && (i < ROMAN_N))
{
if(number >= arabic[i])
{
number -= arabic[i];
result[j++] = roman[i];
}
else if ((i%2 == 0) &&
(i<ROMAN_N-2) && // 9xx condition
(number >= arabic[i] - arabic[i+2]) &&
(arabic[i+2] != arabic[i] - arabic[i+2]))
{
number -= arabic[i] - arabic[i+2];
result[j++] = roman[i+2];
result[j++] = roman[i];
i++;
}
else if ((i%2 == 1) &&
(i<ROMAN_N-1) && //4xx condition
(number >= arabic[i] - arabic[i+1]) &&
(arabic[i+1] != arabic[i] - arabic[i+1]))
{
number -= arabic[i] - arabic[i+1];
result[j++] = roman[i+1];
result[j++] = roman[i];
i++;
}
else
{
i++;
}
}
result[j++] = 0;
 
return result;
}
 
// Converts roman <number> to arabic
// Returns <result> or -1, if an ERROR occurs.
int roman2arabic(char *number)
{
int i = 0, //position in arabic and roman arrays
j = 0, //position in number
result = 0,
length = 0;
 
length = strlen(number);
 
while ((j<length) && (i<ROMAN_N))
{
if(number[j] == roman[i])
{
result += arabic[i];
j++;
}
else if ((i%2 == 0) &&
(i<ROMAN_N-2) && // 9xx condition
(j<length-1) &&
(number[j] == roman[i+2]) &&
(number[j+1] == roman[i]))
{
result += arabic[i] - arabic[i+2];
j += 2;
i++;
}
else if ((i%2 == 1) &&
(i<ROMAN_N-1) && //4xx condition
(j<length-1) &&
(number[j] == roman[i+1]) &&
(number[j+1] == roman[i]))
{
result += arabic[i] - arabic[i+1];
j += 2;
i++;
}
else
{
i++;
}
}
 
//there was an error during conversion
if (i == ROMAN_N)
{
result = -1;
}
 
return result;
}
 
int main(void)
{ 
 
std::string A, B;
std::ios_base::sync_with_stdio(false);
 
while( std::cin >> A >> B )
{
        char T[50];
        
        char *W1 = new char [A.size()+1];
        strcpy (W1, A.c_str());
        
        char *W2 = new char [B.size()+1];
        strcpy (W2, B.c_str());
        
        int Wynik = roman2arabic(W1) + roman2arabic(W2);
        arabic2roman(T, Wynik);
        std::cout << T << "\n";
        
        delete[] W1;
        delete[] W2;
}
 
 
return 0;
}
