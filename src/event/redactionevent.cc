#include <event/redactionevent.hh>

using namespace butler::event;

RedactionEvent::RedactionEvent(int age, std::string origin, std::string sender, std::string statekey, std::string roomid, std::string eventid, std::string reason) :
    RoomEvent(age, origin, sender, statekey, roomid, eventid)
{
    _reason = reason;
}


std::string RedactionEvent::getReason()
{
    return _reason;
}