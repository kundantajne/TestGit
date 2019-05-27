class Voter {
    int age;

    public Voter(int age) {
        this.age = age;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    void validateAge() throws MyException {
        if (this.age < 18)
        {

                throw new MyException();

        }
        else
        {
            System.out.println("You are eligible to Vote");
        }
    }
}
