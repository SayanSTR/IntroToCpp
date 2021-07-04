#include <iostream>
using namespace std;

#ifndef QUEUE_H_
#define QUEUE_H_
struct Queue
{
    private:
        static const int QUEUESIZE = 100;
        //Data members
        int nWaiting, front, driverID[QUEUESIZE];

    public:
        //Constructor
        Queue();
        Queue(const Queue &other);
        ~Queue();

        //Operator overloadings
        Queue& operator=(Queue &source);

        //Functions
        int insert(int ID);
        int assign();
};

#endif /*QUEUE_H_*/


//Struct Definition
//Constructors
Queue::Queue() {
    front = nWaiting = 0;

    for (size_t i = 0; i < QUEUESIZE; i++){
        driverID[i] = 0;
    }
}

//Copy-constructor
Queue::Queue(const Queue &other) : front(other.front), nWaiting(other.nWaiting) //using initialization list
{
    for(int i=front,j=0; j<nWaiting; j++) { // j number of elements to copy
        driverID[i] = other.driverID[i]; //copying only non-null elements
        i = (i+1)%QUEUESIZE;
    }
}

//Destructor
Queue::~Queue() {
    if(nWaiting>0) cout<<"!!WARNING: Non-empty queue being destroyed!\n";
}

//Operator overloadings
Queue& Queue::operator=(Queue &source) {
    front = source.front;
    nWaiting = source.nWaiting;
    for(int i=front,j=0; j<nWaiting; j++) { // j number of elements to copy
        driverID[i] = source.driverID[i]; //copying only non-null elements
        i = (i+1)%QUEUESIZE;
    }
    return *this; // returns reference to this object
    //returning reference makes chain possible e.g: q1 = q2 = q3;
}

    
//Functions
int Queue::insert(int ID) {
    //Check if there is space for more entries
    if(nWaiting >= QUEUESIZE) {
        cout<<"Queue is full. Register later.\n";
        return;
    }
    //Store driverID to end of queue
    int position = (front+nWaiting)%QUEUESIZE;
    driverID[position] = ID;
    nWaiting++;
    cout<<"Registered ID. Position in waiting queue is"<<position<<"\n";
    return position;
}

int Queue::assign() {
    //Check if any driver is available
    if(nWaiting == 0) {
        cout<<"No taxi available for the moment. Please try later.\n";
        return;
    }
    int ID = driverID[front];
    cout<<"Taxi assigned. Driver ID is <"<<ID<<". Happy Journey!\n";
    front = (front+1)%QUEUESIZE;
    nWaiting--;
    return ID;
}

int main()
{
    //
    Queue taxi;

}