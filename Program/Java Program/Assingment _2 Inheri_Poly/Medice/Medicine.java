class Medicine
{
	String c_name;
	String address;

	Medicine(String cn,String ad)
	{
		c_name=cn;
		address=ad;
	}
	void setCName(String n)
	{
		c_name=n;
	}
	void setAddress(String cn)
	{
		address=cn;

	}

	String getCName()
	{
		return c_name;
	}

	String getAdress()
	{
		return address;
	}

	void displayLabel() 
	{
		System.out.println("Name is :"+getCName());
		System.out.println("Address is :"+getAdress());
	}

}
class Tablet extends Medicine
{
	Tablet(String cn,String ad)
	{
		super(cn,ad);
	}
	void displayLabel() 
	{
		super.displayLabel(); 
		System.out.println("store in cool n dry place");
	}

}
class Syrup  extends Medicine
{
	 Syrup(String cn,String ad)
	{
		super(cn,ad);
	}
	void displayLabel() 
	{
		 super.displayLabel();
		 System.out.println("take after taking eatables");
	}
}
class Ointment  extends Medicine
{

	Ointment(String cn,String ad)
	{
		super(cn,ad);
	}
	void displayLabel() 
	{
		 super.displayLabel();
		 System.out.println("for external use only");
	}
}

class Testmedicine
{
	public static void main(String args[])
	{
		Medicine m=new Medicine("Paracetamol","India");
		m.displayLabel();
		//m.setCName("Paracetamol");
		//m.setAddress("India");
		//m.displayLabel();
		m=new Tablet("Paracetamol","India");
		m.displayLabel();
	}

}