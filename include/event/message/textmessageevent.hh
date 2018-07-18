#pragma once

#include <event/roomevent.hh>

namespace butler::event
{
    class TextMessageEvent : public RoomEvent
    {
        private:
            std::string _body;
        public:
            TextMessageEvent(int age, std::string origin, std::string sender, std::string statekey, std::string roomid, std::string eventid, std::string body);
            std::string getBody();
    };
}