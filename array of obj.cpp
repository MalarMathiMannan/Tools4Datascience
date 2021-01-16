#include<iostream>
using namespace std;

class Details
{
    public:
    string Name;
    int RollNo;
    int Age;
    float Mark1,Mark2,Mark3;

void inputs()
{
    cout<<"Enter student name";
    cin>>Name;
    cout<<"What is your roll no?";
    cin>>RollNo;
    cout<<"How old are you?";
    cin>>Age;
    cout<<"Can you please report your marks?";
    cin>>Mark1>>Mark2>>Mark3;
}
void info()
{
    cout<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"THE STUDENT'S BIO-DATA IS REPORTED AS FOLLOWS"<<endl;
    cout<<"NAME:"<<Name<<endl;
    cout<<"ROLL NUMBER:"<<RollNo<<endl;
    cout<<"AGE:"<<Age<<endl;
    cout<<"Mark1:"<<Mark1<<endl;
    cout<<"Mark2:"<<Mark2<<endl;
    cout<<"Mark3:"<<Mark3<<endl;

    cout<<"THE DETAILS HAVE BEEN UPDATED"<<endl;

}
};

int main()
{

    int n;
    cout<<"Enter the class strength:";
    cin>>n;
    Details O[n];
    for(n=1;n<=n;n++)
    {
    O[n].inputs();
    O[n].info();
    }
    return 0;
}
