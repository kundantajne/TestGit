

abstract class Employee
{
	String name;
	int id;
	double salary;

	void setName(String s)
	{
	this.name=s;
	}
	String getName()
	{
	return this.name;

	}
	void setId(int a)
	{
		this.id = a;
	}
	int getId()
	{
		return this.id;

	}
	void setSalary(double sa)
	{
		this.salary = sa;
	}

	 
    abstract double calSalary();
     

	Employee()
	{
		this.name="Not given";
		this.id = 0;
		this.salary = 0;


	}
	Employee(String s, int a,double sa)
	{
        this.name=s;
		this.id = a;
		this.salary = sa;

		
	}

	void display()
	{
	System.out.println("Name of Employee is: "+this.name);
        System.out.println("ID of Employee is: "+this.id);
        System.out.println("Salary of Employee is: "+this.salary);

	}
}//class employee ends here

class Salesmanager extends Employee
{

	double incentive ;
	int target;
	
void setIncentive(double a)
	{
		this.incentive = a;
	}
     double  getIncentive()
	{
		return this.incentive;
	}
	
	
	void setTarget(int t)
	{
           this.target=t;

	}
	int getTarget()
	{
          return  this.target;

	}
	Salesmanager()
	{   
                super();
		this.incentive=0;
                this.target=0;
	}
	Salesmanager(String s, int a,double sa,double in,int tar)
	{
		super(s,a,sa);
		this.incentive=in;
                this.target=tar;
		
	}

      double calSalary()
     {
          return (this.salary + this.incentive);
      }
	void display()
	{
		super.display();
        System.out.println("Target  of Salesmanager  is: "+this.target);
        System.out.println("Incentive  of Salesmanager  is: "+ this.incentive);

	}
}// class salesmanager ends here 



class Hr extends Employee
{

	double comission  ;
	

	void setComission(double co)
	{
		this.comission = co;
	}

	double  getCommission()
	{
		return this.comission;
	}
	
	Hr()
	{
		super();
		this.comission=0;
	}
	Hr(String s, int a,double sa,double co)
	{
		super(s,a,sa);
		this.comission=co;
		
	}

 double calSalary()
     {
          return (this.salary + this.comission);
      }
	void display()
	{
        super.display();
        System.out.println("comission   of HR  is: "+ this.comission);

	}
}//HR class ends here

class Admin extends Employee
{
	
	double allowance  ;
	

	
	
	void setAllowance(double co)
	{
		this.allowance = co;
	}

	double  getAllowance()
	{
		return this.allowance;
	}
	
	Admin()
	{
		super();
		this.allowance=0;
	}
	Admin(String s, int a,double sa,double co)
	{
		super(s,a,sa);
		this.allowance=co;
		
	}
      double calSalary()
      {
          return (this.salary + this.allowance);
      }
	void display()
	{
		super.display();
        System.out.println("Allowance   of Admin  is: "+ this.allowance);

	}
}// class admin ends here




 class EmpArr
{
	public static void main(String args[])
	{
		Employee emp[]=new Employee[3];
		emp[0]=new Salesmanager();
		emp[1]=new Admin();
		emp[2]=new Hr();

		EmpArr a1=new EmpArr();
		a1.myFun(emp);

		
	}

	void myFun(Employee arr[])
	{
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i] instanceOf Salesmanager)
			{
				Salesmanager s1=(Salesmanager) arr[i];
				System.out.println(s1.getIncentive());
			}
			if(arr[i] instanceOf Admin)
			{
				Admin a1=(Admin) arr[i];
				System.out.println(a1.getIncentive());
			}
			if(arr[i] instanceOf Hr)
			{
				Hr h1=(Hr) arr[i];
				System.out.println(h1.getIncentive());
			}		
}
	
	}
	
	
	
	
}



