#include <event/createevent.hh>

using namespace butler::event;

CreateEvent::CreateEvent(int age, std::string origin, std::string sender, std::string statekey, std::string roomid, std::string eventid, std::string creator, bool federate) : 
    RoomEvent(age, origin, sender, statekey, roomid, eventid)
{
    _creator = creator;
    _federate = federate;
}

std::string CreateEvent::getCreator()
{
    return _creator;
}

bool CreateEvent::doesFederate()
{
    return _federate;
}