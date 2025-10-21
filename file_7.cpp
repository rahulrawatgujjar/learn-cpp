// learn about switch statement
  // Use when we have many discrete choices

#include<iostream>
using namespace std;
int main()
{
  int day;
  cout<<"Enter day number: ";
  cin>>day;
  
  switch(day){
    case 1:
    cout<<"Monday";
    break;
    
    case 2:
    cout<<"Tuesday";
    break;

    case 3:
    cout<<"Wednesday";
    break;
    
    default:
    cout<<"Find your self";
  }
  cout<<endl;

  return 0;
}

/*
Output:

Enter day number: 2
Tuesday

Enter day number: 5
Find your self
*/
