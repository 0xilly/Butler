#pragma once

#include <event/roomevent.hh>

#include <vector>

namespace butler::event
{
    class AliasesEvent : RoomEvent
    {
        private:
            std::vector<std::string> aliases;

        public:
            AliasesEvent(std::vector<std::string> aliases);
            std::vector<std::string> getAliases();

    };
}