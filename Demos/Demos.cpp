#include <iostream>

using namespace std;

void floop() {

    bool b = true;

    int i = 5;
}

void floop2() {

    bool b = false;

    float f = 5.8f;
}

void floop3() {

    int brake[50090909];

    floop3();
}

class Animal {

public:
    Animal(string name) {

        name_ = name;
    };

    string getName() {
      
        return name_;
    }
private:

    std::string name_;
};

void setValue(int* v) {

    *v = 5;
}

void Swap(int* a, int* b) {

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int i = 5;

    float f = 4.5f;

    //floop();
    //floop2();
    floop3();

    int* pointer = new int(5);

    cout << pointer << endl;
    delete pointer;

    Animal* dog = new Animal("Dog");
    std::cout << dog->getName() << std::endl;
    delete dog;
    dog = nullptr;
    if (dog) {

    }

    Animal cat("Cat");
    std::cout << cat.getName() << std::endl;

    int* block = (int*) malloc(sizeof(int) * 1000);

    block[0] = 1;

    int v1 = 10;
    int v2 = 20;

    int* p = nullptr;
    cout << p << endl;

    p = &v1;
    *p = 5;

    cout << p << endl;
    cout << &v1 << endl;

    p = &v2;
    *p = 45;

    //setValue(&v2);
    // v1 = 5 v2 = 42
    Swap(&v1, &v2);
    cout << v2 << endl;
    cout<< v1 << " " << v2 << endl;
}

/*memory() {

}
*/
