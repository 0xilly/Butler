#pragma once

#include <event/roomevent.hh>

namespace butler::event
{
    class CanonicalAliasEvent : RoomEvent
    {
        private:
            std::string alias;
        public:
            CanonicalAliasEvent(std::string alias);
            std::string getAlias();
            
    };
}