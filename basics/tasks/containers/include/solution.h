#include<vector>
#include<iostream>
#include<map>
#include<set>
#include <unordered_map>
#include <unordered_set>
#include <string>


class StudentDatabase {
// Write your solution here
private:
    std::vector<std::string> courses;
    std::map<std::string, int> grades;
    std::set<std::string> professors;
    std::unordered_map<std::string, int> credits;
public:
    const std::vector<std::string>& getCourses() const {
        return courses;
    }
    const std::map<std::string, int>& getGrades() const {
        return grades;
    }
    const std::set<std::string>& getProfessors() const {
        return professors;
    }
    const std::unordered_map<std::string, int>& getCredits() const {
        return credits;
    }
    void printCourses() const {
        std::cout << "Courses: ";
        for (const auto& course : courses) {
            std::cout << course << " ";
        }
        std::cout << std::endl;
    }
    void printGrades() const {
        std::cout << "Grades:\n";
        for (const auto& [student, grade] : grades) {
            std::cout << student << ": " << grade << std::endl;
        }
    }

    void printProfessors() const {
        std::cout << "Professors: ";
        for (const auto& professor : professors) {
            std::cout << professor << " ";
        }
        std::cout << std::endl;
    }

    void printCredits() const {
        std::cout << "Credits:\n";
        for (const auto& [course, credit] : credits) {
            std::cout << course << ": " << credit << std::endl;
        }
    }
    void addCourse(const std::string& course, int credit){
        courses.push_back(course);
        credits[course] = credit;
    }
    void addGrade(const std::string& student, int grade){
        grades[student] = grade;
    }
    void addProfessor(const std::string& name){
        professors.insert(name);
    }
};
