#include<iostream>
using namespace std;

 string name;
 int nAdidas, nPuma, nNB,nCompass, nNike;
 int hAdidas =300, hNB =250, hPuma=150, hNike=350;

 void input ()
 {
    cout << "masukan jumlah Adidas=";
    cin >> nAdidas;

    cout<<"masukan jumlah Puma =";
    cin >> nPuma;

    cout<<"masukan jumlah nBN=";
    cin>> nNB;

    cout << " masukan jumlah Nike=";
    cin>> nNike;
 }

 int totalharga()
 {
    return (nAdidas*hAdidas)+(nPuma*hPuma)+(nNB*hNB)+(nNike*hNike);
 }

 void display()
 {
    cout << endl;
    cout <<"=========="<<endl;
    cout<<endl;
    cout<<"jumlah puma="<<nPuma <<endl;
    cout<<"jumlahadidas="<<nAdidas<<endl;
    cout<<endl;
    cout<<"total harga = Rp."<< totalharga()<< endl;
 }

 int main()
 {
    input();
    display();
 }