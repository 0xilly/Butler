#pragma once

#include <event/roomevent.hh>

namespace butler::event
{
    class RedactionEvent : public RoomEvent
    {
        private:
            std::string _reason;
            int _unSingedAge;
        public:
            RedactionEvent(int age, std::string origin, std::string sender, std::string statekey, std::string roomid, std::string eventid, std::string reason);
            std::string getReason();
            int unSignedAge();
    };
}