public class ass16
{
  public static void main(String Args[])
  {
    try{
       int n1=5;
       int n2=0;
       int res;
       res=n1/n2;
       System.out.println("Result:"+res);
    }
   catch(ArithmeticException e)
   {
     e.printStackTrace();
    }
    try{
       int a[]=new int[4];
       a[5]=4;
    }
   catch(ArrayIndexOutOfBoundsException ex)
   {
     ex.printStackTrace();
    }
   try{
       String str=null;
       System.out.println(str.length());
    }
   catch(NullPointerException e)
   {
     e.printStackTrace();
    }
   try{
       int n;
       n=Integer.parseInt("ABC");
       System.out.println(n);
    }
   catch(NumberFormatException e)
   {
     e.printStackTrace();
    }
  }
}
