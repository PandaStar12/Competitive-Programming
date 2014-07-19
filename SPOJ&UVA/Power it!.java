import java.math.BigInteger;
import java.util.Scanner;
 
public class Main 
{
    public static void main(String[] args) 
    {
         Scanner scanner = new Scanner(System.in);
         
         int t = scanner.nextInt();
         
         while(t>0)
         {
         
            String a = scanner.next();
            String b = scanner.next();
            String c = scanner.next();
        
            BigInteger A = new BigInteger(a);
            BigInteger B = new BigInteger(b);
            BigInteger C = new BigInteger(c);
            
            A = A.modPow(B, C);
            
            System.out.println(A);
            
            t=t-1;
         }
        
    }
}
