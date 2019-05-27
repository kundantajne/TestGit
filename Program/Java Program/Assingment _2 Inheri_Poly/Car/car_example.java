/*5.	Create a class Car which contains members speed, noOfGear. 
 * The class has a method drive() which is responsible to provide starting speed and noOfGears 
 * to a Car.  Implement display() method which will display all attributes of Car class.
The class SportCar is derived from the class Car which adds new features AirBallonType.
 When this method is invoked, initial speed and gear status must be displayed on console.  
 Override the display method which display all attribute of the SportCar.
  Make use of super class display() method.
*/
class Car
{
	int speed;
	int no_of_gears;
	void drive()
	{
		this.speed=10;
		this.no_of_gears=4;
	}
	void display()
	{
		System.out.println("Starting speed is : "+this.speed);
		System.out.println("Number of Gears is : "+this.no_of_gears);

		
	}
	
}
class SportCar extends Car
{
	String s ="Air Ballon Type";
	void display()
	{
		super.display();
		System.out.println("Special feature : "+this.s);

	}
}


 class Testcar {

	
	public static void main(String[] args) 
	{
	   SportCar sc=new SportCar();
	   sc.drive();
	   sc.display();
	}

}
