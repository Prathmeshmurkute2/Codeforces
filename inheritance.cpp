/*Iheritance: Types
                    1)Simple Inheritance
                    2)Multiple Inheritance
                    3)Multilevel Inheritance
                    4)Hybrid Inheritance
                    5)Hirarchical Inheritance
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

    void accerlerate(){
        if(!isEngineOn){
            cout<< brand << " " << model <<" : Cannot accelerate Engine is off." <<endl;
            return ;
        }else{
            currentSpeed+=20;
            cout<< brand << " " << model <<" : Accelerating to "<< currentSpeed<< " km/hr" << endl;
        }
    }

    void brake(){
        currentSpeed-=20;
        if(currentSpeed < 0) currentSpeed=0;
        cout<< brand << " " << model <<" : Breaking speed is now "<< currentSpeed<< " km/hr" <<endl;
    }

    virtual ~Car(){}
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
};


int main(){
    ManualCar* myManualCar = new ManualCar("suzuki","wagonR");
    myManualCar->startEngine();
    myManualCar->shiftGear(1);
    myManualCar->accerlerate();
    myManualCar->brake();
    myManualCar->stopEngine();
    delete myManualCar;

    cout<<"---------------------------------------"<<endl;

    ElectricCar* myElectricCar= new ElectricCar("Tesla","Model 5");
    myElectricCar->chargeBattery();
    myElectricCar->startEngine();
    myElectricCar->accerlerate();
    myElectricCar->brake();
    myElectricCar->stopEngine();

    delete myElectricCar;

    return 0;

}