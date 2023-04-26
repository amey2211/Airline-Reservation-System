#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void mainMenu();

class Management
{
    public:
        Management(){
            mainMenu();
        }
};

class Details
{
    public:
        static string name, gender;
        string add;
        int phoneNo, age;
        static int cId;
        char arr[100];

        void information()
        {
            cout<<"\nEnter the Passenger ID: ";
            cin>>cId;
            cout<<"\nName: ";
            cin>>name;
            cout<<"\nAge: ";
            cin>>age;
            cout<<"\nPermanent Address: ";
            cin>>add;
            cout<<"\nGender: ";
            cin>>gender;
            cout<<"\nYour details have been saved successfully!\n";
            cout<<"______________________________________________"<<endl<<endl;
        }
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
    public:
        static int choice;
        int choice1, back;
        static float charges;

        void flights()
        {
            string flightN[] = {"Dubai", "USA", "UK", "Germany", "Europe", "Australia"};

            for (int i = 0; i < 6; i++)
            {
                cout<<(i+1)<<". Flight to "<<flightN[i]<<endl;
            }

            cout<<"\n\t\tWelcome to the Airlines!"<<endl;
            cout<<"Select the country of which you want to book the flight: ";
            cin>>choice;
            cout<<endl;
            switch(choice)
            {
                case 1:
                    {
                        cout<<"_______________Welcome to Dubai Emirates_______________"<<endl;
                        cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                        cout<<"Following are the flights: \n"<<endl;

                        cout<<"1. DUB - 418"<<endl;
                        cout<<"\t18-04-2023 7.00AM 7hrs Rs. 15000"<<endl;
                        cout<<"2. DUB - 588"<<endl;
                        cout<<"\t19-04-2023 9.00AM 10hrs Rs. 12000"<<endl;
                        cout<<"3. DUB - 322"<<endl;
                        cout<<"\t20-04-2023 12.00AM 13hrs Rs. 16000"<<endl;

                        cout<<"\nSelect the flight you want to book: ";
                        cin>>choice1;
                        cout<<endl;

                        if(choice1 == 1)
                        {
                            charges = 15000;
                            cout<<"\nYou have successfully book the flight DUB - 418"<<endl;
                            cout<<"You can go back to the menu & take the ticket"<<endl;
                        }
                        else if(choice1 == 2)
                        {
                            charges = 12000;
                            cout<<"\nYou have successfully book the flight DUB - 588"<<endl;
                            cout<<"You can go back to the menu & take the ticket"<<endl;
                        }
                        else if(choice1 == 3)
                        {
                            charges = 16000;
                            cout<<"\nYou have successfully book the flight DUB - 322"<<endl;
                            cout<<"You can go back to the Main Menu & generate the ticket"<<endl;
                        }
                        else
                        {
                            cout<<"Invalid input, shifting to the previous menu."<<endl;
                            flights();
                        }
                        cout<<"\nPress any key to return to the main menu: ";
                        cin>>back;
                        if(back==1){
                            mainMenu();
                        }
                        else{
                        mainMenu();
                        }
                        break;
                    }

                    case 2:
                    {
                        cout<<"____________Welcome to USA Airways____________"<<endl;
                        cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                        cout<<"Following are the flights: \n"<<endl;

                        cout<<"1. USA - 277"<<endl;
                        cout<<"\t18-04-2023 8.00AM 6hrs Rs. 14000"<<endl;
                        cout<<"2. USA - 408"<<endl;
                        cout<<"\t19-04-2023 10.00AM 9hrs Rs. 13000"<<endl;
                        cout<<"3. USA - 152"<<endl;
                        cout<<"\t20-04-2023 13.00PM 12hrs Rs. 11000"<<endl;

                        cout<<"\nSelect the flight you want to book: ";
                        cin>>choice1;
                        cout<<endl;

                        if(choice1 == 1)
                        {
                            charges = 14000;
                            cout<<"\nYou have successfully book the flight USA - 277"<<endl;
                            cout<<"You can go back to the Main Menu & generate the ticket"<<endl;
                        }
                        else if(choice1 == 2)
                        {
                            charges = 13000;
                            cout<<"\nYou have successfully book the flight USA - 408"<<endl;
                            cout<<"You can go back to the Main Menu & generate the ticket"<<endl;
                        }
                        else if(choice1 == 3)
                        {
                            charges = 11000;
                            cout<<"\nYou have successfully book the flight USA - 152"<<endl;
                            cout<<"You can go back to the Main Menu & generate the ticket"<<endl;
                        }
                        else
                        {
                            cout<<"Invalid input, shifting to the previous menu."<<endl;
                            flights();
                        }
                        cout<<"\nPress any key to return to the main menu: ";
                        cin>>back;
                        if(back==1){
                            mainMenu();
                        }
                        else{
                        mainMenu();
                        }
                        break;
                    }

                    case 3:
                    {
                        cout<<"____________Welcome to UK Airlines____________"<<endl;
                        cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                        cout<<"Following are the flights\n"<<endl;

                        cout<<"1. UK - 411"<<endl;
                        cout<<"\t18-04-2023 9.00AM 7hrs Rs. 9000"<<endl;
                        cout<<"2. UK - 238"<<endl;
                        cout<<"\t19-04-2023 9.00AM 10hrs Rs. 12000"<<endl;

                        cout<<"\nSelect the flight you want to book: ";
                        cin>>choice1;

                        if(choice1==1)
                        {
                            charges = 9000;
                            cout<<"\nYou have successfully book the flight UK - 411"<<endl;
                            cout<<"You can go back to the Main Menu & generate the ticket"<<endl;
                        }
                        else if(choice1 == 2)
                        {
                            charges = 12000;
                            cout<<"\nYou have successfully book the flight UK - 238"<<endl;
                            cout<<"You can go back to the Main Menu & generate the ticket"<<endl;
                        }
                        else
                        {
                            cout<<"Invalid input, shifting to the previous menu."<<endl;
                            flights();
                        }
                        cout<<"\nPress any key to return to the main menu: ";
                        cin>>back;
                        if(back==1){
                            mainMenu();
                        }
                        else{
                        mainMenu();
                        }
                        break;
                    }

                    case 4:
                    {
                        cout<<"____________Welcome to German Airways____________"<<endl;
                        cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                        cout<<"Following are the flights\n"<<endl;

                        cout<<"1. GER - 221"<<endl;
                        cout<<"\t18-04-2023 10.00AM 7hrs Rs. 11000"<<endl;
                        cout<<"2. GER - 588"<<endl;
                        cout<<"\t19-04-2023 15.00PM 10hrs Rs. 12000"<<endl;

                        cout<<"\nSelect the flight you want to book: ";
                        cin>>choice1;

                        if(choice1==1)
                        {
                            charges = 11000;
                            cout<<"\nYou have successfully book the flight GER - 221"<<endl;
                            cout<<"You can go back to the menu & take the ticket"<<endl;
                        }
                        else if(choice1 == 2)
                        {
                            charges = 12000;
                            cout<<"\nYou have successfully book the flight GER - 588"<<endl;
                            cout<<"You can go back to the menu & take the ticket"<<endl;
                        }
                        else
                        {
                            cout<<"Invalid input, shifting to the previous menu."<<endl;
                            flights();
                        }
                        cout<<"\nPress any key to return to the main menu: ";
                        cin>>back;
                        if(back==1){
                            mainMenu();
                        }
                        else{
                        mainMenu();
                        }
                        break;
                    }

                    case 5:
                    {
                        cout<<"____________Welcome to European Airways____________"<<endl;
                        cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                        cout<<"Following are the flights\n"<<endl;

                        cout<<"1. EU - 200"<<endl;
                        cout<<"\t18-04-2023 17.00AM 7hrs Rs. 15000"<<endl;
                        cout<<"2. EU - 358"<<endl;
                        cout<<"\t19-04-2023 18.00PM 10hrs Rs. 12000"<<endl;

                        cout<<"\nSelect the flight you want to book: ";
                        cin>>choice1;

                        if(choice1==1)
                        {
                            charges = 15000;
                            cout<<"\nYou have successfully book the flight EU - 418"<<endl;
                            cout<<"You can go back to the menu & take the ticket"<<endl;
                        }
                        else if(choice1 == 2)
                        {
                            charges = 12000;
                            cout<<"\nYou have successfully book the flight EU - 358"<<endl;
                            cout<<"You can go back to the menu & take the ticket"<<endl;
                        }
                        else
                        {
                            cout<<"Invalid input, shifting to the previous menu."<<endl;
                            flights();
                        }
                        cout<<"\nPress any key to return to the main menu: ";
                        cin>>back;
                        if(back==1){
                            mainMenu();
                        }
                        else{
                        mainMenu();
                        }
                        break;
                    }

                    case 6:
                    {
                        cout<<"____________Welcome to Australian Airways____________\n"<<endl;
                        cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                        cout<<"Following are the flights\n"<<endl;

                        cout<<"1. AUS - 333"<<endl;
                        cout<<"\t18-04-2023 7.00AM 7hrs Rs. 11000"<<endl;
                        cout<<"2. AUS - 618"<<endl;
                        cout<<"\t19-04-2023 9.00AM 10hrs Rs. 14000"<<endl;

                        cout<<"\nSelect the flight you want to book: ";
                        cin>>choice1;

                        if(choice1==1)
                        {
                            charges = 11000;
                            cout<<"\nYou have successfully book the flight AUS - 333"<<endl;
                            cout<<"You can go back to the Main Menu & generate the ticket"<<endl;
                        }
                        else if(choice1 == 2)
                        {
                            charges = 14000;
                            cout<<"\nYou have successfully book the flight DUB - 618"<<endl;
                            cout<<"You can go back to the menu & take the ticket"<<endl;
                        }
                        else
                        {
                            cout<<"Invalid input, shifting to the previous menu."<<endl;
                            flights();
                        }
                        cout<<"\nPress any key to return to the main menu: ";
                        cin>>back;
                        if(back==1){
                            mainMenu();
                        }
                        else{
                        mainMenu();
                        }
                        break;
                    }
                    default:
                    {
                        cout<<"Invalid input, shifting you to the main menu.\n"<<endl;
                        mainMenu();
                        break;
                    }
            }
        }
};

float registration::charges;
int registration::choice;

class ticket : public registration, Details
{
    public:
        void Bill()
        {
            string destination = "";
            ofstream outf("records.txt");
            {
                outf<<"____________HIGHRISE AIRLINES____________"<<endl;
                outf<<"__________________Ticket_________________"<<endl;
                outf<<"_________________________________________"<<endl;

                outf<<"\n\tPassenger ID: "<<Details::cId<<endl;
                outf<<"\tName: "<<Details::name<<endl;
                outf<<"\tGender: "<<Details::gender<<endl;

                if(registration::choice == 1)
                {
                    destination = "Dubai";
                }
                else if(registration::choice == 2)
                {
                    destination = "USA";
                }
                else if(registration::choice == 3)
                {
                    destination = "UK";
                }
                else if(registration::choice == 4)
                {
                    destination = "Germany";
                }
                else if(registration::choice == 5)
                {
                    destination = "Europe";
                }
                else if(registration::choice == 6)
                {
                    destination = "Australia";
                }

                outf<<"\tDestination: \t\t"<<destination<<endl;
                outf<<"\tAmount: \t\t"<<registration::charges<<endl;
                outf<<"_________________________________________"<<endl;
            }
            outf.close();
        }
        void dispBill()
            {
                ifstream ifs("records.txt");
                {
                    if(!ifs)
                    {
                        cout<<"File Error!"<<endl;
                    }
                    while (!ifs.eof())
                    {
                        ifs.getline(arr, 100);
                        cout<<arr<<endl;
                    }
                }
                ifs.close();
            }
};

void mainMenu()
{
    int lchoice, schoice, back;

    Details d;
    registration r;
    ticket t;

    cout<<"\t               HIGHRISE AIRLINES"<<endl;
    cout<<"\t___________________Main Menu__________________"<<endl;
    cout<<"\t______________________________________________"<<endl;
    cout<<"\t\t             \t\t\t\t                \t|"<<endl;

    cout<<"\t|\t Press 1 for Passenger Details      \t|"<<endl;
    cout<<"\t|\t Press 2 for Flight Registration    \t|"<<endl;
    cout<<"\t|\t Press 3 for Booking Ticket         \t|"<<endl;
    cout<<"\t|\t Press 4 to Exit                    \t|"<<endl;
    cout<<"\t______________________________________________"<<endl<<endl;

    cout<<"Enter the choice: ";
    cin>>lchoice;
    cout<<endl;

    switch(lchoice){
        case 1:
        {
            cout<<"_______________Passenger Details________________\n"<<endl;
            d.information();
            cout<<"Press 1 to go back to Main Menu"<<endl;
            cin>>back;

            if(back == 1){
                mainMenu();
            }
            else{
                mainMenu();
            }
            break;
        }

        case 2:
        {
            cout<<"____________Flight Registration____________\n"<<endl;
            r.flights();
            break;
        }

        case 3:
        {
            cout<<"______TICKET CONFIRMATION______\n"<<endl;
            t.Bill();

            cout<<"Your ticket is printed, you can collect it.\n"<<endl;
            cout<<"Press 1 to display your ticket: ";
            cin>>back;

            if(back == 1){
                t.dispBill();
                cout<<"Press any key to go back to the main menu."<<endl;
                cin>>back;
                if(back==1){
                    mainMenu();
                }
                else{
                mainMenu();
                }
            }
            else{
                mainMenu();
            }
            break;
        }

        case 4:
        {
            cout<<"\n\t____________Thank you____________\n"<<endl;
            break;
        }

        default:
        {
            cout<<"Invalid input, please try again!\n"<<endl;
            mainMenu();
            break;
        }
    }
}

int main(){
    Management Mobj;
    return 0;
}