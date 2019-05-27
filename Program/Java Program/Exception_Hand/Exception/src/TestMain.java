class TestMain  {

    void myFun() throws MyException
    {
        Voter v1 = new Voter(18);
        v1.validateAge();
    }
    public static void main(String[] args) {
        TestMain t1=new TestMain();
        try {
            t1.myFun();
        }
       catch (MyException e){
           System.out.println("Invalid Age");
       }


    }
}
