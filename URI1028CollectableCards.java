import java.util.Scanner;

public class URI1028CollectableCards
{
	public static int gcd (int a,int b)
	{
		if (b == 0)
			return a;
		else
			return gcd (b,a%b);
	}

	public static void main (String[] args)
	{
		Scanner in = new Scanner (System.in);

		int n,i,a,b;

		n = in.nextInt();

		for (i=1; i<=n; i++)
		{
			a = in.nextInt();
			b = in.nextInt();

			System.out.println (gcd (a,b));
		}
	}
}