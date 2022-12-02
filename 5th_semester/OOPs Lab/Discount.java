 import java.util.Scanner;
public class Discount
{
    private double SalesAmount,Disc;
    Discount(double d)//Using Constructer
    {
    	SalesAmount=d;
    }
    public void compute1()
    {
           if(SalesAmount<10000)
                Disc=0;
            else if(SalesAmount>=10000 && SalesAmount<20000)
                Disc=SalesAmount*0.03;
            else if(SalesAmount>=20000 && SalesAmount<40000)
                Disc=SalesAmount*0.05;
            else if(SalesAmount>=40000)
                Disc=SalesAmount*0.1;

    }
    public void compute2()
    {
            Disc=(SalesAmount>=40000?(SalesAmount*0.1):(SalesAmount>=20000?(SalesAmount*0.05):(SalesAmount>=10000?(SalesAmount*0.03):0)));
    }
    public void display()
    {
//            System.out.println("Sales Amount="+SalesAmount);
            System.out.println("Discount is " + Disc);
    }
    public static void main(String args[])
    {
            int n;
            System.out.println("Enter 1 for compute1");
            System.out.println("Enter 2 for compute2");
            System.out.println("Enter your choice");
            Scanner sc=new Scanner(System.in);
            n=sc.nextInt();
            Discount d1 = new Discount(10000);
           
            switch(n)
            {
                    case 1:d1.compute1();
                            break;
                    case 2:d1.compute2();
//                            break;
            }
            d1.display();
    }
}
