//
//  main.cpp
//  chapter_three
//
//  Created by Akin Mason-Hogans on 8/27/19
//  Using the book, "Learning C++ by Building Games with Unreal Engine 4 (2nd ed)"
//    by Sharan Volin
//  Copyright © 2019 akin. All rights reserved.
//

#include <iostream>
using namespace std;

enum Food {
    Fish,
    Bread,
    Apple,
    Orange
};

int main() {
    int x = 5;
    int y = 4;
    cout << "Is x equal to y? C++ says: " << (x == y) << endl;
    
    bool isHungry = true;
    if (isHungry) {
        cout << "Preparing snack.." << endl;
        cout << "Eating.." << endl;
    } else if (x == 5) {
        cout << "tf?" << endl;
    } else {
        cout << "I'm not hungry" << endl;
    }
    cout << "Sitting on the couch..." << endl;
    
    Food food = Bread;
    switch (food) {
        case Fish:
            cout << "I'm allergic" << endl;
            break;
        
        case Bread:
            cout << "Let's get this bread" << endl;
            break;
        
        case Apple:
            cout << "Keeps Doc away" << endl;
            break;
            
        default:
            cout << "Oranges are good ig idk";
            break;
    }
}
