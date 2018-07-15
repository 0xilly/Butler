#pragma once

#include <event/roomevent.hh>

namespace butler::event
{
    class CreateEvent : public RoomEvent
    {
        private:
            std::string _creator;
            bool _federate;
        public:
            CreateEvent(int age, std::string origin, std::string sender, std::string statekey, std::string roomid, std::string eventid, std::string creator, bool federate);
            std::string getCreator();
            bool doesFederate();
    };
}