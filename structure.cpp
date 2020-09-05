#include<bits/stdc++.h>

using namespace std;

struct st
{
    string id;
    string name;
    double mid;
    double fin;
    double assignment;
    double ct;
    double atten;
    string grd;
    double total=0;

};

int main()
{
    int n;
    cout<<"Enter Students Number: ";
    cin>>n;

    struct st student[n];

    for(int i=0; i<n; ++i)
    {
        cout<<"Enter Name: ";
        cin>>student[i].name;
        cout<<"Enter id: ";
        cin>>student[i].id;
        cout<<"Enter mid number: ";
        cin>>student[i].mid;
        if(student[i].mid>30)
        {
            while(true)
            {
                cout<<"invalid number try again! "<<endl;
                cout<<"Enter mid number: ";
                cin>>student[i].mid;
                if(student[i].mid<=30)
                    break;
            }
        }

        student[i].total+=student[i].mid;
        cout<<"Enter Final Number: ";
        cin>>student[i].fin;
        if(student[i].fin>40)
        {
            while(true)
            {
                cout<<"invalid number try again! "<<endl;
                cout<<"Enter final number: ";
                cin>>student[i].fin;
                if(student[i].fin<=40)
                    break;
            }
        }
        student[i].total+=student[i].fin;
        double assignment=0;
        cout<<"Enter assignment 1: ";
        cin>>student[i].assignment;
        if(student[i].assignment>10)
        {
            while(true)
            {
                cout<<"invalid number try again! "<<endl;
                cout<<"Enter assignment number: ";
                cin>>student[i].assignment;
                if(student[i].assignment<=10)
                    break;
            }
        }
        assignment+=student[i].assignment;
        cout<<"Enter assignment 2: ";
        cin>>student[i].assignment;
        if(student[i].assignment>10)
        {
            while(true)
            {
                cout<<"invalid number try again! "<<endl;
                cout<<"Enter assignment number: ";
                cin>>student[i].assignment;
                if(student[i].assignment<=10)
                    break;
            }
        }
        assignment+=student[i].assignment;
        student[i].total+=(assignment/2);
        student[i].assignment=(assignment/2);
        double ct=0;
        cout<<"Enter ct 1: ";
        cin>>student[i].ct;
        if(student[i].ct>10)
        {

            while(true)
            {
                cout<<"invalid number try again! "<<endl;
                cout<<"Enter ct number: ";
                cin>>student[i].ct;
                if(student[i].ct<=10)
                    break;
            }
        }
        ct+=student[i].ct;
        cout<<"Enter ct 2: ";
        cin>>student[i].ct;
        if(student[i].ct>10)
        {

            while(true)
            {
                cout<<"invalid number try again! "<<endl;
                cout<<"Enter ct number: ";
                cin>>student[i].ct;
                if(student[i].ct<=10)
                    break;
            }
        }
        ct+=student[i].ct;
        cout<<"Enter ct 3: ";
        cin>>student[i].ct;
        if(student[i].ct>10)
        {

            while(true)
            {
                cout<<"invalid number try again! "<<endl;
                cout<<"Enter ct number: ";
                cin>>student[i].ct;
                if(student[i].ct<=30)
                    break;
            }
        }
        ct+=student[i].ct;
        student[i].total+=(ct/3);
        student[i].ct=(ct/3);

        cout<<"Enter attendance : ";
        cin>>student[i].atten;
        if(student[i].atten>10)
        {

            while(true)
            {
                cout<<"invalid number try again! "<<endl;
                cout<<"Enter attendance number: ";
                cin>>student[i].atten;
                if(student[i].atten<=10)
                    break;
            }
        }
        student[i].total+=student[i].atten;


        double total = round(student[i].total);

        student[i].total = total;


        if(total>=80)
            student[i].grd = "A+";
        else if(total>=75)
            student[i].grd = "A";
        else if(total>=70)
            student[i].grd = "A-";
        else if(total>=65)
            student[i].grd = "B+";
        else if(total>=60)
            student[i].grd = "B";
        else if(total>=55)
            student[i].grd = "B-";
        else if(total>=50)
            student[i].grd = "D";
        else if(total>=40)
            student[i].grd = "C";
        else
            student[i].grd = "F";
    }

    cout<<"calculation done!"<<endl;

    while(true)
    {
        int count=0;
        cout<<"Enter Search id: (enter 0 for exit)";
        string id;
        cin>>id;
        if(id=="0")
            break;

        for(int i=0; i<n; ++i)
        {

            if(student[i].id==id)
            {
                count++;
                cout<<".....student info......"<<endl;
                cout<<"Name : "<<student[i].name<<endl;
                cout<<"ID : "<<student[i].id<<endl;
                cout<<"Mid : "<<student[i].mid<<endl;
                cout<<"Final : "<<student[i].fin<<endl;
                cout<<"Assignment : "<<student[i].assignment<<endl;
                cout<<"Class test : "<<student[i].ct<<endl;
                cout<<"Attendance : "<<student[i].atten<<endl;
                cout<<"Total : "<<student[i].total<<endl;
                cout<<"Grade : "<<student[i].grd<<endl;

            }
            if(count==0)
            {
                cout<<"invalid id try again!"<<endl;
            }
        }
    }
    return 0;
}
