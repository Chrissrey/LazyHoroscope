//Authors:Chris Rey Almaraz
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
 string firstname;
 string lastname;
 int lucky;
  //get user input
 cout<<"Whats your firstname?\n";
 cin>>firstname;

 cout<<"What is your lastname?\n";
 cin>>lastname;
  //tell fortune
lucky= firstname.length();
cout<<"Welcome, "<<firstname[0]<<"."<<lastname[0]<<"., here is your fortune...\n";
cout<<" your lucky number is "<<lucky<< endl;

  return 0;
}
