#include <iostream>
using namespace std;

class Transport {
protected:
    string name;
    double weight;
    double FuelDecrease;
public:
    Transport() = default;
    Transport(string _name, double _weiight, double _FuelDecrease) {
        name = _name;
        weight = _weiight;
        FuelDecrease = _FuelDecrease;
    }
    void setAll(string _name, double _weiight, double _FuelDecrease, double _klvoPass) {
        name = _name;
        weight = _weiight;
        FuelDecrease = _FuelDecrease;
    }
    virtual void costOfDelivery() {
        cout << "NONE" << endl;
    }
};

class Car :public Transport {
    double klvoPass;
public:
    Car() = default;
    Car(string _name, double _weiight, double _FuelDecrease, double _klvoPass) :Transport(_name, _weiight, _FuelDecrease) {
        klvoPass = _klvoPass;
    }
    void setAll(string _name, double _weiight, double _FuelDecrease, double _klvoPass) {
        name = _name;
        weight = _weiight;
        FuelDecrease = _FuelDecrease;
        klvoPass = _klvoPass;
    }
    void costOfDelivery() {
        cout << "Cost Of Delivery = 500$";
    }
};



class Airplane :public Transport {
    double klvoPass;
public:
    Airplane() = default;
    Airplane(string _name, double _weiight, double _FuelDecrease, double _klvoPass) :Transport(_name, _weiight, _FuelDecrease) {
        klvoPass = _klvoPass;
    }
    void setAll(string _name, double _weiight, double _FuelDecrease, double _klvoPass) {
        name = _name;
        weight = _weiight;
        FuelDecrease = _FuelDecrease;
        klvoPass = _klvoPass;
    }
    void costOfDelivery() {
        cout << "Cost Of Delivery = 2000$";
    }
};



class waterShip :public Transport {
    double klvoPass;
public:
    waterShip() = default;
    waterShip(string _name, double _weiight, double _FuelDecrease, double _klvoPass) :Transport(_name, _weiight, _FuelDecrease) {
        klvoPass = _klvoPass;
    }
    void setAll(string _name, double _weiight, double _FuelDecrease, double _klvoPass) {
        name = _name;
        weight = _weiight;
        FuelDecrease = _FuelDecrease;
        klvoPass = _klvoPass;
    }
    void costOfDelivery() {
        cout << "Cost Of Delivery = 1500$";
    }
};



class Gruz :public Transport {
    double klvoPass;
public:
    Gruz() = default;
    Gruz(string _name, double _weiight, double _FuelDecrease, double _klvoPass) :Transport(_name, _weiight, _FuelDecrease) {
        klvoPass = _klvoPass;
    }
    void setAll(string _name, double _weiight, double _FuelDecrease, double _klvoPass) {
        name = _name;
        weight = _weiight;
        FuelDecrease = _FuelDecrease;
        klvoPass = _klvoPass;
    }
    void costOfDelivery() {
        cout << "Cost Of Delivery = 300$";
    }
};

int main()
{
    Transport* transport = nullptr;
    cout << "1. Car" << endl;
    cout << "2. Airplane" << endl;
    cout << "3. WaterShip" << endl;
    cout << "4. BigCar" << endl;
    int ch = 0;
    cin >> ch;
    switch (ch)
    {
    case(1):
    {
        transport = new Car;
        transport->setAll("MersedeZ", 200, 200, 4);
        break;
    }
    case(2):
    {
        transport = new Airplane;
        transport->setAll("AirFlight", 200, 200, 4);
        break;
    }
    case(3):
    {
        transport = new waterShip;
        transport->setAll("HMSF", 200, 200, 4);
        break;
    }
    case(4):
    {
        transport = new Gruz;
        transport->setAll("MersedeZ", 200, 200, 4);
        break;
    }
    }
    transport->costOfDelivery();

}
