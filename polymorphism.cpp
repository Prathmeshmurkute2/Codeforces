/*POLYMORPHISM:
        1)Static polymorphism( Method overloading)
        2)Dynaic polymorphism( Mthod overridding)
        
*/
#include<iostream>
using namespace std;

class Car{
protected:
    string brand;
    string model;
    bool isEngineOn;
    int currentSpeed;

public:
    
    Car(string b,string m){
        this->brand=b;
        this->model=m;
        isEngineOn=false;
        currentSpeed=0;

    }
    
    void startEngine(){
        isEngineOn=true;
        cout<< brand << " " << model <<" : Engine started." <<endl;
    }

    void stopEngine(){
        isEngineOn=false;
        currentSpeed=0;
        cout<< brand << " " << model <<" : Engine turned off." <<endl;
    }

    virtual void accelerate()=0;  //Abstract method for dynamic polymorphism
    virtual void brake()=0;  // Abstract method for dynamic polymorphism
    virtual ~Car(){}  //virtual destructor
};

class ManualCar : public Car{
private:
    int currentGear;

public:
    ManualCar(string b,string m) : Car(b,m) {
        currentGear=0;
    }

    void shiftGear(int gear){
        currentGear = gear;
        cout<< brand << " " << model <<" : Shifted to gear "<< currentGear <<endl;
    }

    void accelerate(){
        cout<<"Manual car speed is "<<endl;
    }

    void brake(){
        cout<<"Car stop"<<endl;
    }
};

class ElectricCar:public Car{
private:
    int batteryLevel;

public:
    ElectricCar(string b, string m): Car(b,m){
        batteryLevel=100;
    }
    
    void chargeBattery(){
        batteryLevel=100;
        cout<< brand << " " << model <<" : Battery fully charged!." <<endl;
    }

    void accelerate(){
        currentSpeed+=20;
        cout << "electric car speed is "<<endl;
    }

    void brake(){
        cout<<"car stop"<<endl;
    }
};


int main(){
    ManualCar* myManualCar = new ManualCar("suzuki","wagonR");
    myManualCar->startEngine();
   
    myManualCar->accelerate();
    
    myManualCar->stopEngine();
    delete myManualCar;

    cout<<"---------------------------------------"<<endl;

    ElectricCar* myElectricCar= new ElectricCar("Tesla","Model 5");
    myElectricCar->chargeBattery();
   
    myElectricCar->accelerate();
   
    myElectricCar->stopEngine();

    delete myElectricCar;

    return 0;

}