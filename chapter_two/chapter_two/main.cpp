//
//  main.cpp
//  chapter_two
//
//  Created by Akin Mason-Hogans on 8/27/19.
//  Copyright © 2019 akin. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

struct Vector {
    float x, y, z;
};

struct Player {
    string name;
    int hp;
    Vector position;
};

int main() {
    const int kNumLives = 5;
    
    //primitive types
    char c = 'x';
    short s = 5;
    int i = 5;
    long l = 5;
    float f = 5;
    double d = 8;
    bool b = true;
    auto a = i + f; //assigns a type for you
    
    enum weapon {
        sword = 0,
        knife,
        axe,
        mace,
        numberOfWeaponTypes,
        defaultWeapon = mace
    }; // Note the semicolon at the end
    
    enum isAlive : bool {
        alive = true,
        dead = false
    };
    
    string name;
    int goldPieces;
    float hp;
    name = "William";
    goldPieces = 322;
    hp = 75.5f;
    cout << "Character " << name << " has " << hp << " hp and " << goldPieces << " gold.";
    
    int answer = 277 + 5 * 4 / 2 + 20;
    answer += 15;
    answer++;
    
    Vector v;
    v.x = 20;
    v.y = 30;
    v.z = 40;
    cout << "A 3-space vector at " << v.x << ", " << v.y << ", " << v.z << endl;
    
    Player me;
    me.name = "William";
    me.hp = 100;
    me.position.x = me.position.y = me.position.z = 0;
    Player* ptrMe; //declairing a pointer to a Player object
    ptrMe = &me; //LINKAGE
    
    ptrMe->hp -=33; // reduced the player's hp by 33
    ptrMe->name = "John"; //changed his name to John
    
    cout << "What is your age?" << endl;
    int age;
    cin >> age;
    
    char character = 'A';
    int integer = 1;
    printf("integer %d, character %c\n", integer, character);
}
