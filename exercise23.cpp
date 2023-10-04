#include <string>
#include <iostream>
#include <vector>

class Person
{
private:
    std::string name;
    std::string address;
    int id;

public:
    Person(int id, std::string name, std::string address)
    {
        this->id = id;
        this->name = name;
        this->address = address;
    }
    std::string getName() { return name; };
    std::string getAddress() { return address; };
    void setAddress(std::string address) { this->address = address; };
    virtual std::string toString()
    {
        return "Person[name=" + name + ",address=" + address + "]";
    }
    void setID(int id) { this->id = id; }
    int getID() { return this->id; }
};

class Student : public Person
{
private:
    std::string program;
    int year;
    double fee;

public:
    Student(int id, std::string name = "", std::string address = "", std::string program = "", int year = 0, double fee = 0) : Person(id, name, address)
    {
        this->program = program;
        this->year = year;
        this->fee = fee;
    }
    std::string getProgram() { return program; };
    void setProgram(std::string program) { this->program = program; };
    int getYear() { return year; };
    void setYear(int year) { this->year = year; };
    double getFee() { return fee; };
    void setFee(double fee) { this->fee = fee; };
    std::string toString() override
    {
        return "Student[" + Person::toString() + ",program=" + program + "year=" + std::to_string(year) + "fee=" + std::to_string(fee) + "]";
    }
};

class Staff : public Person
{
private:
    std::string school;
    double pay;

public:
    Staff(int id, std::string name, std::string address, std::string school, double pay) : Person(id, name, address)
    {
        this->school = school;
        this->pay = pay;
    }
    std::string getSchool() { return school; };
    void setSchool(std::string school) { this->school = school; };
    double getPay() { return pay; };
    void setPay(double pay) { this->pay = pay; };
    std::string toString() override
    {
        return "Student[" + Person::toString() + ",school=" + school + "pay=" + std::to_string(pay) + "fee=" + "]";
    }
};

class SchoolBusinessTest
{
    Student *stuarr;
    int arrsize;

public:
    SchoolBusinessTest(Student *stuarr, int arrsize)
    {
        this->stuarr = stuarr;
        this->arrsize = arrsize;
    }
    void printInfo()
    {
        for (int i = 0; i < arrsize; ++i)
        {
            std::cout << stuarr[i].toString() << "\n";
        }
    }
    ~SchoolBusinessTest() { stuarr = NULL; }
};

class Course
{
    std::string courseID;
    std::string courseName;
    std::string courseDescription;
    int noCredit;
    std::vector<Student> studentList;
    std::vector<Staff> staffList;

public:
    void addStudent(Student student_id) { studentList.push_back(Student(student_id)); };
    void removeStudent(Student student_id){};
    void addStaff(Staff staff_id){};
    void removeStaff(Staff staff_id){};
    std::string toString() { return ""; }
};

int main()
{
    Student stuarr[5] = {
        Student(0, "a", "269 cong hoa", "CS", 2023, 500),
        Student(1, "aasdf", "159 cong hoa", "CS", 2023, 500),
        Student(2, "aasdfsg", "269 cong hoa 2", "CS", 2023, 500),
        Student(3, "aasa", "269 le van duyet ", "CS", 2023, 500),
        Student(5, "asda", "269 HCMC", "CS", 2023, 500)};
    Staff p(6, "Staff_Name", "268 Cong Hoa", "HCMUT", 3000);
    return 0;
}