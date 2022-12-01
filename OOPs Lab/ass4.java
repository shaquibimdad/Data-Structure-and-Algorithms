class Account
	{
		int Acc_No;
		String C_Name;
		int Contact_No;
		Account(int x,String y,int z)
		{
			this.Acc_No=x;
			this.C_Name=y;
			this.Contact_No=z;
		}
			void show()
			{
				System.out.println("\n");
				System.out.println("Account Number is " + Acc_No);
				System.out.println("Customer Nanme is " + C_Name);
				System.out.println("Contact Number is " + Contact_No);
			}
		}
	class Savings_Ac extends Account
	{
		double ROI;
		double Acc_Balance;
		Savings_Ac(int x,String y,int z,double k,double w)
		{
			super(x,y,z);
			this.ROI=k;
			this.Acc_Balance=w;
		}
		void Compute()
		{
			Acc_Balance += (Acc_Balance*ROI)/(12*100); 
		}
		void showdata()
		{
//			System.out.println("\n");		
			this.show();
			System.out.println("Rate of Interest is " + ROI);
			System.out.println("Account Balance is " + Acc_Balance);
		}
	}
	class Current_Ac extends Account
	{
		double Acc_Balance;
		double Min_Balance;
		Current_Ac(int x,String y,int z,double k,double w)
		{
			super(x,y,z);
			this.Acc_Balance=k;
			this.Min_Balance=w;
		}
		void Compute()
		{
			if(Acc_Balance > Min_Balance)
			{
				System.out.println("No Fine Will be Applied");
			}
			else
			{
				System.out.println("Fine Will be Applied");
			}
		}
		void showdata()
		{
//			System.out.println("\n");
			this.show();
			System.out.println("Account Balance is " + Acc_Balance);
			System.out.println("Minimum Balance is " + Min_Balance);
			this.Compute();
		}
	}
	class TD_Ac extends Account
	{
		double Principal;
		int Term;
		double ROI;
		double Maturity_Balance;
		TD_Ac(int x,String y,int z,double p,int t,double r)
		{
			super(x,y,z);
			this.Principal=p;
			this.Term=t;
			this.ROI=r;
//			this.Maturity_Balance=m;
		}
		void Compute()
		{
			Maturity_Balance = Principal+ ((Principal*ROI*Term)/100); 
		}
		void showdata()
		{
//			System.out.println("\n");
			this.show();
			System.out.println("Principal is " + Principal);
			System.out.println("Term is " + Term);
			System.out.println("Rate of interest is " + ROI);
			System.out.println("Maturity Balance is " + Maturity_Balance);
		}
	}	

public class ass4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Account a1 = new Account(1234567809,"Ayush",798987653);
		a1.show();
		Savings_Ac  s1 = new Savings_Ac(1234509876,"Uttam",870967123,5.0,1000.0);
		s1.Compute();
		s1.showdata();
		Current_Ac c1 = new Current_Ac(1235460789,"Rohit",993921435,5000,1000);
		c1.showdata();
		TD_Ac t1 = new TD_Ac(1234256124,"ABCD",802134567,5000,2,2.7);
		t1.Compute();
		t1.showdata();
	}
}
