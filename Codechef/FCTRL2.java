// Bartosz "WiedźMAC" Bednarczyk

import java.math.BigInteger;
import java.util.Scanner;

public class Main
{
	public static BigInteger[] tableOfFactorials = new BigInteger[101];
	
	public static void GenerateFactorials()
	{
		tableOfFactorials[0] = tableOfFactorials[1] = BigInteger.ONE;
		
		for(int i = 2; i <= 100; i++)
		{
			tableOfFactorials[i] = tableOfFactorials[i-1].multiply(BigInteger.valueOf(i));
		}
	}
	
	public static void main(String[] args)
	{
		Scanner Scan = new Scanner(System.in);
		int TC = Scan.nextInt();
		GenerateFactorials();
		
		while(TC-- > 0)
		{
			int n = Scan.nextInt();
			System.out.println(tableOfFactorials[n]);
		}

		Scan.close();
	}
}

