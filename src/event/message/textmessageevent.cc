#include <event/message/textmessageevent.hh>

using namespace butler::event;

TextMessageEvent::TextMessageEvent(int age, std::string origin, std::string sender, std::string statekey, std::string roomid, std::string eventid, std::string body) :
    RoomEvent(age, origin, sender, statekey, roomid, eventid)
{
    _body = body;
}

std::string TextMessageEvent::getBody()
{
    return _body;
}