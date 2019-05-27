#include <stdio.h>
#include <string.h>
class student
{
    int roll;
    char name[20];

  public:
    void setRoll(int a)
    {
        roll = a;
    }
    void setName(char *nm)
    {
        strcpy(name, nm);
    }
    int getRoll()
    {
        return this->roll;
    }
    char *getName()
    {
        return this->name;
    }

    void display()
    {
        printf("Roll Number:%d Name is :%s", this->roll, this->name);
    }
};

int main()
{
    student s1;
    s1.setRoll(10);
    s1.setName("sachin");
    s1.display();
}
