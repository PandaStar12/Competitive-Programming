import java.util.*;

abstract class Point implements Comparable<Point>
{
	protected int[] Coordinates; 
	protected int dim, dist;
	protected String name;
}

class Point2D extends Point
{
	public int compareTo(Point a)
	{
		if(this.dist > a.dist) return 1;
		else if(this.dist == a.dist) return 0;
		else return -1;
	}
	
	Point2D(String n, int a, int b)
	{
		dim = 2; dist = a*a + b*b; name = n;
		Coordinates = new int[2]; Coordinates[0] = a; Coordinates[1] = b;
	}

	public String toString()
	{
		return name + " " + Coordinates[0] + " " + Coordinates[1];
	}
}

public class Main
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int t = Integer.parseInt(scan.nextLine());
		
		for(int i = 0; i < t; i++)
		{	
			int n = Integer.parseInt(scan.nextLine()); Point2D[] Punkty = new Point2D[n];
			
			for(int j = 0; j < n; j++)
			{
				String s = scan.nextLine();
				String[] tab = s.split(" ");
				Point2D P = new Point2D(tab[0], Integer.parseInt(tab[1]), Integer.parseInt(tab[2]));
				Punkty[j] = P;
			}
			
			Arrays.sort(Punkty);
			for(Point P : Punkty) System.out.println(P.toString());
			if(i != t-1) { String s = scan.nextLine(); }
		}
	}
}
