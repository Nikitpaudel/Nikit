#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int facebook, streaming, fast, voicepack, suich;
    cout << "\tNAMASTE NEPALTELECOM\n\n";
    top:
    cout << "1). facebook data packs.\n2). streaming data packs.\n3). 4G data packs.\n4). voice packs.\n";
    cin >> suich;
    
    switch (suich)
    {
    case 1:
    {
        cout << "1). 100mb at rs 10\n";
        cout << "2). 500mb at rs 20\n";
        cin >> facebook;

        if (facebook==1)
        {
            cout<<"100mb at rs 10 is sucessfully activated at rs 10.\n"; 
        }   
        else if(facebook==2)
        {
            cout<<"500mb at rs 20 is sucessfully activated at rs 20.\n";
        }
        else
        {
             goto top;cout<<"invalid";
        }
        
        break;
    }
    case 2:
    {
        cout<<"1). 200mb at rs 12.\n";
        cout<<"2). 400mb at rs 18.\n";
        cin>>streaming;

        if (streaming==1)
        {
            cout<<"200mb at rs 12 is sucessfully activated at rs 12.\n";
        }
        else if(streaming==2)
        {
            cout<<"400mb at rs 18 is sucessfully activated at rs 18.\n";
        }
        else
        {
            cout<<"invalid selection\n";
        }
       break;
    }
    case 3:
    {
        cout<<"1). 1GB at rs 33.23\n";
        cout<<"2). 2gb at rs 50\n";
        cin>>fast;

        if(fast==1)
        {
            cout<<"1GB at rs 33.23 is sucessfully activated at rs 33.32";
        }
        else if(fast==2)
        {
            cout<<"2GB at rs 50 is sucessfully activated at rs 50 \nthank you for subscribing 4G data packs";
        }
        else
        {
            cout<<"invalid selection\n";
        }
       break;
    }
    case 4:
    {
        cout<<"1). 100min at rs 10\n";
        cout<<"2). unlimited min at rs 20\n";
        cin>>voicepack;

        if (voicepack==1)
        {
            cout<<"100 min at rs 10 is sucessfully activated at rs 10 enjoy for data surfing\n";

        }
        else if(voicepack==2)
        {
            cout<<"unlimited call at rs 20 is sucessfully activated at rs 20\n";
        }
        else
        {
            cout<<"invalid selection\n";
        }
       break;
    }
   default :
    {
        cout<<"invalid selection, please try again\n";
    }
}
	
}


