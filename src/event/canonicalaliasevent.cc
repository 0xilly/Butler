#include <event/canonicalaliasevent.hh>

using namespace butler::event;

CanonicalAliasEvent::CanonicalAliasEvent(int age, std::string origin, std::string sender, std::string statekey, std::string roomid, std::string eventid, std::string alias) :
    RoomEvent(age, origin, sender, statekey, roomid, eventid)
{
    _alias = alias;
}

std::string CanonicalAliasEvent::getAlias()
{
    return _alias;
}