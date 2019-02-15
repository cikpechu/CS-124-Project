/*
 *  Created by Chika Ikpechukwu on 1/24/2019.
 *  Project 1
 *  CS 124 Section B
 */

#include "Node.h"
#include "Stack.h"
#include "Queue.h"
#include "BankClients.h"
#include <iomanip>
#include <iostream>
using namespace std;

int main() {

    // Create a vector of BankClients.
    //vector<BankClients> bankclients;
//
//    // Print out the header line
//    cout<<setw(10)<<"SERIAL NUMBER"<<setw(15)<<"AGE"<<setw(15)<<"JOB"<<setw(28)<<"MARITAL STATUS"<<setw(20)<<"EDUCATIONAL LEVEL"<<setw(20)<<"CREDIT"<<endl;
//
//    // Read in from Bank_Dataset.csv into banclients
//    readBankClientsFromFile("Bank_Dataset.csv", bankclients);
//
//    // Loop to add the number, age, job, marital status, education level and credit of every bankclient.
//    for (BankClients &BankClient : bankclients){
//        cout <<setw(10)<< BankClient.getSerial_No();
//        cout <<setw(20)<<BankClient.getAge();
//        cout << setw(20) <<BankClient.getJob();
//        cout << setw(20)<<BankClient.getMarital_status();
//        cout <<setw(20)<<BankClient.getEducation();
//        cout  <<setw(20)<<BankClient.getCredit()<< endl;
//    }
//    /*
//     * Print the number of bank clients with tertiary education
//     */
//    cout<<"The number of bank clients with tertiary education is "<<calcNumOfClientsWithTertiary("tertiary", bankclients)<<endl;
//
//    /*
//     * Print the number of bank clients with tertiary education
//     */
//    cout<<"The number of bank clients with secondary education is "<<calcNumOfClientsWithTertiary("secondary", bankclients)<< endl;
//
//    /*
//     * Print the number of bank clients with tertiary education
//     */
//    cout<<"The number of bank clients with primary education is "<<calcNumOfClientsWithTertiary("primary", bankclients)<<endl;
//
//    /*
//     *
//     *
//     */
    vector<BankClients> bankclients;
    readBankClientsFromFile("Bank_Dataset.csv", bankclients);
    Stack<BankClients> stackClient;

    for (int i = 0; i < 10; i++){

//        while (i < bankclients.size()) {
        stackClient.push(bankclients[i]);
    }

    vector<BankClients> dbankclients("Jakie Horton", "Votey 333");
    //bankclients.push_back(BankClients)
        stackClient.finder(dbankclients);
        //  ++i;
//        }
        //cout << BankClient << endl;


//        BankClient.getSerial_No();
//        BankClient.getAge();
//        BankClient.getJob();
//        BankClient.getMarital_status();
//        BankClient.getEducation();
//        BankClient.getCredit();

    while (!stackClient.isEmpty()) {
        cout << stackClient.pop() << endl;
    }
//    Stack<BankClients> stackClient;
//    int i = 0;
//    while (i < bankclients.size()) {
//        stackClient.push(bankclients[i]);
//        ++i;
//    }
//    while (stackClient.isEmpty()) {
//        cout << stackClient.pop() << endl;
//    }
//    vector<Lecturer> lecturers;
//    readLecturersFromFile("../CS_Lecturers.csv", lecturers);
//    for (Lecturer &lec : lecturers) {
//        cout << lec << endl;
    Stack<int> stack1;
    stack1.push(36);
    stack1.push(9);
    stack1.push(4);
    stack1.push(5);

//    Stack<BankClients> stackClient;
//    int i = 0;
//    while (i < bankclients.size()) {
//        stackClient.push(bankclients[i]);
//        ++i;
//    }
//    while (stackClient.isEmpty()) {
//        cout << stackClient.pop() << endl;
//    }
    Queue<int> queue1;
    queue1.push(1);
    queue1.push(2);
    queue1.push(3);
    queue1.push(4);
    while (!stack1.isEmpty()) {
        cout << stack1.pop() << endl;
    }

    while (!queue1.isEmpty()) {
        cout << queue1.pop() << endl;
    }
//    int number = 666;
//    while (!stack1.isEmpty()) {
//        cout << stack1.pop() << endl;
//        number += 66;
//        stack1.push(number);
//        cout << stack1.pop() << endl;
//    }

    return 0;
}