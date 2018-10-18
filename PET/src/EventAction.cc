
// $Id: EventAction.cc 15.10.2018 A. Fijalkowska $
//
/// \file EventAction.cc
/// \brief Implementation of the EventAction class
//
//
#include "EventAction.hh"

EventAction::EventAction()
{
}
 
EventAction::~EventAction(){}


void EventAction::BeginOfEventAction(const G4Event* anEvent)
{

}
 

void EventAction::EndOfEventAction(const G4Event* anEvent)
{
	
  G4int eventID = anEvent->GetEventID();
  if( eventID % 10 == 0 )
  {
    G4cout << "Finished Running Event # " << eventID << G4endl;
  }
  
}



