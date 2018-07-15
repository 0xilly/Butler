#pragma once

#include <event/roomevent.hh>

namespace butler::event
{
    class MemberJoinEvent : public RoomEvent
    {
        private:
            std::string _avatarUrl;
            std::string _displayName;
            std::string _memebership;
        public:
            MemberJoinEvent(int age, std::string origin, std::string sender, std::string statekey, std::string roomid, std::string eventid, std::string avatar, std::string displayName, std::string membership);
            std::string getAvatarUrl();
            std::string getDisplayName();
            std::string getMembership();
    };
}
