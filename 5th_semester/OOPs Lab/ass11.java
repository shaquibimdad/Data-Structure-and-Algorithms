import java.util.Scanner;
class Stude{
	protected String Name;
	protected int Roll_No;
	
	void get_data(){
		Scanner sc = new Scanner(System.in);
		System.out.println(" ");
		System.out.print("Enter the Name : ");
		Name=sc.next();
		System.out.print("Enter the Roll Number : ");
		Roll_No=sc.nextInt();
	}
	void put_data(){
		System.out.println(" ");
		System.out.println("Student name is : " +Name);
		System.out.println("Roll No. is " +Roll_No);
	}
}
class Test_Marks extends Stude{
	protected int Marks1,Marks2;
	
	void get_data(){
		super.get_data();
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the 1st Marks : ");
		Marks1 = sc.nextInt();
		System.out.print("Enter the 2nd Marks :  ");
		Marks2 = sc.nextInt();
	}
	void put_data(){
		super.put_data();
		System.out.println("Marks1 is : " +Marks1);
		System.out.println("Marks2 is "+ Marks2);
	}
}
interface CCA_Score{
	public static final float CCA_credit = 8.0f;
	public abstract void show_cca_credit();
}
class Sem_Result extends Test_Marks implements CCA_Score{
    float SGPA;
	void get_data(){
		super.get_data();
		SGPA = (CCA_credit + Marks1 + Marks2)/3;
	}	
	public void show_cca_credit() {
		// TODO Auto-generated method stub	
        super.put_data();	
		System.out.println("The Credit Score : "+CCA_credit);
	}
    void display_SGPA(){
       System.out.println("SGPA is : " +SGPA);
    }	
}
public class ass11 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Sem_Result s1 = new Sem_Result();
		Sem_Result s2 = new Sem_Result();
		
		s1.get_data();
		s1.show_cca_credit();
        s1.display_SGPA();
		
		s2.get_data();
		s2.show_cca_credit();
        s2.display_SGPA();

	}

}
