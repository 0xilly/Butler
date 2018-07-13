#pragma once

#include <event/roomevent.hh>

namespace butler::event
{
    class CreateEvent : RoomEvent
    {
        private:
            std::string creator;
            bool federate;
        public:
            CreateEvent(std::string creator, bool federate);
            std::string getCreator();
            bool getFederation();
    };
}