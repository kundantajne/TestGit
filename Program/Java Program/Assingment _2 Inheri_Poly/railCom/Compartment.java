abstract class compartment {
    abstract void notice();
}

class firstclass extends compartment {
     void notice() {
        System.out.println("First class compartment(Reserved use only)");
    }
}

class ladies extends compartment {
    void notice() {
        System.out.println("Reserved for ladies");
    }
}

class general extends compartment {
    void notice() {
        System.out.println("General compartment");
    }
}

class luggage extends compartment {
     void notice() {
        System.out.println("Compartment for luggages");
    }
}

class testcompartment {
    public static void main(String[] args) 
	{
        	compartment comp[] = new compartment[10];
        	
        	
        	for (int i = 0; i <10; i++)
	 	{
            		
            		if (i==1 || i==3 || i==5) comp[i] = new firstclass();
            		else if (i==2 || i==4 || i==6) comp[i] = new ladies();
            		else if (i==7 || i==9) comp[i] = new general();
            		else comp[i] = new luggage();
           		comp[i].notice();
            		System.out.println();
       		}
    	}
}