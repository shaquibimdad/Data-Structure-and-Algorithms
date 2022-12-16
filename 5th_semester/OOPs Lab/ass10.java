//import java.util.Scanner;
//interface Area{
//	final public static float pi = 3.14f;	
//	public abstract void cal_area();
//}
//class Circle implements Area{
//
//	private float r,area;	
//		Circle(float a)
//		{
//			this.r = a;
//		}
//	public void cal_area() {
//		area = pi * r * r;
//		System.out.print("Area of Circle is : " +area);
//		System.out.println();
//	}
//}
//class Recta implements Area{
//	private float l,b,area;
//	Recta(float a,float c)
//	{
//		this.l = a;
//		this.b = c;
//	}
//	
//	public void cal_area() {
//		area = l * b;
//		System.out.print("Area of Rectangle is : " +area);
//	}
//}
//public class ass10 {
//
//	public static void main(String[] args) {
//		// TODO Auto-generated method stub
//		Area A;
//		
//		A = new Circle(4.0f);
//        A.cal_area();
//        A = new Recta(20.0f,10.0f);
//        A.cal_area();
//        
//
//
//	}
//
//}



import java.util.Scanner;
interface Area{
	final public static float pi = 3.14F;	
	public abstract void cal_area();
}
class Circle implements Area{

	private float r,area;	
	public void get(){
		Scanner sc = new Scanner(System.in);
		System.out.println();
		System.out.print(" Enter the Radius : ");
		r=sc.nextFloat();
	}	
	public void cal_area() {
		area=pi*r*r;
		System.out.println("radius:"+r);
		System.out.print(" The Area of Circle is : "+area);
	}
}
class Rectangle implements Area{
	private float l,b,area;

	public void get(){
		Scanner sc = new Scanner(System.in);
		System.out.println();
		System.out.print(" Enter the Length : ");
		l=sc.nextFloat();
		System.out.print(" Enter the width : ");
		b=sc.nextFloat();
	}
	
	public void cal_area() {
		area=l*b;
		System.out.println("length:"+l+","+"bredth:"+b);
		System.out.print(" The Area of Rectangle is : "+area);
	}
}
public class ass10 {
	public static void main(String[] args) {		
		Circle c=new Circle();
        c.get();
        c.cal_area();
        Rectangle r=new Rectangle();
        r.get();
        r.cal_area();
	}
}