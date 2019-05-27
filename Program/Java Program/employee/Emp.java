class Emp
{
	int id;
	String name;
	double salary;
	
	Emp()
	{
		System.out.println("")
		id=0;
		name="None";
		salary=0.00;
			
	}
	Emp(int i,String n,double s)
	{
		id=i;
		name=n;
		salary=s;
	}

	void setId(int i)
	{
		id=i;
	}

	void setName(String n)
	{
		name=n;
	}
	void setSalary(double sal)
	{
		salary=sal;
	}

	int getId()
	{
		return this.id;
	}
	
	
	String getName()
	{
		return this.name;
	}

	
	double getSalary()
	{
		return this.salary;
	}

	void display()
	{
		System.out.println("\nEmployee Details are :");
		//System.out.println("Id is : " +getId() +"Name is :" +getName() +"Salary is : "+getSalary());
		System.out.println("Id is : " +getId());
		System.out.println("Name is :" +getName());
		System.out.println("Salary is : "+getSalary());
	}

}

class EmpMain
{
	public static void main(String args[])
	{
		Emp e1;
		e1=new Emp();
		Emp e2;
		e2=new Emp(69,"Kundan",10000);
		
		e1.display();
		e2.display();
		
		Emp e3=new Emp();
		e3.setId(10);
		e3.setName("Tushar");
		e3.setSalary(200000);

		System.out.println("Name is: "+e3.getName());
		e3.display();
		
	
	
	}
	
}