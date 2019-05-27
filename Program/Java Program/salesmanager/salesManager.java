class SalesManager
{
	double incentive;
	int target;
	
	SalesManager()
	{
		incentive=200;
		target=2;	
	}
	SalesManager(double i,int t)
	{
		System.out.println("Parameterized Constructor Called :");
		incentive=i;
		target=t;	
	}


	
	void setIncentive(double i)
	{
		incentive=i;
	}

	void setTarget(int t)
	{
		target=t;
	}

	double getIncentive()
	{
		return incentive;
	}

	int getTarget()
	{
		return target;
	}

	void display()
	{
		System.out.println("Incentive is :"+getIncentive()+"\nTarget is : "+getTarget());
	}

}
class SaleMain
{
	public static void main(String args[])
	{
		SalesManager s1=new SalesManager();
		s1.display();
		s1.setIncentive(2000);

		s1.setTarget(5);
		s1.display();
		System.out.println(s1);
		SalesManager s2=new SalesManager(3000,10);
		s2.display();



	}
}