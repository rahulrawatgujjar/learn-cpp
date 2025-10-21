// take input

#include<iostream>
using namespace std;
int main(){
  // integer
  int age;
  cout<<"Enter your age: ";
  cin>>age;

  // float
  float height;
  cout<<"Enter your height: ";
  cin>>height;

  // char
  char grade;
  cout<<"Enter you grade: ";
  cin>>grade;

  // string
  string name;
  cout<<"Enter your Name: ";
  cin>>name;


  // bool
  bool isPass;
  cout<<"Passed: ";
  cin>>isPass;


  // double
  double speed;
  cout<<"Enter your speed: ";
  cin>>speed;



  cout<<"Name: "<<name<<endl;
  cout<<"Age: "<<age<<endl;
  cout<<"Height: "<<height<<endl;
  cout<<"Grade: "<<grade<<endl;
  cout<<"Speed: "<<speed<<endl;
  cout<<"Passed: "<<isPass<<endl;

  return 0;
  
}

/*
Output:

Enter you grade: A
Enter your Name: Rahul
Passed: 1
Enter your speed: 143.4443352432523424
Name: Rahul
Age: 23
Height: 185.43
Grade: A
Speed: 143.444
Passed: 1

*/