#include <event/member/memberjoinevent.hh>

using namespace butler::event;

MemberJoinEvent::MemberJoinEvent(int age, std::string origin, std::string sender, std::string statekey, std::string roomid, std::string eventid,  std::string avatar, std::string displayName, std::string membership) :
    RoomEvent(age, origin, sender, statekey, roomid, eventid)
{
    _avatarUrl = avatar;
    _displayName = displayName;
    _memebership = membership;
}

std::string MemberJoinEvent::getAvatarUrl()
{
    return _avatarUrl;
}

std::string MemberJoinEvent::getDisplayName()
{
    return _displayName;
}

std::string MemberJoinEvent::getMembership()
{
    return _memebership;
}