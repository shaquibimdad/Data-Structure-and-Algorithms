package p3;
public class A{
	public void msg(){
		System.out.println("Hello from public Class A");
		}
}
class B extends A{
	public void msg(){
		System.out.println("Hello from non-public Class B");
		}
}
