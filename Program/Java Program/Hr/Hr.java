class Hr
{
	double comission;

	Hr()
	{
		System.out.println("Default Constructor : ");
		comission=120;
	}

	Hr(double c)
	{
		System.out.println("Parameterized Constructor : ");
		comission=c;
	}

	void setComission(double c)
	{
		comission=c;
	}

	double getComission()
	{
		return comission;
	}

	void display()
	{
		System.out.println("Comission is : "+getComission());
	}	

}

class HrMain
{

	public static void main(String []args)
	{
		Hr h1=new Hr();
		h1.display();

		Hr h2=new Hr(2000);
		h2.display();
	}
}