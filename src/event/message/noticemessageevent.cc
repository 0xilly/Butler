#include <event/message/noticemessageevent.hh>

using namespace butler::event;

NoticeMessageEvent::NoticeMessageEvent(int age, std::string origin, std::string sender, std::string statekey, std::string roomid, std::string eventid, std::string body) :
    RoomEvent(age, origin, sender, statekey, roomid, eventid)
{
    _body = body;
}

std::string NoticeMessageEvent::getBody()
{
    return _body;
}