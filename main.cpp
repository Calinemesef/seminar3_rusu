#include "Rental.h"
#include <iostream>
#include <cassert>
#include "LKW.h"

using namespace std;

int main()
{
    Rental r;
    Auto a1(1," auto1","modell1");
    Auto a2(2, "auto2", "modell2");
    Auto a3(3, "auto3", "modell3");

    PKW p1(4,"pkw1","modell1","radio");
    LKW l1(5,"lkw1","modelnou",1500,225);

    Kunde k1(1, "Kund1");
    Kunde k2(2, "Kund2");

    r.add_auto(a1);
    r.add_auto(a2);
    r.add_auto(a3);
    assert(r.size_auto() == 3);
    cout<<"Add auto merge"<<endl;

    r.add_auto(p1);             /// ?????????????????????????????????
    r.add_auto(l1);             /// ?????????????????????????????????
    assert(r.size_auto() == 5);
    cout<<"Add PKW si LKW merge"<<endl;


    r.add_client(k1);
    r.add_client(k2);
    assert(r.size_clients() == 2);
    cout<<"Add clients merge"<<endl;

    r.update_client(k1, "nume nou");
    assert(k1.get_name() == "nume nou");
    cout<<"Update client merge"<<endl;

    r.remove_auto(a1);
    r.remove_auto(a2);
    assert(r.size_auto() == 3);
    cout<<"Remove auto merge"<<endl;

    r.delete_client(k1);
    r.delete_client(k2);
    assert(r.size_clients() == 0);
    cout<<"Remove client merge"<<endl;


    cout << "tests over";
}