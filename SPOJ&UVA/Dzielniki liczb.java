import java.math.BigInteger;
import java.util.Scanner;
 
public class Main
{
    public static void main(String[] args) 
    {
         Scanner scanner = new Scanner(System.in);
         
         BigInteger Zero = new BigInteger("0");
         int t = scanner.nextInt();
         
         while(t>0)
         {
         
            String a = scanner.next();
            String b = scanner.next();
        
            BigInteger A = new BigInteger(a);
            BigInteger B = new BigInteger(b);
            
            A = A.mod(B);
            
            if(A.equals(Zero) == true ) System.out.println("TAK");
            else System.out.println("NIE");
            t=t-1;
         }
        
    }
}
