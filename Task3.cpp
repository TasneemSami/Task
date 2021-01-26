#include<bits/stdc++.h>
using namespace std;
int main()
{
    string course[5]= {"English Grammar", "Mathematics","Physics","Chemistry","Biology"};
    string teacher[5] {"John Smith", "Lara Gilbert", "Johanna Kabir", "Danniel Robertson", "Larry Cooper"};
    char ch;
    int i,a[10][10],j;
    while(1)
    {
        cout<<"\n\nEnter character A or B or C\nA. Create Routine\nB. Show Routine\nC. List Courses with Teachers Name\n";
        cin>>ch;
        if(ch=='A')
        {
            for(i=0; i<5; i++)
            {
                cout<<i+1<<"."<<course[i]<<endl;
            }
            for(i=0; i<=3; i++)
                for(j=0; j<3; j++)
                {
                    cin>>a[i][j];
                }
        }
        else if(ch=='B')
        {
            for(i=0; i<=3; i++)
                for(j=0; j<3; j++)
                {
                    if(j==2)
                        cout<<course[a[i][j]]<<endl;
                    else
                       cout<<a[i][j]<<" ";
                }
        }
        else if(ch=='C')
        {
             for(i=0;i<=4;i++)
             {
                 cout<<course[i]<<","<<teacher[i]<<endl;
             }
        }
    }


}



