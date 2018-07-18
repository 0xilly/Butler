#pragma once

#include <event/roomevent.hh>
#include <vector>

namespace butler::event
{
    class Event
    {
        private:
            std::string _event;
            int _powerLevel;
        public:
            Event(std::string event, int powerLevel)
            {
                _event = event;
                _powerLevel = powerLevel;
            }
            std::string getEvent() {return _event;}
            int getPowerLevel() {return _powerLevel;}

    };

    class User
    {
        private:
            std::string _user;
            int _powerLevel;
        public:
            User(std::string user, int powerLevel)
            {
                _user = user;
                powerLevel = powerLevel;
            }

            std::string getUser() {return _user;}
            int getPowerLevel() {return _powerLevel;}
    };

    class PowerLevelsEvent : public RoomEvent
    {
        private:
            int _ban;
            std::vector<Event> _events;
            int _event_defualt;
            int _invite;
            int _redact;
            int _state_defualt;
            std::vector<User> _users;
            int _user_default;
        public:
            PowerLevelsEvent(int age, std::string origin, std::string sender, std::string statekey, std::string roomid, std::string eventid, 
                int ban, std::vector<Event> events, int event_defualt, int invite, int redact, int state_defualt, std::vector<User> users, int user_defualt);
            int getBan();
            std::vector<Event> getEvents();
            int getEventDefault();
            int getInvite();
            int getRedact();
            int getStateDefualt();
            std::vector<User> getUsers();
            int getUserDefault();

    };
}