#include<iostream>
using namespace std;

class Counter{
    public:
    Vehicle c_Num, c_Type;
    string date;

    Counter(){};
    Counter(Vehicle x, Vehicle y, string z){
        c_Num = x;
        c_Type = y;
        date = z;
    }
    // Counter(string x, string y, string z){
    //     car_Num = x;
    //     car_Type = y;
    //     date = y;
    // }

}; 


class Vehicle{
    public:
    string c_Num, c_Type;

    Vehicle(){};
    Vehicle(string a, string b){
        c_Num = a; 
        c_Type = b;
    }

    void p_v_Details() {
      cout<<"Car number: "<<c_Num<<endl;
      cout<<"Car type: "<<c_Type<<endl;
    }
};

class Queue {

public:
    Counter arr[1000];
    int front = 0;
    int rear = -1;

    Counter enqueue(Counter a){
        if(rear >= 1000-1){
            cout<<"Queue is full..."<<endl;
            return 0;
        }
        arr[++rear] = a;
        return 0;
    }

    Counter dequeue(){

        if(rear < front){
            cout<<"Queue is empty..."<<endl;
            return 0;
        }

        ++front;
        return 0;
    }

    void printQueue(){
        for(int i=front; i<=rear; i++){
            cout<<arr[i]<< " ";
        }
        cout<<endl;
    }
};

int main(){
    int n;
    cout<<"Enter number of vehicles: ";
    cin>>n;
    Vehicle v[n];
    Counter c[n];

    string c_n, c_t;

    for(int i=0; i<n; i++){
        cout<<"Enter car Number of car "<<i+1<<": ";
        cin>>c_n;
        cout<<"Enter car type of car "<<i+1<<": ";
        cin>>c_t;
        v[i] = Vehicle(c_n, c_t);
    }

    for(int i=0; i<n; i++){
        
    }

    // for(int i=0; i<n; i++){
    //     v[i].p_v_Details();
    //     cout<<endl;
    // }

    Queue stc;
    for(int i=0; i<n; i++){
        stc.enqueue(v[i]);
    }
    
    stc.printQueue();

    return 0;
}
