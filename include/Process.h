#pragma once

class Process
{
private:
    int PID;
    char* User;
    char* CMD;
    char* CPU;
    int memory;
    int uptime;
public:
    Process(/* args */);
    ~Process();

    //setters

    void setPID(int);
    void setUser(char*);
    void setCMD(char*);
    void setCPU(char*);
    void setMemory(int);
    void setUptime(int);

    //getters

    void getPID();
    void getUser();
    void getCMD();
    void getCPU();
    void getMemory();
    void getUptime();



};

Process::Process(/* args */)
{
}

Process::~Process()
{
}

