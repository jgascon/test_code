
// I always use standard and easy-to-understand techniques.

// I don't like to use fancy things that usually are difficult to understand.

#include <iostream>

using namespace std;


const int repeat_saying_times = 3;


void say_hello_world(int time) {

    //First Time:
    if (time == 0) {
        cout << "Hello World!" << endl;
    } else {
        //Rest of the times.
        cout << "Hello World again " << time << "!\n";
    } //if (time == 0)

} //void say_hello_world(int time)



int main() {

    for (int i=0; i<repeat_saying_times; i++) {
        say_hello_world(i);
    } //for (int i=0; i<repeat_saying_times; i++)

}; //int main()


// I also know how to program using design patterns (Look at my blog)
