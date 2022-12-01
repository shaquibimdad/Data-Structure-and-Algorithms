class ComputerProfessional
	{
		String EName;
		double DutyHour;
		String Prospect;
		ComputerProfessional(String x,double y,String z)
		{
			this.EName=x;
			this.DutyHour=y;
			this.Prospect=z;
		}
			
			void display()
			{
				
				System.out.println("Employee Name is " + EName);
				System.out.println("Duty Hour is " + DutyHour);
				System.out.println("Prospect is " + Prospect);
			}
		}
	class Developer extends ComputerProfessional
	{
		double StudyHour;
		Developer(String x,double y,String z,double k)
		{
			super(x,y,z);
			this.StudyHour = k;
		}
		void show()
		{
//			System.out.println("\n");		
			this.display();
			System.out.println("Hour of Study  is " + StudyHour);
			
		}
	}
	class NetworkAdmin extends ComputerProfessional
	{
		double PracticeHour;
		NetworkAdmin (String x,double y,String z,double w)
		{
			super(x,y,z);
			this.PracticeHour = w;
		}
		
		void show1()
		{
//			System.out.println("\n");
			this.display();
			System.out.println("Practice Hour is " + PracticeHour);
			
		}
	}
	class DataOperator extends ComputerProfessional
	{
		double TypingSpeed;
		 DataOperator (String x,double y,String z,double a)
		{
			super(x,y,z);
			this.TypingSpeed = a;
		}
		void show2()
		{
//			System.out.println("\n");
			this.display();
			System.out.println("Typing Speed  is " + TypingSpeed );
		}
	}	
	class  JavaProfessional extends Developer{
		String ProficiencyLevel;
		JavaProfessional(String x,double y,String z,double k,String c)
		{
			super(x,y,z,k);
			this.ProficiencyLevel = c;
			
		}
		void showdata()
		{
			this.show();
			System.out.println("Proficiency Level is " + ProficiencyLevel);
		}
	}
	class  PythonProfessional extends Developer{
		String ProficiencyLevel;
		PythonProfessional(String x,double y,String z,double k,String c)
		{
			super(x,y,z,k);
			this.ProficiencyLevel = c;
			
		}
		void showdata1()
		{
			this.show();
			System.out.println("Proficiency Level is " + ProficiencyLevel);
		}
	}


public class ass5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("\nNetwork Admin");
		NetworkAdmin n1 = new NetworkAdmin("Ayush",5.0,"Excellent",6.0);
		n1.show1();
		System.out.println("\nData Operator");
		DataOperator d1 = new DataOperator("Rohit",6.0,"Fair",45.0);
		d1.show2();
		System.out.println("\nJava Professional");
		JavaProfessional j1 = new JavaProfessional("ABCD",5.5,"Good",3.0,"Pro");
		j1.showdata();
		System.out.println("\nPython Professional");
		PythonProfessional p1 = new PythonProfessional("DEF",3.6,"Good",2.0,"Beginer");
		p1.showdata1();
		

	}

}
