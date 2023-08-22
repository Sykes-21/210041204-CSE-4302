#include<iostream>

using namespace std;

class Counter
{

private:
    int count;
    int increment_step;

public:
    void setIncrementStep(int step_val)
    {
        increment_step=step_val;
    }
    int getCount()
    {
        return count;
    }
    void Increment()
    {
        count+=increment_step;
    }
    void resetCount()
    {
        count=0;
    }
    bool isEven()
    {
        if(count%2==0) return true;
        else return false;

    }


};

int main()
{
    Counter counter1;

    counter1.resetCount();
    counter1.setIncrementStep(5);

    counter1.Increment();
    counter1.Increment();

    cout << "Current Count: " << counter1.getCount()<< endl;

    counter1.resetCount();

    cout << "After resetting count: " << counter1.getCount()<< endl;

    return 0;

}
