#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student {
private:            // private memeber variable
    string name;
    int rollNumber;
    vector<float> marks;

public:
    // Constructor
    Student(string n, int roll, vector<float> m) : name(n), rollNumber(roll), marks(m) {}

    // Method to calculate total marks
    float calculateTotalMarks() const {
        float total = 0;
        for (float mark : marks) {
            total += mark;
        }
        return total;
    }

    // Method to calculate average marks
    float calculateAverageMarks() const {
        float total = calculateTotalMarks();
        return total / marks.size();
    }

    // Method to display student details
    void displayDetails() const {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: ";
        for (float mark : marks) {
            cout << mark << " ";
        }
        cout << endl;
        cout << "Total Marks: " << calculateTotalMarks() << endl;
        cout << "Average Marks: " << calculateAverageMarks() << endl;
    }

    // Getters and Setters
    string getName() const { return name; }
    void setName(string n) { name = n; }

    int getRollNumber() const { return rollNumber; }
    void setRollNumber(int roll) { rollNumber = roll; }

    vector<float> getMarks() const { return marks; }
    void setMarks(vector<float> m) { marks = m; }
};

class StudentManagementSystem {
private:
    vector<Student> students;

public:
    // Method to add a student
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    // Method to update a student's details
    void updateStudent(int rollNumber, string newName, vector<float> newMarks) {
        for (Student& student : students) {
            if (student.getRollNumber() == rollNumber) {
                student.setName(newName);
                student.setMarks(newMarks);
                break;
            }
        }
    }

    // Method to delete a student
    void deleteStudent(int rollNumber) {
        for (auto it = students.begin(); it != students.end(); ++it) {
            if (it->getRollNumber() == rollNumber) {
                students.erase(it);
                break;
            }
        }
    }

    // Method to display all students
    void displayAllStudents() const {
        for (const Student& student : students) {
            student.displayDetails();
            cout << "---------------------" << endl;
        }
    }
};

int main() {
    StudentManagementSystem sms;

    // Adding students
    sms.addStudent(Student("Alice", 1, {90, 85, 88}));
    sms.addStudent(Student("Bob", 2, {78, 82, 80}));

    // Displaying all students
    cout << "Initial Student List:" << endl;
    sms.displayAllStudents();

    // Updating a student's details
    sms.updateStudent(1, "Alice Smith", {92, 87, 90});

    // Displaying all students after update
    cout << "\nStudent List after Update:" << endl;
    sms.displayAllStudents();

    // Deleting a student
    sms.deleteStudent(2);

    // Displaying all students after deletion
    cout << "\nStudent List after Deletion:" << endl;
    sms.displayAllStudents();

    return 0;
}