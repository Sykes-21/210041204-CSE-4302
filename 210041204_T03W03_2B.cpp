#include<iostream>

using namespace std;

class Student{

private:
    string f_name;
    string l_name;
    int ID;
    int birthyear;
    string course;
    float marks;
    float grade;

public:
    void setDetails(string f, string l, int i, int y, string c, float m){
    f_name=f;
    l_name=l;
    ID=y;
    birthyear=y;
    course=c;
    marks=m;

    }
    int displayAge(){
        return 2023-birthyear;
    }
    float displayGPA(float marks){
        if(marks>80) return grade=4.00;
        else if(marks>70) return grade=3.50;
        else if(marks>60) return grade=3.00;
        else if(marks>50) return grade=2.50;
        else if(marks>40) return grade=2.00;
        else  return grade=0.00;
    }
    void willGraduate(){
        if(grade==0)  cout << "Fail" << endl;
        else  cout << "Pass"  << endl;
    }
    float updatedGPA(float marks){
        marks=marks+(marks*0.1);
        return displayGPA( marks);

    }
    void printTranscript(){
        cout << f_name << " " << l_name << endl;
        cout << ID << endl;
        cout << displayAge() << endl;
        cout << updatedGPA(marks) << endl;
    }


};

int main(){

    Student Aimaan;
    Aimaan.setDetails("Aimaan","Ahmed",210041204,2002,"CSE 4302",70);
    Aimaan.printTranscript();

}
