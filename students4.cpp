#include<iostream>

using namespace std ;
void Studentdata()
{
    char name[15] ;
    int roll ;
    float per ;
    cout<<"\n\t name= ";
    cin>>name ;
    cout<<"\n\t Roll no.=" ;
    cin>>roll ;
    cout<<"\n\t percentage=" ;
    cin>>per ;
     char name;
    int roll ;
    float per;
    cout<<"\n\t name ="<<name ;
    cout<<"\n\t roll no="<<roll ;
    cout<<"\n\t percentage="<<per ;
}

int main()
{
    int n;
    cout<<"\n\t enter the no. of student's data to be fill ";
    cin>>n ;
    int i ;
    for (i = 1; i <n+1; i++)
    {
        cout<<"\n\tenter the details of student "<<i<<endl ;
        Studentdata();
    }
    

    return 0;
}
