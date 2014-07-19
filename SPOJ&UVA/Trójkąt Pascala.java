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
                
                return Wynik.toString();   // Zwr�� Wynik
        }
 
        public static void main (String[] args) throws java.lang.Exception
        {
                Scanner scanner = new Scanner(System.in);
                
                int T = scanner.nextInt();
                
                while( T > 0)
                {
                    int K;
                    int N = scanner.nextInt();
                    
                    for( K = 0; K <= N; K++ )
                    {
                    if( K == 0 || K == N ) System.out.print("1 "); // Je�eli N = 0 lub N = K to wypisz 1
                    else System.out.print( Newton(N,K) + " ");         // W przeciwnym wypadku oblicz warto�� symbolu
                    }
                    System.out.print("\n");
                    T--;
                }
        }
}
