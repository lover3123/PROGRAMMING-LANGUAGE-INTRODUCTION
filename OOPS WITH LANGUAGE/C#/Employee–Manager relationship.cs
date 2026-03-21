using System;

// Base class Employee
class Employee
{
    // Private data members
    private int _empId;
    private string _name;

    // Protected data member
    protected double _salary;

    // Default constructor
    public Employee()
    {
        _empId = 0;
        _name = "Unknown";
        _salary = 0.0;
    }

    // Parameterized constructor
    public Employee(int empId, string name, double salary)
    {
        _empId = empId;
        _name = name;
        _salary = salary;
    }

    // Properties for data members
    public int EmpId
    {
        get { return _empId; }
        set { _empId = value; }
    }

    public string Name
    {
        get { return _name; }
        set { _name = value; }
    }

    public double Salary
    {
        get { return _salary; }
        set { _salary = value; }
    }

    // Method to display employee details
    public void ShowDetails()
    {
        Console.WriteLine($"Employee ID: {_empId}");
        Console.WriteLine($"Name: {_name}");
        Console.WriteLine($"Salary: {_salary}");
    }
}

// Derived class Manager inheriting from Employee
class Manager : Employee
{
    // Private data member for Manager
    private double _travelAllowance;

    // Default constructor
    public Manager()
    {
        _travelAllowance = 0.0;
    }

    // Parameterized constructor
    public Manager(int empId, string name, double salary, double travelAllowance)
        : base(empId, name, salary)
    {
        _travelAllowance = travelAllowance;
    }

    // Method to display salary for Manager
    public void ShowSalary()
    {
        Console.WriteLine($"Salary: {_salary}");
    }

    // Method to display total salary for Manager
    public void ShowTotalSalary()
    {
        Console.WriteLine($"Total Salary: {_salary + _travelAllowance}");
    }
}

class Program
{
    static void Main()
    {
        // Create an object of Employee
        Employee employee = new Employee(101, "Arjun", 50000.0);

        // Call the method showDetails for the employee object
        Console.WriteLine("Employee Details:");
        employee.ShowDetails();
        Console.WriteLine();

        // Create an object of Manager
        Manager manager = new Manager(201, "Krishna", 70000.0, 20000.0);

        // Call the methods showSalary and showTotalSalary for the manager object
        Console.WriteLine("Manager Details:");
        manager.ShowSalary();
        manager.ShowTotalSalary();
    }
}