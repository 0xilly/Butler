#pragma once

#include <event/roomevent.hh>

namespace butler::event
{
    class ThumbNail
    {
        private:
            int _height;
            int _width;
            std::string _mimetype;
            int _size;
        public:
            ThumbNail(int height, int width, std::string mimetype, int size)
            {
                _height = height;
                _width = width;
                _mimetype = mimetype;
                _size = size;
            }

            int getHeight() { return _height; }
            int getWidth() { return _width; }
            std::string getMimeType() {return _mimetype; }
            int getSize() { return _size; }
    };

    class Info
    {
        private:
            int _duration;
            int _height;
            int _width;
            std::string _mimeType;
            int _size;
            std::string _thumbNailUrl;
            ThumbNail _thumbNail;
        public:
            Info(int duration, int height, int width, std::string mimeType, int size, std::string thumbNailUrl, ThumbNail thumbNail) {
                _duration = duration;
                _height = height;
                _width = width;
                _mimeType = mimeType;
                _size = size;
                _thumbNailUrl = thumbNailUrl;
                _thumbNail = thumbNail;
            }

            int getDuration() { return _duration; }
            int getHeight() { return _height; }
            int getWidth() { return _width; }
            std::string getMimeType() { return _mimeType; }
            int getSize() { return _size; }
            ThumbNail getThumbNail();

    };


    class VideoMessageEvent : public RoomEvent
    {
        private:
            std::string _body;
            std::string _url;
        private:
            VideoMessageEvent(int age, std::string origin, std::string sender, std::string statekey, std::string roomid, std::string eventid, std::string body, std::string url);
            std::string getBody();
            std::string getUrl();
    };
}