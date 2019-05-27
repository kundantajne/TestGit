abstract class Instrument
{
	abstract void play();
	
}
class Piano extends Instrument
{
	void play()
	{
		System.out.println("Piano is playing  tan tan tan ");
	}
}
class Flute extends Instrument
{
	void play()
	{
		System.out.println("Flute is playing  toot toot toot toot ");
	}
}
class Guitar extends Instrument
{

	void play()
	{
		System.out.println(" Guitar is playing  tin  tin  tin ");
	}
}

class InstrumentMain
{
	public static void main(String args[])
	{
		Instrument i1[]=new Instrument[5];
		i1[0]=new Piano();

		//i1.play();
		//i1=new Flute();
		//i1.play();
	}

}