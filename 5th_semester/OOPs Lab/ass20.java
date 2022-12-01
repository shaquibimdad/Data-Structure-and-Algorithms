import java.lang.Thread.*;
class MultithreadingEg extends Thread{
	public void run(){
		try{
			System.out.println("NewThread "+Thread.currentThread().getId()+" is running");
		}
		catch(Exception e){
			System.out.println("Exception is caught...");
		}
	}
}
public class ass20{
	public static void main(String [] args){
		int n = 20;
		for (int i = 0; i < n; i++){
			MultithreadingEg obj = new MultithreadingEg();
			obj.start();
		}
	}
}