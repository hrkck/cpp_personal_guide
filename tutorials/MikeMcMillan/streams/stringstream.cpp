#include "iostream"
#include "sstream"
#include "fstream"

using namespace std;
double getAverage(string fileName, int range);

int main(){
        cout << "average: " << getAverage("grades.txt", 5) << endl;
        return 0;
}

double getAverage(string fileName, int range){
        // declining variables:
        ifstream gradesFile;
        stringstream grades;
        string line;
        int grade;
        double total = 0;
        double average = 0;
        // an ifstream object's 'open()' function gets 'conts *char' as parameter.
        // But in this function, we get a 'string' as fileName.
        // the two lines of code below,
        // converts 'std::string' object to a 'const* char' object:
        const char* name;
        name = fileName.c_str();

        // doing the crap work:
        gradesFile.open(name);
        getline(gradesFile, line);
        grades << line;
        gradesFile.close();

        // Getting numbers from the stringstream object called 'grades' and giving them to variable 'grade', so we can add 'hem up.
        for (size_t i = 0; i < range; i++) {
                grades >> grade;
                total += grade;
        }
        average = total / range;
        return average;
}
