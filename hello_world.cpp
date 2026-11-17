# include<iostream>
using namespace std;

class Animal{
public:
string name;

Animal(string n){
    name = n;
}

void display(){
    cout<<"Name of Animal"<< name << endl;
}

};
int main(){
    Animal a("dog");
    a.display();
}