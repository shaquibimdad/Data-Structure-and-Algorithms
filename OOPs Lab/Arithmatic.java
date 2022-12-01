
public class Arithmatic {
	int a;
	float b;
	char c;
	double d;
	public Arithmatic(int x,float y,char z,double w)
	{
		this.a=x;
		this.b=y;
		this.c=z;
		this.d=w;
	}
	public void add(int x,double y)
	{
		this.a += x;
		this.d += y;
	}
	void add(int x,float y,double z)
	{
		this.a += x;
		this.b += y;
		this.d += z; 
	}
	void add(float x,int y,double z)
	{
		this.b += x;
		this.a+= y;
		this.d += z; 
	}
//	public void add(Arithmatic An)
//	{
//		this.a += An.a;
//		this.b += An.b;
//		this.c += An.c;
//		this.d += An.d;
//	}
	public Arithmatic add(Arithmatic An)
	{
		this.a += An.a;
		this.b += An.b;
		this.c += An.c;
		this.d += An.d;
		return this;
	}
	public void display()
	{
		System.out.println("Integer variable is " +a);
		System.out.println("Float variable is " +b);
		System.out.println("Character variable is " +c);
		System.out.println("double variable is " +d);
	}

	
	
	

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Arithmatic a1 = new Arithmatic(2,3.2f,'c',2.0);
		Arithmatic a2 = new Arithmatic(3,5.2f,'a',5.0);
		System.out.println("Before Addition");
		a1.display();
		System.out.println("\nAfter Addition");
		a1.add(3,5.0);
		a1.display();
		System.out.println("\nAfter Addition");
		a1.add(3,1.8f,6.0);
		a1.display();
		System.out.println("\nAfter Addition");
		a1.add(2.0f,3,5.0);
		a1.display();
		System.out.println("\nAfter Addition");
		a1.add(a2);
		a1.display();
		
	}

}
