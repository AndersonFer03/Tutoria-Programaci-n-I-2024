
#include <iostream>
#include "user.h"
#include "aircraft.h"
#include "flight.h"
#include "crewMember.h"
int main()
{
    User* user = new User("Carlos", "19109383", "carlos@gmail.com", 87676543, "carlos", 0);
    Aircraft* aircraft = new Aircraft("A234", "FrontV", 10);
    Flight flight = Flight("San Jose, Costa Rica", "Ciudad de Mexico, Mexico", "8763",aircraft);
    CrewMember* crewMember = new CrewMember("Marcos", "191009763", "marcos@gmail.com", 87676783, "Piloto", 0);
    crewMember->assignedFlight(flight);
    crewMember->getAssignedFlights();

    user->bookTicket(&flight);
    cout << endl << endl;
    flight.getAvailableSeats();

}

