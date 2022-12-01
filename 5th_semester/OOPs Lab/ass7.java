import java.util.Scanner;
public class ass7{
	// TODO Auto-generated method stub

    public static void main(String[] args){
//    	a)
//    	int a;
//    	char b;
//    	double c;
//    	float d;
//    	 Scanner sc=new Scanner(System.in);
//    	 System.out.println("Enter an Integer");
//         a=sc.nextInt();
//         System.out.println("Enter a Character");
//         b=sc.next().charAt(0);
//         System.out.println("Enter an Double Value");
//         c=sc.nextDouble();
//         System.out.println("Enter an Float Value");
//         d=sc.nextFloat();
//    	 Integer A = Integer.valueOf(a);
//    	Character B = Character.valueOf(b);
//    	Double C = Double.valueOf(c);
//    	Float D = Float.valueOf(d);
//    	System.out.println("Integer Value is : " + A);
//    	System.out.println("Character Value is : " + B);
//    	System.out.println("Double Value is : " + C);
//    	System.out.println("Float Value is : " + D);
    	
//    	b)
//    	int a;
//    	float b;
////    	a=null;
////    	b=null;
//    	Integer x = null;
//    	Float y= null;
//    	System.out.println(x);
//    	System.out.println(y);
//    	
//    	c)
//    	int a,e;
//    	char b,f;
//    	double c,g;
//    	float d,h;
//    	 Scanner sc=new Scanner(System.in);
//    	 System.out.println("Enter an Integer");
//         a=sc.nextInt();
//         System.out.println("Enter a Character");
//         b=sc.next().charAt(0);
//         System.out.println("Enter an Double Value");
//         c=sc.nextDouble();
//         System.out.println("Enter an Float Value");
//         d=sc.nextFloat();
//    	 Integer A = Integer.valueOf(a);
//    	 Character B = Character.valueOf(b);
//    	 Double C = Double.valueOf(c);
//    	 Float D = Float.valueOf(d);
//    	 e= A.intValue();
//    	 f=B.charValue();
//    	 g=C.doubleValue();
//    	 h=D.floatValue();
//    	System.out.println("Integer Value is : " + e);
//    	System.out.println("Character Value is : " + f);
//    	System.out.println("Double Value is : " + g);
//    	System.out.println("Float Value is : " + h);
//    	
    	
//    	d)
    	int u = 0, lw = 0, sp = 0, dt=0;
    	String str = "AYUSH kumar 12345";
    	int l = str.length();
    	System.out.println("The String is : ");
    	for(int i = 0; i < l; i++)
        {
            Character H = str.charAt(i);
            System.out.println(H);
            if(Character.isUpperCase(str.charAt(i)))
            {
                u++;
            }
            else if(Character.isLowerCase(str.charAt(i)))
            {
                lw++;
            }
            else if(Character.isDigit(str.charAt(i)))
            {
                dt++;
            }
//            else if(Character.isWhitespace(str.charAt(i)))
            else
            {
                sp++;
            }
        }
        System.out.println("No. of upper Case Characters is : " +u);
        System.out.println("No. of lower Case Characters is : " +lw);
        System.out.println("No. of Digits is : " +dt);
        System.out.println("No. of White Spaces is : " +sp);
    }
}
