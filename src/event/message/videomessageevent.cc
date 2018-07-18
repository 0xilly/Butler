#include <event/message/videomessageevent.hh>

using namespace butler::event;


VideoMessageEvent::VideoMessageEvent(int age, std::string origin, std::string sender, std::string statekey, std::string roomid, std::string eventid, std::string body, std::string url) :
    RoomEvent(age, origin, sender, statekey, roomid, eventid)
{
    
}