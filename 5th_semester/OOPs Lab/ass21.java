import java.lang.Thread.*;
class count extends Thread{
	count(){
		super("My extending thread");
		System.out.println("My thread created "+this);
		start();
	}
	public void run(){
		try{
			for(int i=0;i<10;i++){
				System.out.println("Printing the count "+i);
				Thread.sleep(1000);
			}
		}
		catch(InterruptedException e){
			System.out.println("My thread interrupts");
		}
		System.out.println("My thread run is over");
	}
}
public class ass21{
	public static void main(String [] args){
		count cnt=new count();
		try{
			while(cnt.isAlive()){
				System.out.println("Main thread will alive till the chile thread is live");
				Thread.sleep(1500);
			}
		}catch(InterruptedException e){
			System.out.println("Main thread interrupts");
		}
		System.out.println("Main thread run is over");
	}
}
