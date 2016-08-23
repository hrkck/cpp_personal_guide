#include "iostream"
#include "vector"

using namespace std;

template<class T, class U>
class Cmap {
private:
        vector<T> keys;
        vector<U> values;
public:
        void insert(T key, U value){
                keys.push_back(key);
                values.push_back(value);
        }
        void get(int n){
                cout << keys[n] << ": " << values[n] << endl;
        }
};

int main(){
        Cmap<string, int> grades;
        grades.insert("Smith", 23);
        grades.insert("Lives", 83);
        grades.insert("Ben", 47);
        grades.get(2);
        return 0;
}
