package p1;
import java.util.Scanner;
public class student {
	protected String Name;
	protected int Roll_No;
	
	public void get_data(){
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the Name : ");
		Name = sc.next();
		System.out.print("Enter the Roll Number : ");
		Roll_No = sc.nextInt();
	}
	public void put_data(){
		System.out.println("The name is : " + Name);
		System.out.println("The roll no is " + Roll_No);
	}

	
		

	}


