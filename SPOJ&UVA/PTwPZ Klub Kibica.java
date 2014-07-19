import java.util.Scanner;
import java.math.BigInteger;
 
class Main
{
 
        public static String Newton( int n, int k )
        {
                BigInteger Wynik = new BigInteger("1");
                int i; 
                
                for(i = 1; i <= k; i++) // Od 1 do k wykonujemy : 
                {
                        BigInteger A = new BigInteger (Integer.toString(n-i+1));
                        BigInteger B = new BigInteger (Integer.toString(i));
                        Wynik = Wynik.multiply(A);
                        Wynik = Wynik.divide(B);
                }
                
                return Wynik.toString();   // Zwróć Wynik
        }
 
        public static void main (String[] args) throws java.lang.Exception
        {
                Scanner scanner = new Scanner(System.in);
                
                int T = scanner.nextInt();
                
                while( T > 0)
                {
                    int N = scanner.nextInt();
                    int K = scanner.nextInt();
 
                    if( K == 0 || K == N ) System.out.println("1"); // Jeżeli N = 0 lub N = K to wypisz 1
                    else System.out.println( Newton(N,K) );         // W przeciwnym wypadku oblicz wartość symbolu
                    T--;
                }
        }
}
