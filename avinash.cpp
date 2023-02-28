#include<iostream>
#include<cstring>
using namespace std;
class queue
//hello welcome
{
    public:
    int size;
    int* arr;
    int rear,front;

    public:
    queue();
    queue(int);
    void insert(int);
    int remove();
    bool isfull();
    bool isempty();   
};

queue::queue()
{
     size=5;
     arr=new int[size];
     rear=front=-1;
}
queue::queue(int s)
{
     size=s;
     arr=new int[size];
     rear=front=-1;
}
void queue::insert(int val)
{
    if(!isfull())
    {
        arr[++rear]=val;
    }
    else
    {
        throw "queue is full!";
    }
}
int queue::remove()
{
    if(!isempty())
    {
        return arr[++front];
    }
    else
    {
        throw "queue is empty!";
    }
}
bool queue::isfull()
{
    return rear==size-1;
}
bool queue::isempty()
{
    return rear==front;
}
int main()
{
    queue q(5);
    try
    {
        q.insert(10);
        q.insert(20);
        q.insert(30);
        q.insert(40);
        q.insert(50);
        q.insert(60);
        cout<<q.remove()<<endl;
        cout<<q.remove()<<endl;
    }
    catch(const char* msg)
    {
        cout<<msg<<endl;
    }
    
    return 0;
}