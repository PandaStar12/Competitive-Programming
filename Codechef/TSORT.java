// Bartosz "WiedźMAC" Bednarczyk

import java.io.*;
import java.util.Arrays;

public class Main
{	
	public static void main(String[] args) throws IOException
	{
		BufferedReader Scaner = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter Printer = new PrintWriter(System.out);
		
		int N = Integer.parseInt(Scaner.readLine());
		int[] T = new int[N];
		
		for(int i = 0; i < N; i++) T[i] = Integer.parseInt(Scaner.readLine());
		Arrays.sort(T);
		
		for(int i = 0; i < N; i++) Printer.println(T[i]);
		Printer.flush();
	}
}
