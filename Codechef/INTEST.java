// Bartosz "WiedźMAC" Bednarczyk

import java.io.*;
import java.util.Arrays;

public class Main
{	
	public static void main(String[] args) throws IOException
	{
		BufferedReader Scaner = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter Printer = new PrintWriter(System.out);
		
		String[] tab = Scaner.readLine().split(" ");
		int n = Integer.parseInt(tab[0]);
		int k = Integer.parseInt(tab[1]);
		int counter = 0;
		
		while(n-- > 0)
		{
			int x = Integer.parseInt(Scaner.readLine());
			if(x % k == 0) counter++;
		}
		
		System.out.println(counter);
	}
}
