#include<iostream>

using namespace std;

class Book{

    private:
    string title;
    string author;
    int year;
    bool available;

    public:
    void setDetails(string s, string a, int y){
    title=s;
    author=a;
    year=y;
    }
    void checkOut(){
    available=false;
    }
    void checkIn(){
    available=true;
    }
    void displayStatus(){
    cout<<title<<endl;
    cout<<author<<endl;
    cout<<year<<endl;
    if(available==true)  cout<<"available"<<endl;
    else cout<<"not available"<<endl;
    }
    boolisClassic(int y){
    if (2023 - y >50) return true;
    else return false;
    }


};


int main(){
    Book narnia;
    narnia.setDetails("Narnia","Prince",1972);
    narnia.displayStatus();

    }
