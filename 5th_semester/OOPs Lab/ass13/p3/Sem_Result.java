package p3;
import p1.*;
import p2.*;
import java.util.Scanner;
class Test_Marks extends student{
	protected int Marks1,Marks2;
	
	public void get_data(){
		super.get_data();
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the 1st Marks : ");
		Marks1 = sc.nextInt();
		System.out.print("Enter the 2nd Marks :  ");
		Marks2 = sc.nextInt();
	}
	public void put_data(){
		super.put_data();
		System.out.println("Marks1 is : " + Marks1);
		System.out.println("Marks2 is " + Marks2);
	}
}
public class Sem_Result extends Test_Marks implements CCA_Score{

    public float sgpa;
    public void show() {
    	super.get_data();
    	sgpa=(Marks1+Marks2+CCA_credit)/3;
    	
    }
    public void show_cca_cred() {
//		// TODO Auto-generated method stub	
        super.put_data();	
		System.out.println("The Credit Score is : " + CCA_credit);
		System.out.println("SGPA is : " + sgpa);
    }

}
