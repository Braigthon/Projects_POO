#include <iostream>
using namespace std;

class SmartPointer {
public:
        static int NumRef;
private:

    public:
        SmartPointer(){
            std::cout << "se creo" << "\n";
            NumRef++;
            std::cout << NumRef << "\n";
        }
        void autodestruccion(){
            NumRef --;
            if (NumRef == 0){
                std::cout << "destruido";
                delete this;
            }
        }
};
int SmartPointer::NumRef = 0;

int main() {

    SmartPointer *sp = new SmartPointer();
    SmartPointer *sp2 = new SmartPointer();

    sp->autodestruccion();
    sp->autodestruccion();


    sp->NumRef;
    std::cout << "\n" << sp->NumRef;


    return 0;
}
