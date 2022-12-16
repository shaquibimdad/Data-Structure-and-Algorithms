import java.util.Scanner;
class Shape{
	int length,breadth;
	void get()
	{
		
	}
	void cal_area()
	{
		
	}
	void put()
	{
		
	}
}
	class Square extends Shape{
		double Squ_area;
		void get()
		{
			System.out.println("Enter the length of Square: ");
			Scanner sc = new Scanner(System.in);
			length = sc.nextInt();
		}
		void cal_area()
		{
			Squ_area = length*length;
		}
		void put()
		{
			System.out.println("Area of Square is " + Squ_area);
		}
	}
	class Rectangle extends Shape{
		double Rec_area;
		void get()
		{
			Scanner sc = new Scanner(System.in);
			System.out.println("Enter the length of Rectangle: ");
			length = sc.nextInt();
			System.out.println("Enter the breadth of Rectangle: ");
			breadth = sc.nextInt();
		}
		void cal_area()
		{
			Rec_area = length*breadth;
		}
		void put()
		{
			System.out.println("Area of Rectangle is " + Rec_area);
		}
	}
	class Triangle extends Shape{
		double Tri_area;
		void get()
		{
			Scanner sc = new Scanner(System.in);
			System.out.println("Enter the height of Triangle: ");
			length = sc.nextInt();
			System.out.println("Enter the base of Triangle: ");
			breadth = sc.nextInt();
		}
		void cal_area()
		{
			Tri_area = (0.5)*((double)length*(double)breadth);
		}
		void put()
		{
			System.out.println("Area of Triangle is " + Tri_area);
		}
	}


public class ass6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Shape s1 = new Square();
		s1.get();
		s1.cal_area();
		s1.put();
		Shape s2 = new Rectangle();
		s2.get();
		s2.cal_area();
		s2.put();
		Shape s3 = new Triangle();
		s3.get();
		s3.cal_area();
		s3.put();

	}

}
