//
// Created by stupi on 2020/10/24.
//

#ifndef START_GIT_HPP
#define START_GIT_HPP
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <shellapi.h>
#include <git2.h>
#include <stdio.h>
#include <tchar.h>
#include <conio.h>
class git_update{
public:
    void pipeline(void);
    ~git_update();
    bool run();
    void set_dll_path(void);
private:
    const char *run_path = "C:\\Users\\stupi\\Videos\\Projects\\git_remote_update\\demo\\For-updat";
    const CHAR *task_path = "C:\\Users\\stupi\\Videos\\Projects\\git_remote_update\\demo\\For-updat\\git_remote_update.exe";
    std::string dll_path = "C:\\Users\\stupi\\Videos\\opencv-3.4.9\\build\\install\\x64\\vc15\\bin";
};

#endif //START_GIT_HPP
