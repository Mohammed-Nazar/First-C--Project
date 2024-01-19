#include <iostream>

using namespace std;

int main()
{
    cout << "      M           M\n" ;
    cout << "     M M         M M\n" ;
    cout << "    M   M       M   M\n" ;
    cout << "   M     M     M     M\n" ;
    cout << "  M       M   M       M\n" ;
    cout << " M         M M         M\n" ;
    cout << "M           M           M\n" ;

    cout << "\n\n";

    cout << "\tZZZZZZZZZZZZ\n";
    cout << "\t          Z\n";
    cout << "\t         Z\n";
    cout << "\t        Z\n";
    cout << "\t       Z\n";
    cout << "\t      Z\n";
    cout << "\t     Z\n";
    cout << "\t    Z\n";
    cout << "\t   Z\n";
    cout << "\t  Z\n";
    cout << "\t Z\n";
    cout << "\tZZZZZZZZZZZZ\n\n\n";

    // declare Variable
    string name, whatDoYouLike, place;
    int age;

    ///////

    // name declare
    cout <<  "What is Your Name?\n";
    cout << "Answer: ";
    cin >> name;
    cout << "\n";


      // place declare
    cout <<  "where are you from?\n";
    cout << "Answer: ";
    cin >> place;
    cout << "\n";

      // age declare
    cout <<  "How old are you?\n";
    cout << "Answer: ";
    cin >> age;
    cout << "\n";

           // whatDoYouLike declare
    cout <<  "What do you like?\n";
    cout << "Answer: ";
    cin.ignore();
    getline(cin, whatDoYouLike);
    cout << "\n";




    cout << "Text: \nHello My name is "<< name << ", I am " << age << " Years old " << " ,I live in " << place << ", and I like " << whatDoYouLike << ".\n\n" ;
    

    return 0;
}
