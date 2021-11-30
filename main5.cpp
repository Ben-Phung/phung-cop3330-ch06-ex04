/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ben Phung
 */

#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

class Name_value {
public:
  string name;
  int val;
  Name_value(string n, int v) : name(n), val(v){}
};

int main() {
  
  vector<Name_value> list;
  string n = "";
  int v;

  while(n != "NoName" && v != 0)
  {
    cout << "Enter name and value: ";
    cin >> n >> v;
    for (int i = 0; i < list.size(); i++) 
    {
      if (n == list[i].name)
      {
        cout << "Enter unique names.";
        exit(0);
      }
    }
    list.push_back(Name_value(n,v));
	}

	for (int i = 0; i < list.size(); i++)
  {
    cout << "(" << list[i].name << "," << list[i].val << ")\n";
  }
}