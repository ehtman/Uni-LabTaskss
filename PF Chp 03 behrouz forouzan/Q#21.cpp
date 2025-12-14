//Ehtesham-BS-IT-21
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const float TV_PRICE = 400.00;
    const float VCR_PRICE = 220.00;
    const float REMOTE_PRICE = 35.20;
    const float CD_PRICE = 300.00;
    const float TAPE_PRICE = 150.00;
    const float TAX_RATE = 0.0825;

    int qtyTV, qtyVCR, qtyRemote, qtyCD, qtyTape;

    cout << "Enter quantity for TV: ";
    cin >> qtyTV;
    cout << "Enter quantity for VCR: ";
    cin >> qtyVCR;
    cout << "Enter quantity for Remote Control: ";
    cin >> qtyRemote;
    cout << "Enter quantity for CD Player: ";
    cin >> qtyCD;
    cout << "Enter quantity for Tape Recorder: ";
    cin >> qtyTape;

    float totalTV = qtyTV * TV_PRICE;
    float totalVCR = qtyVCR * VCR_PRICE;
    float totalRemote = qtyRemote * REMOTE_PRICE;
    float totalCD = qtyCD * CD_PRICE;
    float totalTape = qtyTape * TAPE_PRICE;
    float subtotal = totalTV + totalVCR + totalRemote + totalCD + totalTape;
    float tax = subtotal * TAX_RATE;
    float total = subtotal + tax;
    
    cout << "\nQTY  DESCRIPTION       UNIT PRICE    TOTAL PRICE\n";
    cout << "----------------------------------------------\n";
    cout << fixed << setprecision(2);
    cout << setw(3) << qtyTV << "  " << setw(15) << left << "TV"<< right << setw(12) << TV_PRICE << setw(14) << totalTV << "\n";
    cout << setw(3) << qtyVCR << "  " << setw(15) << left << "VCR"<< right << setw(12) << VCR_PRICE << setw(14) << totalVCR << "\n";
    cout << setw(3) << qtyRemote << "  " << setw(15) << left << "REMOTE CTRL"<< right << setw(12) << REMOTE_PRICE << setw(14) << totalRemote << "\n";
    cout << setw(3) << qtyCD << "  " << setw(15) << left << "CD PLAYER"<< right << setw(12) <<CD_PRICE << setw(14) << totalCD << "\n";
    cout << setw(3) << qtyTape << "  " << setw(15) << left << "TAPE RECORDER"<< right << setw(12) << TAPE_PRICE << setw(14) << totalTape << "\n";
    cout << "\n          SUBTOTAL" << setw(22) << subtotal << "\n";
    cout << "               TAX" << setw(22) << tax << "\n";
    cout << "             TOTAL" << setw(22) << total << "\n";

    return 0;
}
