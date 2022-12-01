import java.util.Scanner;
// User Defined Complex class
public class Complex {
    // Declaring variables
    int real, imaginary;
    // Empty Constructor
    Complex() {

    }
    // Constructor to accept
    // real and imaginary part
    Complex(int tempReal, int tempImaginary)
    {
        real = tempReal;
        imaginary = tempImaginary;
    }

    // Defining addComp() method
    // for adding two complex number
    Complex addComp(Complex C1, Complex C2)
    {
        // creating temporary variable
        Complex temp = new Complex();
        // adding real part of complex numbers
        temp.real = C1.real + C2.real;
        // adding Imaginary part of complex numbers
        temp.imaginary = C1.imaginary + C2.imaginary;
        // returning the sum
        return temp;
    }
 
    // Defining subtractComp() method
    // for subtracting two complex number
    Complex subtractComp(Complex C1, Complex C2)
    {
        // creating temporary variable
        Complex temp = new Complex();

        // subtracting real part of complex numbers
        temp.real = C1.real - C2.real;

        // subtracting Imaginary part of complex numbers
        temp.imaginary = C1.imaginary - C2.imaginary;
 
        // returning the difference
        return temp;
    }
 

    // Function for printing complex number
    void printComplexNumber()
    {
        System.out.println("Complex number: " + real + " + " + imaginary + "i");                 
    }

    // Main function
	public static void main(String[] args) {
		// TODO Auto-generated method stub
        // First Complex number
        Complex C1 = new Complex(3, 2);
        
        // printing first complex number
        C1.printComplexNumber();
        
        // Second Complex number
        Complex C2 = new Complex(9, 5);
 
        // printing second complex number
        C2.printComplexNumber();
 
        // for Storing the sum
        Complex C3 = new Complex();
 
        // calling addComp() method
        C3 = C3.addComp(C1, C2);

        // printing the sum
        System.out.print("Sum of ");
        C3.printComplexNumber();

        // calling subtractComp() method
        C3 = C3.subtractComp(C1, C2);
 

        // printing the difference
        System.out.print("Difference of ");
        C3.printComplexNumber();

    }
}


	