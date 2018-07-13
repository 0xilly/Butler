#include <event/roomevent.hh>

using namespace butler::event;

RoomEvent::RoomEvent(int age, std::string origin, std::string sender, std::string statekey, std::string roomid, std::string eventid)
{
    _age = age;
    _origneServer = origin;
    _sender = sender;
    _stateKey = statekey;
    _roomId = roomid;
    _eventId = eventid;
}

int RoomEvent::getAge()
{
    return _age;
}

std::string RoomEvent::getEventId()
{
    return _eventId;
}

std::string RoomEvent::getOriginServer()
{
    return _origneServer;
}

std::string RoomEvent::getRoomId()
{
    return _roomId;
}

std::string RoomEvent::getSender()
{
    return _sender;
}

std::string RoomEvent::getStateKey()
{
    return _stateKey;
}