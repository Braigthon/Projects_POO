#include <iostream>
#include <string>


class transporte
{
private:
    std::string name;
    float Type_speed;
    std::string color;
public:
    virtual void displace();
};

class terrestre: transporte{
private:
    int wheels;
public:
    void displace() override {
        std::cout<<"khm"<<std::endl;
    }
};

class aereo: transporte{
private:
    int turbine;
public:
    void displace() override {
        std::cout<<"leguas"<<std::endl;
    }
};
class maritimo: transporte{
private:
    int turbine;
public:
    void displace() override {
        std::cout<<"nudos"<<std::endl;
    }
};

int main(){

    maritimo *m = new maritimo();
    m->displace();
    delete m;
}
