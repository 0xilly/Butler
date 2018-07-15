#include <event/joinrulesevent.hh>

using namespace butler::event;

JoinRulesEvent::JoinRulesEvent(int age, std::string origin, std::string sender, std::string statekey, std::string roomid, std::string eventid, std::string creator, Rule joinRule) :
    RoomEvent(age, origin, sender, statekey, roomid, eventid)
{
    _joinRule = joinRule;
}

Rule JoinRulesEvent::getJoinRule()
{
    return _joinRule;
}