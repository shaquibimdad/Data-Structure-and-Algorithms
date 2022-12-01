
public class Student {
	String S_name;
	int Roll_no;
	String Batch;
	int Year_of_adm;
	String Stream;
	
	Student(String x,int y)
	{

		this.S_name=x;
		this.Roll_no=y;
		this.Batch="Btech/cse-ds/2020";
		this.Year_of_adm=2020;
		this.Stream="cse-ds";
	}
	Student(String x,int y,String z)
	{
//		System.out.println("\n");
//		System.out.println("calling 2nd constructor that have  string , int and string");
		this.S_name=x;
		this.Roll_no=y;
		this.Batch=z;
		this.Year_of_adm=2020;
		this.Stream="cse-ds";
	}
	Student(String x,int y,String z,int w)
	{
//		System.out.println("\n");
//		System.out.println("calling 3rd constructor that have  string , int , string and int");
		this.S_name=x;
		this.Roll_no=y;
		this.Batch=z;
		this.Year_of_adm=w;
		this.Stream="cse-ds";
	}
	
	Student(String x,int y,String z,int w,String k)
	{
//		System.out.println("\n");
//		System.out.println("calling 4th constructor that have  string , int , string , int and string");
		this.S_name=x;
		this.Roll_no=y;
		this.Batch=z;
		this.Year_of_adm=w;
		this.Stream=k;
	}
	void showdata()
	{
		System.out.println(" ");
		System.out.println("Name is " + S_name);
		System.out.println("Roll No. is " + Roll_no);
		System.out.println("Batch is " + Batch);
		System.out.println("Year of Admission is " + Year_of_adm);
		System.out.println("Stream is " + Stream);
	}
	
	
	

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Student s1 = new Student("Ayush",100);
		s1.showdata();
		Student s2 = new Student("Ambuj",1000,"ECE");
		s2.showdata();
		Student s3 = new Student("Rohit",200,"IT",2021);
		s3.showdata();
		Student s4 = new Student("Uttam",500,"AUE",2022,"Abc");
		s4.showdata();

	}
	
}
