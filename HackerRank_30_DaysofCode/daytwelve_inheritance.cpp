#include <iostream>
#include <vector>

using namespace std;


class Person {
protected:
        string firstName;
        string lastName;
        int id;
public:
        Person(string firstName, string lastName, int identification){
                this->firstName = firstName;
                this->lastName = lastName;
                this->id = identification;
        }
        void printPerson(){
                cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
        }
};

class Student : public Person {
private:
        vector<int> testScores;
public:
        // Write your constructor
        Student(string firstName, string lastName, int identification) : Person(firstName, lastName, identification){
                this->firstName = firstName;
                this->lastName = lastName;
                this->id = identification;
        }
        Student(string firstName, string lastName, int identification, vector<int> testScores) : Person(firstName, lastName, identification){
                this->firstName = firstName;
                this->lastName = lastName;
                this->id = identification;
                this->testScores = testScores;
        }

        // Write char calculate()
        char calculate(){
                int avg = 0;
                int grade = 0;
                for (int i = 0; i < testScores.size(); i++) {
                        grade += testScores[i];
                }
                avg = grade / testScores.size();
                /* Keep these three lines of code for debugging:
                   System.out.println(viceversa);
                   System.out.println(testScores.length);
                   System.out.println(Grade);
                 */
                if ((avg >= 90) && (avg <= 100)) {
                        return 'O';
                } else if ((avg >= 80) && (avg < 90)) {
                        return 'E';
                } else if ((avg >= 70) && (avg < 80)) {
                        return 'A';
                } else if ((avg >= 55) && (avg < 70)) {
                        return 'P';
                } else if ((avg >= 40) && (avg < 55)) {
                        return 'D';
                } else if (avg < 40) {
                        return 'T';
                } else {
                        return 'Z';
                }
        }
        void printGrade(){
                cout << "Grade: " << this->calculate() << "\n";
        }
};

int main() {
        string firstName;
        string lastName;
        int id;
        int numScores;
        vector<int> scores;

        cout << "Enter the firstName: ";        cin >> firstName;
        cout << "Enter the lastName: "; cin >> lastName;
        cout << "Enter the Student ID: ";       cin >> id;
        cout << "How many score will be given to the Student? : ";      cin >> numScores;

        for (int i = 0; i < numScores; i++) {
                int tmpScore;
                cout << i + 1 << ". Score: ";
                cin >> tmpScore;
                scores.push_back(tmpScore);
        }

        Student* s = new Student(firstName, lastName, id, scores);
        s->printPerson();
        s->printGrade();

        return 0;
}
