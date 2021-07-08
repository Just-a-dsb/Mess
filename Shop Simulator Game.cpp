/* 
    Shop Simulator Game
    v1.0
    2021.7.8 by Just_a_dsb
*/
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <cstdio>
using namespace std;
//Date
struct date {
    int year, month, day;
    date() {
        year = 2021;
        month = 7;
        day = 1;
    }
};
ostream &operator << (ostream &out, date _date) {
    out << _date.year << "." << _date.month << "." << _date.day;
    return out;
}
//Ware
struct ware {
    string name;
    int value, id;
};
//Game Constant
const double pi = acos(-1.0);
//game Variable
map<string, int> warehouse;
long long money;
date currentDate;
//Game Functions
int main() {
    system("title Shop Simulator");
    return 0;
}