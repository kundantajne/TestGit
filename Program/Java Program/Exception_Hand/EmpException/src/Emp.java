class Emp {

    int empid;
    String Name;
    String designation;
    double basic;
    double hra;

    int getEmpid() {
        return empid;
    }

    void setEmpid(int empid) {
        this.empid = empid;
    }

    String getName() {
        return Name;
    }

    void setName(String name) {
        Name = name;
    }

    String getDesignation() {
        return designation;
    }

    void setDesignation(String designation) {
        this.designation = designation;
    }

    double getBasic() {
        if (basic < 500) {
            try {
                throw new LowSalException();

            } catch (LowSalException e) {
                System.out.println(e);
            }
        }
        return basic;
    }

    void setBasic(double basic) {
        this.basic = basic;
    }

    public Emp(int empid, String name, String designation, double basic) {

        this.empid = empid;
        Name = name;
        this.designation = designation;
        this.basic = basic;
    }

    public void printDET() {
        System.out.println("Id Of Employye :" + empid
                + "\n Name of Employee is :" + Name
                + "\n Designation Of Employee is:" + designation
                + "\nSalary Of Employee :" + basic);

    }

    public void calculateHRA() {
        if (designation == "Manager") {

            hra = getBasic() * 0.1;
            System.out.println("HRA OF MANAGER : " + hra);
        } else if (designation == "Officer") {

            hra = getBasic() * 0.12;
            System.out.println("HRA OF OFFICER : " + hra);
        } else {

            hra = getBasic() * 0.05;
            System.out.println("HRA OF CLEARK : " + hra);
        }
    }

}