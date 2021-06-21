#pragma once
#include <string>
using std::string;


enum CPUStates {
    S_USER = 1,
    S_NICE,
    S_SYSTEM,
    S_IDLE,
    S_IOWAIT,
    S_IRQ,
    S_SOFTIRQ,
    S_STEAL,
    S_GUEST,
    S_GUEST_NICE
};


class Paths
{
public:

static string rootPath(){
    return "/proc/";
}

static string cmdPath(){
    return "/cmdline";
}

static string statPath(){
    return "stat";
}

static string uptimePath(){
    return "uptime";
}

static string meminfoPath(){
    return "meminfo";
}

static string versioninfoPath(){
    return "version";
}

};


