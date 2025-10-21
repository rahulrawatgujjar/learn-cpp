// Take input for string:
  // cin only take input till first space
  // so getline is used


# include<iostream>
using namespace std;
int main()
{
  string name;
  cout<<"Enter your name: ";
  getline(cin,name);


  cout<<"Name: "<<name<<endl;

  return 0;
}

/*
Output:


Enter your name: Rahul Rawat
Name: Rahul Rawat
*/