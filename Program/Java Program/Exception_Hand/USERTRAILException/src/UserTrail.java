public class UserTrail {
    int val1;
    int val2;

    public int getVal1() {
        return val1;
    }

    public void setVal1(int val1) {
        this.val1 = val1;
    }

    public int getVal2() {
        return val2;
    }

    public void setVal2(int val2) {
        this.val2 = val2;
    }

    public UserTrail(int val1, int val2) {
        this.val1 = val1;
        this.val2 = val2;
    }

    void booleanShow(){
        if(getVal1() < 0 || getVal2() < 0)
        {
            try{
                throw new IllegalValueException();
            }catch(IllegalValueException e)
            {
                System.out.println(e);
            }
        }
        else {
            System.out.println(this.val1 = val1);
            System.out.println( this.val2 = val2);
        }



    }
    void display()
    {
        System.out.println("Number is "+val1+"\n Number is "+val2);
    }
}
