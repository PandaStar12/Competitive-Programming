// Bartosz Bednarczyk

import java.math.BigInteger;
import java.util.Scanner;

class Main
{
	public static final int MOD = 1000000;
	
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		
		while(scan.hasNext())
		{
			int n = scan.nextInt();
			int k = scan.nextInt();
			
			if(n == 0 && k == 0) break;
			else
			{
				int N = n+k-1;
				int K = k-1;
				
				BigInteger A = BigInteger.ONE; BigInteger B = BigInteger.ONE;
				
				for(int i = N-K+1; i <= N; i++) A = A.multiply(BigInteger.valueOf(i));
				for(int i = 1; i <= K; i++) B = B.multiply(BigInteger.valueOf(i));
				
				A = A.divide(B); A = A.mod(BigInteger.valueOf(MOD));
				System.out.println(A);
			}
		}
		
		scan.close();
	}
}
