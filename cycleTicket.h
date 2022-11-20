#include "iostream"
using namespace std;
#ifndef CYCLETICKET_H
#define CYCLETICKET_H


namespace C{
class cycleTicket
{
    public:
        string option;
        int index=0;
        int ticketIndex = 1000;
        string name[100];
        string phNumber[100];
        string ticket[100];
        string avaliableTicket[1000];
        void loading();
        void buyTicket();
        void avaliableTicketShow();
        void ticketSaving();
        void ticketLoading();
        int ticketCheck(string check);
        void ticketRemove(string tk);
        void buyerList();
        void buyerSaving();
        void buyerLoading();
};
}

#endif // CYCLETICKET_H
