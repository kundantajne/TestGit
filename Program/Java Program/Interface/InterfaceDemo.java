interface Tradable
{
	void trade();

}
interface rideable extends Tradable
{

void ride();

}

interface raceable extends Tradable,rideable
{
void race();
}

class Animal 
{
	System.out.println("Inside Animal");	

}
class Horse extends animal implements raceable,rideable
{
public void race()
{
System.out,println("Horse is animal and its raceable");
}
public void trade()
{
System.out,println("Horse is animal and its Tradeable");
}
}
class Vehicle
{
	System.out.println("Inside Vehicle");

}
class Car extends Vehicle implements raceable,rideable
{
	public void race()
	{
		System.out.println("Car is raceable");
	}
	public void ride()
	{
		System.out.println("Car is rideable");
	}
}
class main
{
	public static void main(String[] args) {

	}
}

