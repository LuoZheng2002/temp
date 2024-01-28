#pragma once
#include<string>
#include<deque>
class Requester
{
public:
    Requester(const char* filename);
    std::string Info() const;
private:
    std::string filename;
    std::deque<int> tracks;
};