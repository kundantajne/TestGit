class Date
{
	int day,month,year;
	String day_in_week;

	Date()
	{
		day=12;
		month=8;
		year=1996;
		day_in_week="Sunday";
	}
	void setDate(int d)
	{
		this.day=d;
	}
	void setMonth(int m)
	{
		this.month=m;
	}
	void setYear(int y)

	{
		this.year=y;
	}
	

	int getDay()
	{
		return this.day;
	}
	int getMonth()
	{
		return this.month;
	}
	int getYear()
	{
		return this.year;
	}

	void display()
	{
		System.out.println("Date is :");
		System.out.println("Day :" +getDay());
		System.out.println("Month  :" +getMonth());
		System.out.println("Year  :" +getYear());
		System.out.println("Today Is  :" +day_in_week);	
	}
	
}
//Class Ends Here;

class mainDemo
{
	public static void main(String args[])
	{
		Date d1;
		//System.out.println(d1);
		d1=new Date();
		System.out.println(d1);
		d1.display();
	}

}
