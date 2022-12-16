import java.util.Scanner;
import java.lang.Math;

class ayush{
	double area,peri,r;
	void Math_operations() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the Radius of the Circle: ");
		r = sc.nextDouble();
	}
	void cal_area() {
		area = Math.PI*r*r;
		System.out.println("Area of the Circle is: " +area);
	}
	void cal_peri() {
		peri = 2*Math.PI*r;
		System.out.println("Perimeter of the Circle is: " +peri);
	}
}
public class ass12 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ayush c = new ayush();
		c.Math_operations();
		c.cal_area();
		c.cal_peri();
	}

}
