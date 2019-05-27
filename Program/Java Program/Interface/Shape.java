public interface Shape    //interface are like a class 
{
 double calArea();//by defaults compiler read it as public abstract
}//interface ends here


class Circle implements Shape     //impliments keyword is used to implement a interface for class 
{
	double radius;

	Circle()
	{
        super();
		radius = 0;
	}
	Circle(double r)
	{
               //super(c);
		radius = r;
	}
	void setRadius(int a)
	{
		radius = a;
	}

	double getRadius()
	{
		return radius;
	}
	public double calArea()//need to give access specifier public as it is by default in interface
	{
		double area;
		area=3.14*this.radius*this.radius;
		return area;
	}
	void display()
	{
		//super.display();
		System.out.println("Radius of circle:"+this.radius);	
         }
}//class circle ends here

class Rectangle implements Shape
{
	double length;
	double width;
	Rectangle()
	{
		//super();
                length = 0;
		width = 0;
	}
	Rectangle(double l, double b)
	{
		//super(c);
                length = l;
		width = b;
	}
	void setLength(int a)
	{
		length = a;
	}
	void setBreadth(int a)
	{
		width = a;
	}
	double getLength()
	{
		return length;
	}
	double getBreadth()
	{
		return width;
	}
	public double calArea()//need to give access specifier public as it is bydefault in interface
	{
		double area;
		area=this.length*this.width;
		return area;
	}
	
	void display()
	{
		//super.display();
		System.out.println("Length:"+this.length+" Width:"+this.width);
	}
}//class rectangle ends here
 


class newshapeMain
{
public static void main(String[] args)
{	
        Shape s; // creating interface referance 
        s=new Rectangle(); // creating object of rectangle 
       
	System.out.println("Area of rectangle:"+s.calArea());	
	System.out.println();
              

	 s=new Rectangle(2, 2);
	 //s.display();
	 System.out.println("Area of rectangle:"+s.calArea());	
	 System.out.println();

         s=new Circle();
	// s.display();
	 System.out.println("Area of Circle:"+s.calArea());	
	System.out.println();


	s=new Circle(5);
	//s.display();
	System.out.println("Area of Circle:"+s.calArea());	
	System.out.println();

}
}