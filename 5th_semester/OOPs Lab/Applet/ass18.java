import java.applet.*;
import java.awt.*;
import java.util.Date;
public class ass18 extends Applet{
	public void paint(Graphics g){
		Date dt=new Date();
		g.drawString("Time is : " + dt,20,50);
	}
}
/*<applet code="test18.class" height=180 width=320></applet>*/
