#include <iostream>
#include <memory>

using namespace std;

template<typename Temp>

struct smart_pntr {

    smart_pntr() = default;
    smart_pntr(Temp* p) {
        
        this->p = p;
    }
    ~smart_pntr() {

        delete p;
        cout << "Deleted!\n" << endl;
    }

    Temp Dereference() { return *p;}
    Temp& operator * () { return *p;}
    Temp* operator & () {return p;}

    Temp* p = nullptr;
};

int main() {
    
    int i = 9;
    int* p = &i;

    int* pntr = new int(10);
    delete pntr;

    {

        smart_pntr<int> sptr{ new int(10) };
        *sptr = 20;
        cout << *sptr << endl;
        cout << &sptr << endl;

        smart_pntr<float> sptr1{ new float(23.5f) };
    }

    unique_ptr<int> uptr = make_unique<int>(21);
    cout << *uptr << endl;

    //This is a no no: unique_ptr<int> uptr2 = uptr;

    shared_ptr<int> shptr = make_shared<int>(57);
    cout << shptr.use_count() << endl;

    {

        shared_ptr<int> shptr2 = shptr;
        cout << shptr.use_count() << endl;
    }

    shared_ptr<int> shptr3 = shptr;
    cout << shptr.use_count() << endl;
}
