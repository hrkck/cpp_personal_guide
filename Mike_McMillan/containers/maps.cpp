#include "iostream"
#include "map"

using namespace std;

int main(){
        map<string, int> grades;
        grades["jones"] = 78;
        grades["smith"] = 23;
        grades["green"] = 92;
        string name;
        cout << "Enter a name to find: ";
        cin >> name;
        if (grades.find(name) != grades.end()) {
                cout << name << ": " << grades[name] << endl;
        } else {
                cout << name << " not found." << endl;
        }

        // calculating the average grades:
        double average = 0.0;
        int sum = 0;
        // looping through by an iterator
        map<string, int>::iterator iter = grades.begin();
        while (iter != grades.end()) {
                cout << iter->second << endl;
                sum += iter->second;
                iter++;
        }
        average = sum / grades.size();
        cout << "The average grade is : " << average << endl;
        return 0;
}
