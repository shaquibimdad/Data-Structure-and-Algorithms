public class Time {

	int hr;	int min;

	double sec;

	public Time(int x,int y,double z)

	{

		this.hr=x;

		this.min=y;

		this.sec=z;

	}

	void add_time(int x)

	{

		this.hr += x;

	}

	void add_time(int x,int y)

	{

		this.hr += x;

		this.min += y;

	}

	void add_time(double x)

	{

		this.sec += x;

	}

//	public void add_time(Time An)

//	{

//		this.hr += An.hr;

//		this.min += An.min;

//		this.sec+= An.sec;

//	}

	public Time add_time(Time An)

	{

		this.hr += An.hr;

		this.min += An.min;

		this.sec += An.sec;

		return this;

	}

	void check() 

	{

		double f;

		if(this.sec>60) 

		{

			f=this.sec;

			this.sec %= 60;

			this.min += (f/60);

		}

		int m;

		if(this.min>60)

		{

			m=this.min;

			this.min %= 60;

			this.hr += (m/60);

		}

	}

	void showtime()

	{

		System.out.println(hr + " Hours " + min + " Minutes " + sec +" Seconds ");

//		System.out.println("h:"+hr+"min:"+min+"sec:"+sec );

	}

	public static void main(String[] args) {

		// TODO Auto-generated method stub

		Time t1 = new Time(2,30,40.47);

		Time t2 = new Time(2,20,20.3);

		System.out.println("Before Adding Time");

		t1.showtime();

		t1.add_time(30);

		System.out.println("\nAfter Adding Time");

		t1.check();

		t1.showtime();

		t1.add_time(1,40);

		System.out.println("\nAfter Adding Time");

		t1.check();

		t1.showtime();

		t1.add_time(10.2);

		System.out.println("\nAfter Adding Time");

		t1.check();

		t1.showtime();

		t1.add_time(t2);

		System.out.println("\nAfter Adding Time");

		t1.check();

		t1.showtime();

		

		

	}

}
