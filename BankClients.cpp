/*
 *  Created by Chika Ikpechukwu on 1/24/2019.
 *  Project 1 - Bank Clients
 *  CS 124 Section B
 */

#include "BankClients.h"
#include <fstream>
#include <iomanip>

// Default constructor
BankClients::BankClients() {
    serial_no = 0;
    age = 55;
    job = "management";
    marital_status = "married";
    education = "tertiary";
    credit = "no";
}
// Non-default constructor
BankClients::BankClients(int serial_no, int age, string job, string marital_status, string education, string credit) {
    this->serial_no = serial_no;
    this->age = age;
    this->job = job;
    this->marital_status = marital_status;
    this->education = education;
    this->credit = credit;
}
// Implementing the class methods.
int BankClients::getSerial_No() const{
    return serial_no;
}
int BankClients::getAge() const{
    return age;
}

string BankClients::getJob() const{
    return job;
}
string BankClients::getMarital_status() const{
    return marital_status;
}
string BankClients::getEducation() const{
    return education;
}
string BankClients::getCredit() const{
    return credit;
}

void BankClients::setSerial_No(int serial_no){
    this->serial_no = serial_no;
}

void BankClients::setAge(int age){
    this->age = age;
}

void BankClients::setJob(string job){
    this->job = job;
}

void BankClients::setMarital_status(string marital_status){
    this->marital_status = marital_status;
}

void BankClients::setEducation(string education){
    this->education = education;
}

void BankClients::setCredit(string credit){
    this->credit = credit;
}

ostream& operator << (ostream& outs, const BankClients &client){
    outs << setw(10)<< client.getSerial_No();
    outs << setw(20)<< client.getAge();
    outs << setw(20) << client.getJob();
    outs << setw(20)<< client.getMarital_status();
    outs << setw(20)<< client.getEducation();
    outs  << setw(20)<<client.getCredit()<< endl;
    return outs;
}
/*
 *  Reading in Bank_Dataset.csv into the vector bankClients.
 *  Store the first 6 columns in serial_no, age, job, marital_status, education and credit respectively.
 *  Other characters and strings are also read in but never used.
 */
void readBankClientsFromFile(string filename, vector<BankClients> &bankClients){
    ifstream file;
    file.open(filename);

// Declaring Variables
    int serial_no = 0;
    int age = 0, count = 0;
    string job ="", marital_status = "", education = "", credit = "", trash = "";
    char semicolon;
    char quotes;
    char comma;
// Loop to read in 6 columns from the file. The loop stops after the 1007 row.
    while (file && file.peek() != EOF &&  count < 1007){
        // Read in serial Number
        file>>serial_no;

        // Read comma
        file>>comma;

        // Read in semicolon
        file >> quotes;

        // Read in age
        file>>age;

        // Read in semicolon
        file >> semicolon;

        // Read in quote
        file >> quotes;
        file >> quotes;

        // Read in job
        getline(file, job,'"');

        // Read in quote
        file >> quotes;

        // Read in semicolon
        file >> semicolon;

        // Read in quote
        file >> quotes;
        file >> quotes;

        // Read in marital status
        getline(file, marital_status, '"');

        // Read in quote
        file >> quotes;

        // Read in semicolon
        file >> semicolon;

        // Read in quote
        file >> quotes;
        file >> quotes;

        // Read in education
        getline (file, education, '"');

        // Read in quote
        file >> quotes;

        // Read in semicolon
        file >> semicolon;

        // Read in quote
        file >> quotes;
        file >> quotes;

        // Read in credit
        getline (file,credit, '"' );

        // Read the rest of the line into trash
        getline(file, trash);

        // Push back bank clients into the bankClients vector.
        bankClients.push_back(BankClients(serial_no, age, job, marital_status, education, credit));
        ++count;
    }
    file.close(); // close the file
}

/*
 * Counts the number of bank clients with the specified level of education.
 */
int calcNumOfClientsWithTertiary(string eductionLevel, vector<BankClients> & bankClients) {
    int count = 0;
    int i = 0;
    while (i < bankClients.size()) {
        if (bankClients[i].getEducation() == eductionLevel) {
            ++count;
        }
        ++i;
    }
    return count;

}


