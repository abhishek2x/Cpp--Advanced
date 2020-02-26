// Concatinating two Strings using operator overloading
#include <iostream>
#include <string.h>
using namespace std;

class OverString{
    private:
        char str[100];

    public:
        void readString(){
            cout << "Enter a String : ";
            cin >> str;
        }
        void display(){
            cout << "\n\nFINAL STRING = " << str;
        }
        // Function is returning an Object 
            // containing Concatinated String
        OverString operator + (OverString S){
            OverString FINAL;
            strcpy(FINAL.str, str);
            strcat(FINAL.str, " ");
            strcat(FINAL.str, S.str);
            return FINAL;
        }
};

int main(){
    OverString s1;
    OverString s2;
    OverString s3;

    s1.readString();
    s2.readString();

    s3 = s1 + s2;

    s3.display();

    return 0;
}