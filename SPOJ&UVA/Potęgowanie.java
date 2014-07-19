import java.math.BigInteger;
import java.util.Scanner;
 
public class Main
{
    public static void main(String[] args) 
    {
        
         Scanner scanner = new Scanner(System.in);
                
                String a = scanner.next();
                int b = scanner.nextInt();
        
        BigInteger A = new BigInteger(a);
        A = A.pow(b);
        
        System.out.println(A);
        
    }
}
