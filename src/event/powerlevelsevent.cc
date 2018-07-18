#include <event/powerlevelsevent.hh>

using namespace butler::event;

PowerLevelsEvent::PowerLevelsEvent(int age, std::string origin, std::string sender, std::string statekey, std::string roomid, std::string eventid, 
                int ban, std::vector<Event> events, int event_defualt, int invite, int redact, int state_defualt, std::vector<User> users, int user_defualt) :
    RoomEvent(age, origin, sender, statekey, roomid, eventid)
{
    _ban = ban;
    _events = events;
    _event_defualt = event_defualt;
    _invite = invite;
    _redact = redact;
    _state_defualt = state_defualt;
    _users = users;
    _user_default = user_defualt;
}

int PowerLevelsEvent::getBan()
{
    return _ban;
}

std::vector<Event> PowerLevelsEvent::getEvents()
{
    return _events;
}

int PowerLevelsEvent::getEventDefault()
{
    return _event_defualt;
}

int PowerLevelsEvent::getInvite()
{
    return _invite;
}

int PowerLevelsEvent::getRedact()
{
    return _redact;
}

int PowerLevelsEvent::getStateDefualt()
{
    return _state_defualt;
}

std::vector<User> PowerLevelsEvent::getUsers()
{
    return _users;
}

int PowerLevelsEvent::getUserDefault()
{
    return _user_default;
}