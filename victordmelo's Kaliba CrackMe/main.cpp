/*
 * Keygen made for victordmelo's Kaliba CrackMe from Crackme.de
 * Executable Download: http://www.crackmes.de/users/victordmelo/kaliba_crackme/
 * Author: Adam L More
 * Date: 6/1/2015
 * OS: Windows
 * CrackMe Written in: C/C++
 */

#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

int main(int argc, char *argv[])
{
    srand (time(NULL));
    int val1 = rand()%999; //Random number serves as the first value in the key
    int val2 = ((((((val1<<2)+val1)*2)+0x7D)*2)+1-0x15+ 0x58);
    int val3 = (((val1*2) + 0x0FD)*2)+ 1 + val2 + 2;
    cout << val1 << "a" << val2 << "a" << val3 << endl; //Key format is %d%c%d%c%d
    system("PAUSE");
    return EXIT_SUCCESS;
}
