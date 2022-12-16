import java.applet.*;
import java.awt.*;
import java.awt.Graphics;
import java.awt.event.*;
public class ass19 extends Applet implements ActionListener{
TextField a= new TextField(10);
TextField b= new TextField(10);
TextField c= new TextField(10);
Label al=new Label("Enter 1st number");
Label bl=new Label("Enter 2nd number");
Label cl=new Label("Result is");
Button bt= new Button("+"); 
public void init(){
add(al);	
add(a);
add(bl);
add(b);
add(cl);
add(c);
add(bt);
bt.addActionListener(this);   
}
 public void actionPerformed(ActionEvent e) { 
 
	int x=Integer.parseInt(a.getText());
	int y=Integer.parseInt(b.getText());

	if (e.getSource()== bt){    
		int z=x+y;
            c.setText(String.valueOf(z));  
        } 
 }
}
//<applet code="test19.class" height=180 width=320></applet>
