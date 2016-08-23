#include "iostream"
#include "vector"

using namespace std;

template<typename T>
class List {
private:
        vector<T> datastore;
public:
        List() {
        }

        void add(T item){
                datastore.push_back(item);
        }
        void display(){
                for (size_t i = 0; i < datastore.size(); i++) {
                        std::cout << datastore[i] << std::endl;
                }
        }
};

int main(int argc, char const* argv[]) {
        string p1[] = {"milk", "cheese", "chocolate", "bread", "tea", "coffee"};
        List<string> grocery;
        for (string item : p1) {
                grocery.add(item);
        }
        grocery.display();
        cout << endl;

        List<int> grades;
        int p2[] = {1, 2, 3, 4, 5, 6};
        for (int item : p2) {
                grades.add(item);
        }
        grades.display();

        return 0;
}
