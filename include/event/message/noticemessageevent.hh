#pragma once

#include <event/roomevent.hh>

namespace butler::event
{
    class NoticeMessageEvent : public RoomEvent
    {
        private:
            std::string _body;
        public:
            NoticeMessageEvent(int age, std::string origin, std::string sender, std::string statekey, std::string roomid, std::string eventid, std::string body);
            std::string getBody();
    };
}