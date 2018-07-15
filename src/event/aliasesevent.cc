#include <event/aliasesevent.hh>


using namespace butler::event;

AliasesEvent::AliasesEvent(int age, std::string origin, std::string sender, std::string statekey, std::string roomid, std::string eventid, std::vector<std::string> aliases) :
    RoomEvent(age, origin, sender, statekey, roomid, eventid)
{
    _aliases = aliases;
}

std::vector<std::string> AliasesEvent::getAliases()
{
    return _aliases;
}