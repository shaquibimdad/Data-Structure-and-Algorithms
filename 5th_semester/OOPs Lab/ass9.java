import java.util.Scanner;
class Matrix{
	int r1,r2,c1,c2;
	int mat1[][],mat2[][],sum[][],mul[][];
	void get()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the row number of matrix 1: ");
		r1 = sc.nextInt();
		System.out.println("Enter the column number of matrix 1: ");
		c1 = sc.nextInt();
		System.out.println("Enter the row number of matrix 2: ");
		r2 = sc.nextInt();
		System.out.println("Enter the column number of matrix 2: ");
		c2 = sc.nextInt();
		System.out.println("matrix elements:");
		mat1 = new int[r1][c1];
		mat2 = new int[r2][c2];
		sum = new int[r1][c1];
		mul = new int[r1][c2];
		System.out.println("Enter the elements of matrix 1: ");
		for(int i = 0; i < r1; i++)
		{
			for(int j = 0; j < c1; j++)
			{
				mat1[i][j] = sc.nextInt();
			}
		}
		System.out.println("Enter the elements of matrix 2: ");
		for(int i = 0; i < r2; i++)
		{
			for(int j = 0; j < c2; j++)
			{
				mat2[i][j] = sc.nextInt();
			}
		}
	}
		
	void add()
	{
		
		if(r1 != r2 || c1 != c2)
		{
			System.out.println("Addition is not possible..");
		}
		else
		{
			for(int i = 0; i < r1; i++)
			{
				for(int j = 0; j < c1; j++)
				{
					sum[i][j] = mat1[i][j] + mat2[i][j];
				}
			}
		}
	}
		
	void multiply()
	{
		if(r1 == c2)
		{
			for(int i = 0; i < r1; i++)
			{
				for(int j = 0; j < c2; j++)
				{
					for(int k = 0; k < c1; k++)
					{
						mul[i][j] += mat1[i][k]*mat2[k][j];
					}
				}
			}
		}
		else
		{
			System.out.println("Multiplication is not possible..");
		}
	}
	
	void show()
	{
		System.out.println("1st Matrix");
		for(int i = 0; i < r1; i++)
		{
			for(int j = 0; j < c1; j++)
			{
				System.out.print(mat1[i][j] + "\t");
			}
			System.out.println("\n");
		}
		System.out.println("2nd Matrix");
		for(int i = 0; i < r2; i++)
		{
			for(int j = 0; j < c2; j++)
			{
				System.out.print(mat2[i][j] + "\t");
			}
			System.out.println("\n");
		}
		System.out.println("Resultant Matrix after Addition : ");
		for(int i = 0; i < r1; i++)
		{
			for(int j = 0; j < c1; j++)
			{
				System.out.print(sum[i][j] + "\t");
			}
			System.out.println("\n");
		}
	}
	void show1()
	{
		System.out.println("1st Matrix");
		for(int i = 0; i < r1; i++)
		{
			for(int j = 0; j < c1; j++)
			{
				System.out.print(mat1[i][j] + "\t");
			}
			System.out.println("\n");
		}
		System.out.println("2nd Matrix");
		for(int i = 0; i < r2; i++)
		{
			for(int j = 0; j < c2; j++)
			{
				System.out.print(mat2[i][j] + "\t");
			}
			System.out.println("\n");
		}
		System.out.println("Resultant matrix after Multiplication : ");
		for(int i = 0; i < r1; i++)
		{
			for(int j = 0; j < c2; j++)
			{
				System.out.print(mul[i][j] + "\t");
			}
			System.out.println("\n");
		}
	}
}

public class ass9 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int ch;
		Matrix M = new Matrix();
		M.get();
		System.out.println("Press 1 for ADDITION \nPress 2 for MULTIPLICATION ");
		Scanner sc = new Scanner(System.in);
		ch = sc.nextInt();
		switch(ch){
		
			case 1: M.add();
					M.show();
					break;
					
			case 2: M.multiply();
					M.show1();
					break;	
			case 3:
				return;
								
		}
	

	}

}
