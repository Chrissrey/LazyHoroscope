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
char firstint;
char lastint;
  //get user input
 cout<<"Whats your firstname?\n";
 cin>>firstname;
firstint= firstname[0];

 cout<<"What is your lastname?\n";
 cin>>lastname;
  //tell fortune
lucky= firstname.length();

cout<<"Welcome, "<<firstname[0]<<"."<<lastname[0]<<"., here is your fortune...\n";
cout<<" your lucky number is "<<lucky<< endl;

if (firstint=='a'||firstint=='e'||firstint=='i'||firstint=='o'||firstint=='u'||firstint=='A'||firstint=='E'||firstint=='I'||firstint=='O'||firstint=='U')
{	cout<<"you are destined to be famous.\n";
}
else 
{
       cout<<	"you should keep a low profile.\n";
}
int len=lastname.length();

 lastint = lastname[len-1];


if (lastint=='a'||lastint=='e'||lastint=='i'||lastint=='o'||lastint=='u'||lastint=='A'||lastint=='E'||lastint=='I'||lastint=='O'||lastint=='U')
{ cout<<"you have already met your true love.\n";}

cout<<"have a good day!\n";

return 0;
}
