class Player
{
	String name;
	int jerno;
	String country;
	int matchsNO;


	Player(String n,int j,String co,int m)
	{
		//cout << "Parameterised Constructor Called ";
		name=n;
		jerno = j;
		country=co;
		matchsNO = m;
	}
	void setname(String n)
	{
		name=n;

	}
	String getname()
	{
		return name;

	}

	void setjerno(int j)
	{
		jerno = j;
	}
	int getjerno()
	{
		return this.jerno;
	}

	void setcountry(String c)
	{
		country=c;

	}
	String getcountry()
	{
		return this.country;

	}
	void setmatchsNO(int m)
	{
		jerno = m;
	}
	int getmatchsNO()
	{
		return this.matchsNO;
	}
	void display()
	{

		System.out.println("Player Details are : ");
		System.out.println("Name is: "+name+ "Jerno is : "+jerno+ "Country is : "+country+"Match no : "+matchsNO+"\n");
	}
	double avg()
	{
		return 0;
	}

}

class footballPlayer extends Player
{
	int goal;

	footballPlayer(String nm, int jn, String cn, int mn, int gn)
	{
		super(nm,jn,cn,mn);
		goal = gn;
	}

	void setGoal(int gn)
	{
		goal = gn;
	}
	int getGoal()
	{
		return goal;
	}

	void display()
	{
		super.display();
		System.out.println("Goals is : "+getGoal());
	}

	 double avg()
	{
		 return (goal / getmatchsNO());
	}

}

class cricketPlayer extends Player
{
	int wicket;

	cricketPlayer(String nm, int jn, String cn, int mn, int wk)
	{
		super(nm,jn,cn,mn);
		wicket = wk;
	}

	void setWicket(int wk)
	{
		wicket = wk;
	}

	int getWicket()
	{
		return wicket;
	}

	void display()
	{
		super.display();
		System.out.println("Wickets is : "+getWicket());

	}

	double avg()
	{
		return (wicket / getmatchsNO());
	}

}

class main
{
	public static void main(String args[])
	{
		Player p1=new Player("Kundan",10,"India",7);
		p1.display();
		p1=new footballPlayer("Kundan",10,"India",7,10);
		p1.display();
		p1=new cricketPlayer("Kundan",10,"India",7,7);
		p1.display();

	}
}

