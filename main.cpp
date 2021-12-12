// A C++ program to illustrate Caesar Cipher Technique
#include <iostream>
using namespace std;

// This function receives text and shift and
// returns the encrypted text
string encryption(string text, int key)
{
    string ciphertext = "";

    // traverse text
    for (int i=0;i<text.length();i++)
    {
        // apply transformation to each character
        // Encrypt Uppercase letters
        if (isupper(text[i]))
            ciphertext += char(int(text[i]+key-65)%26 +65);

    // Encrypt Lowercase letters
    	else
        	ciphertext += char(int(text[i]+key-97)%26 +97);
    }

    // Return the resulting string
    return ciphertext;
}


string decryption(string ciphertext, int key)
{
    string plaintext = "";

    // traverse text
    for (int i=0;i<ciphertext.length();i++)
    {
        // apply transformation to each character
        // Encrypt Uppercase letters
        if (isupper(ciphertext[i]))
            plaintext += char(int(ciphertext[i]-key-65)%26 +65);

        // Encrypt Lowercase letters
        else
            plaintext += char(int(ciphertext[i]-key-97)%26 +97);
    }

    // Return the resulting string
    return plaintext;
}

// Driver program to test the above function
int main()
{
    string text;
    int key;
    short option = 1;
    while(option == 1 || option == 2)
    {
        system("color 3");
        cout<<"Option:\n\t1-Encryption\n\t2-Decryption\n\t3-Exit"<<endl;
        cout<<"Choose one option(1 , 2 or 3): ";
        cin>>option;
        if(option == 1)
        {
            system("cls");
            system("color 6");
            cout<<"\t\t\t\t(Encryption)"<<endl;
            cout<<"Enter the key number: "<<endl<<">>";
            cin>>key;
            cout<<"Enter the plain text: "<<endl<<">>";
            cin>>text;
            cout<<endl<<endl<<"**************************************************"<<endl
                            <<"__________________________________________________"<<endl;
            cout<<"the key number is: "<<key<<endl;
            cout<<"the plain text is: "<<text<<endl;
            cout<<"the cipher text is: "<<encryption(text,key)<<endl;
            cout<<"__________________________________________________"<<endl
                <<"**************************************************"<<endl<<endl<<endl;
        }

        else if(option == 2)
        {
            system("cls");
            system("color a");
            cout<<"\t\t\t\t(Decryption)"<<endl;
            cout<<"Enter the key number: "<<endl<<">>";
            cin>>key;
            cout<<"Enter the Cipher text: "<<endl<<">>";
            cin>>text;
            cout<<endl<<endl<<"**************************************************"<<endl
                            <<"__________________________________________________"<<endl;
            cout<<"the key is: "<<key<<endl;
            cout<<"the cipher text is: "<<text<<endl;
            cout<<"the plain text is: "<<decryption(text , key)<<endl;
            cout<<"__________________________________________________"<<endl
                <<"**************************************************"<<endl<<endl<<endl;
        }
    }

    return 0;
}
