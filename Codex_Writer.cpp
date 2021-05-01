#include <iostream>
using namespace std;



void menu()
{
    cout<<"1. New Message.\n2. Translate Existing Codex."<<endl;
}
void New()
{
    int letCount;
    string message,a="7e",b="6k",c="4r",d="2a",e="7g",f="0p",g="8k",h="5f",i="0a",j="1n",k="9q",l="6y",m="8x",n="3q",o="5d",p="4z",q="9l",r="5s",s="4w",t="0b",u="5r",v="2k",w="1i",x="8t",y="2c",z="4y";
    bool ans=0;
    while(ans==0){
        cout<<"Please enter your new message. Be sure to only use LOWER CASE letters and dashes."<<endl;
        cin>>message;
        cout<<"How many characters are in your message?"<<endl;
        cin>>letCount;
        cout<<"Confirm, is your message '"<<message<<"'? 1 for yes, 0 for no."<<endl;
        cin>>ans;
    }
    for(int counter=0;counter<=(letCount-1);counter++)
    {
        switch(message[counter])
    {
        case 'a':
            cout<<a;
            break;
        case 'b':
            cout<<b;
            break;
        case 'c':
            cout<<c;
            break;
        case 'd':
            cout<<d;
            break;
        case 'e':
            cout<<e;
            break;
        case 'f':
            cout<<f;
            break;
        case 'g':
            cout<<g;
            break;
        case 'h':
            cout<<h;
            break;
        case 'i':
            cout<<i;
            break;
        case 'j':
            cout<<j;
            break;
        case 'k':
            cout<<k;
            break;
        case 'l':
            cout<<l;
            break;
        case 'm':
            cout<<m;
            break;
        case 'n':
            cout<<n;
            break;
        case 'o':
            cout<<o;
            break;
        case 'p':
            cout<<p;
            break;
        case 'q':
            cout<<q;
            break;
        case 'r':
            cout<<r;
            break;
        case 's':
            cout<<s;
            break;
        case 't':
            cout<<t;
            break;
        case 'u':
            cout<<u;
            break;
        case 'v':
            cout<<v;
            break;
        case 'w':
            cout<<w;
            break;
        case 'x':
            cout<<x;
            break;
        case 'y':
            cout<<y;
            break;
        case 'z':
            cout<<z;
            break;
        case '-':
            cout<<"-";
            break;
        default:
            cout<<"\nError: Invalid Character. The "<<counter+1<<"th character of your message is not a lowercase letter or an underscore.\n";
            break;
    }
    }
}
void Translate()
{
    string message;
    cout<<"Please enter the Codex that you wish to translate back into English Alphabet."<<endl;
    cin>>message;
    int letcount;
    cout<<"How many characters are in the Codex you have?"<<endl;
    cin>>letcount;
    int value=0;
    cout<<"The Codex translates to:"<<endl;
    for(int counter=0;counter<=letcount;counter++){
        bool spctf=0;//true or false variable to track if message[counter] is a -. If it is, the program will skip the second two steps in the loop, as otherwise it would break.
        switch(message[counter])
        {
            case '1':
                value++;
                break;
            case '2':
                value+=2;
                break;
            case '3':
                value+=3;
                break;
            case '4':
                value+=4;
                break;
            case '5':
                value+=5;
                break;
            case '6':
                value+=6;
                break;
            case '7':
                value+=7;
                break;
            case '8':
                value+=8;
                break;
            case '9':
                value+=9;
                break;
            case '0':
                break;
            case '-':
                cout<<"-";
                spctf=1;
                break;
            }
        if(spctf==0)
        {
            counter++;
            switch(message[counter])
            {
                case 'a':
                    value++;
                    break;
                case 'b':
                    value+=2;
                    break;
                case 'c':
                    value+=3;
                    break;
                case 'd':
                    value+=4;
                    break;
                case 'e':
                    value+=5;
                    break;
                case 'f':
                    value+=6;
                    break;
                case 'g':
                    value+=7;
                    break;
                case 'h':
                    value+=8;
                    break;
                case 'i':
                    value+=9;
                    break;
                case 'j':
                    value+=10;
                    break;
                case 'k':
                    value+=11;
                    break;
                case 'l':
                    value+=12;
                    break;
                case 'm':
                    value+=13;
                    break;
                case 'n':
                    value+=14;
                    break;
                case 'o':
                    value+=15;
                    break;
                case 'p':
                    value+=16;
                    break;
                case 'q':
                    value+=17;
                    break;
                case 'r':
                    value+=18;
                    break;
                case 's':
                    value+=19;
                    break;
                case 't':
                    value+=20;
                    break;
                case 'u':
                    value+=21;
                    break;
                case 'v':
                    value+=22;
                    break;
                case 'w':
                    value+=23;
                    break;
                case 'x':
                    value+=24;
                    break;
                case 'y':
                    value+=25;
                    break;
                case 'z':
                    value+=26;
                    break;
            }
            switch(value)
        {
                case 12:
                    cout<<("a");
                    break;
                case 17:
                    cout<<("b");
                    break;
                case 22:
                    cout<<("c");
                    break;
                case 3:
                    cout<<("d");
                    break;
                case 14:
                    cout<<("e");
                    break;
                case 16:
                    cout<<("f");
                    break;
                case 19:
                    cout<<("g");
                    break;
                case 11:
                    cout<<("h");
                    break;
                case 1:
                    cout<<("i");
                    break;
                case 15:
                    cout<<("j");
                    break;
                case 26:
                    cout<<("k");
                    break;
                case 31:
                    cout<<("l");
                    break;
                case 32:
                    cout<<("m");
                    break;
                case 20:
                    cout<<("n");
                    break;
                case 9:
                    cout<<("o");
                    break;
                case 30:
                    cout<<("p");
                    break;
                case 21:
                    cout<<("q");
                    break;
                case 24:
                    cout<<("r");
                    break;
                case 27:
                    cout<<("s");
                    break;
                case 2:
                    cout<<("t");
                    break;
                case 23:
                    cout<<("u");
                    break;
                case 13:
                    cout<<("v");
                    break;
                case 10:
                    cout<<("w");
                    break;
                case 28:
                    cout<<("x");
                    break;
                case 5:
                    cout<<("y");
                    break;
                case 29:
                    cout<<("z");
                    break;
        }

        }
        value=0;


    }
}
int main()
{
    bool again;
    int ans;
    cout << "Welcome to the Codex Writer Wizard.\nIn this wizard, you can take a word or phrase written in any language using the English Alphabet and translate it into a cryptic message.\nThis program does not encode Arabic numbers, but you can still write them out using letters." << endl;
    cout << "Also note that you can use only Lower Case letters. Use dashes in place of spaces.\nWhen you have completed your first encoded message, be sure to write down the Codex. If you ever forget the original message, simply reenter the Codex for translation back into English Alphabet."<<endl;
    cout << "All messages in this Codex follow this pattern: ArabicNumber EnglishLetter. For example, 7q could be a piece of this Code."<<endl;
    cout << "First, select whether you'd like to encode a new message, or translate and existing Codex."<<endl;
    do{
        do{
        menu();
        cin>> ans;
        }while(ans!=1&&ans!=2);
        if(ans==1)
            New();
        else
            Translate();
        do{
            cout<<"\n\nThank you for using the Codex Writer Wizard. You can now exit the program by entering 0, or run it again by entering 1."<<endl;
            cin>>again;
        }while(again<0||again>1);
    }while(again==1);
    return 0;
}
