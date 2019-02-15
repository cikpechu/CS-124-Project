//
// Created by cikpechu on 2/15/2019.
//

#ifndef MYPROJECT2_BANKCLIENTS_H
#define MYPROJECT2_BANKCLIENTS_H

#include <string>
#include <vector>
using namespace std;

class BankClients{
private:
    int serial_no;
    int age;
    string job;
    string marital_status;
    string education;
    string credit;

public:
    /*
     * Constructors
     */
    BankClients();
    BankClients(int serial_no, int age, string job, string marital_status, string education, string credit);

    /*
     * Getters for the first 6 columns of Bank clients dataset.
     */
    int getSerial_No() const;
    int getAge() const;
    string getJob() const;
    string getMarital_status() const;
    string getEducation() const;
    string getCredit() const;
    int getNumberOfClientsWithTertiary ();

    /*
     * Setters
     */
    void setSerial_No(int serial_no);
    void setAge(int age);
    void setJob(string job);
    void setMarital_status(string marital_status);
    void setEducation(string education);
    void setCredit(string credit);
    void setNumberOfClientsWithTertiary (int num_client_tertiary);

    /*
     * Overloaded Operators
     */
    friend ostream& operator << (ostream& outs, const BankClients &client);
};

// Function that reads a file into vector of BankClients
void readBankClientsFromFile(string filename, vector<BankClients> &BankClients);

// Function to calculate the number of clients with the indicated education level
int calcNumOfClientsWithTertiary (string educationLevel, vector<BankClients> & bankClients);

#endif //MYPROJECT2_BANKCLIENTS_H
