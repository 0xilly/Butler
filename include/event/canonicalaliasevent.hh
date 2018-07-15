#pragma once

#include <event/roomevent.hh>

namespace butler::event
{
    class CanonicalAliasEvent : public RoomEvent
    {
        private:
            std::string _alias;
        public:
            CanonicalAliasEvent(int age, std::string origin, std::string sender, std::string statekey, std::string roomid, std::string eventid, std::string alias);
            std::string getAlias();
    };
}