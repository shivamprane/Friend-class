#include<iostream>
using namespace std;

class box{
private:
    int length=10;
    int breadth=12;
    int height=13;
    friend int rectangle();
public:
    int area()
    {
        return length*breadth*height;    
    }  
};

int rectangle()
{
    box box1;
    return box1.length*box1.breadth;
}

int main(){

    cout << rectangle() << endl;
    return 0;
}

 
