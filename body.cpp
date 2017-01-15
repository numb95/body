#include <iostream>
using namespace std;
class body{
        public:
            char head[10];
            char tongue[10];
};
int main(){
    body person;
    cout << "Enter your head color: ";
    cin >> person.head;
    cout << "Enter your tongue color: ";
    cin >> person.tongue;

    if(person.head == "green" && person.tongue=="red"){

    cout << "Person is beheaded";

    }else{

    cout << "haaahhhh, You are STILL alivem we will kill you latter";
    }

}
