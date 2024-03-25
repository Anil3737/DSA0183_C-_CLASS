#include <iostream>
using namespace std;
class Student 
{
    protected:
    	float marks[4];
    public:
    void inputMarks() 
	{
        cout << "Enter 6 subjects marks: ";
        for(int i = 0; i < 6; ++i) 
		{
            cin >> marks[i];
        }
    }
};

class Result : public Student 
{
	public:
    float calculateTotal() 
	{ 
	    //int sub;
        float total = 0;
        for(int i = 0; i < 6; ++i) 
		{
            total += marks[i];
        }
        return total;
    }

    float calculateAggregate() 
	{
		int sub;
        return calculateTotal() / 6;
    }

    char calculateGrade() 
	{
        float aggregate = calculateAggregate();
        if(aggregate > 75) 
		{
            return 'A'; 
        } else if(aggregate >= 60 && aggregate < 75) 
		{
            return 'B'; 
        } else if(aggregate >= 50 && aggregate < 60)
		{
            return 'C'; 
        } else if(aggregate >= 40 && aggregate < 50) 
		{
            return 'D'; 
        } else 
		{
            return 'F'; 
        }
    }
};

int main() 
{
    Result studentResult;
    studentResult.inputMarks();
    float total = studentResult.calculateTotal();
    float aggregate = studentResult.calculateAggregate();
    char grade = studentResult.calculateGrade();
    cout << "Total Marks: " << total << endl;
    cout << "Aggregate Marks: " << aggregate << endl;
    cout << "Grade: ";
    switch(grade) 
	{
        case 'A':
            cout << "Distinction";
            break;
        case 'B':
            cout << "First Division";
            break;
        case 'C':
            cout << "Second Division";
            break;
        case 'D':
            cout << "Third Division";
            break;
        case 'F':
            cout << "Fail";
            break;
        default:
            cout << "Invalid Grade";
    }
    cout << endl;

    return 0;
}

