#include <stdio.h>
#include <string.h>

class Salemang
{
    int id;
    char name[20];
    double sal;
    double incentive;
    int target;

  public:
    void setId(int a)
    {
        this->id = a;
    }
    void setName(char *nm)
    {
        strcpy(this->name, nm);
    }

    void setSal(double b)
    {
        this->sal = b;
    }
    void setIncentive(double x)
    {
        this->incentive = x;
    }

    void setTarget(int y)
    {
        this->target = y;
    }

    int getId()
    {
        return this->id;
    }
    char *getName()
    {
        return this->name;
    }
    double getSal()
    {
        return this->sal;
    }

    double getIncentive()
    {
        return this->incentive;
    }

    int getTarget()
    {
        return this->target;
    }

    void display()
    {
        printf("Person Id :%d Name is :%s Sal is :%ld Incentive is: %ld Target is:%d", this->id, this->name, this->sal, this->incentive, this->target);
    }
};

int main()
{
    Salemang s1;
    s1.setId(10);
    s1.setName("Kundan");
    s1.setSal(20000);
    s1.setIncentive(1000);
    s1.setTarget(25);
    s1.display();
}