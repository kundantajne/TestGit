class CommandLineString
{
	public static void main(String args[])
	{
		String str, rev = "";
		str=args[0];
		System.out.println("String is : "+str);

		//Length;
		int l=str.length();
		System.out.println("Length is : "+l);
		
		//UpperCase;
		String upper_case=str.toUpperCase();
		System.out.println("UpperCase : "+upper_case);

		//String Reverse;
		for ( int i = l - 1; i >= 0; i-- )
         		rev = rev + str.charAt(i);
 
     		 if (str.equals(rev))
         		System.out.println("Given String is a palindrome");
     		 else
        		 System.out.println("Given String  is not a palindrome");

	}

}