#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Person {
protected:
    string firstName;
    string lastName;
    int id;

public:
    Person(string firstName, string lastName, int identification) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }

    void printPerson() {
        cout << "Name: " << lastName << ", " << firstName << endl;
        cout << "ID: " << id << endl;
    }
};

class Student : public Person {
private:
    vector<int> testScores;

public:
    Student(string firstName, string lastName, int identification, vector<int> scores)
        : Person(firstName, lastName, identification), testScores(scores) {}

    char calculate() {
        int totalScore = accumulate(testScores.begin(), testScores.end(), 0);
        int averageScore = totalScore / testScores.size();

        if (averageScore >= 90 && averageScore <= 100) {
            return 'O';
        } else if (averageScore >= 80 && averageScore < 90) {
            return 'E';
        } else if (averageScore >= 70 && averageScore < 80) {
            return 'A';
        } else if (averageScore >= 55 && averageScore < 70) {
            return 'P';
        } else if (averageScore >= 40 && averageScore < 55) {
            return 'D';
        } else {
            return 'T';
        }
    }

    void printPerson() {
        Person::printPerson();
        cout << "Grade: " << calculate() << endl;
    }
};

int main() {
    string firstName, lastName;
    int id, numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;

    for (int i = 0; i < numScores; ++i) {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }

    Student* s = new Student(firstName, lastName, id, scores);
    s->printPerson();

    return 0;
}
