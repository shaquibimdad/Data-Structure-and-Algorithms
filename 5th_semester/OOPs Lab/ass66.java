class Bird
{
	String Name,Colour;
	Bird(String x, String y)
	{
		this.Name= x;
		this.Colour=y;
	}
	void fly()
	{
		
	}
}
class Flying_Bird extends Bird
{
	Flying_Bird(String x,String y)
	{
		super(x,y);
	}
	void fly() 
	{
		System.out.println("Bird Name is " + Name + " of Colour " + Colour + " Can Fly");
	}
}
class Non_Flying_Bird extends Bird
{
	Non_Flying_Bird(String x,String y)
	{
		super(x,y);
	}
	void fly() 
	{
		System.out.println("Bird Name is " + Name + " of Colour " + Colour + " Cannot Fly");
	}
}
public class ass66 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Bird b1 = new Flying_Bird("Crow","Black");
		b1.fly();
		Bird b2 = new Non_Flying_Bird("Parraot","Green");
		b2.fly();
		
	}

}
