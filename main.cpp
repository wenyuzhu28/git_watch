#include <iostream>
#include <git.hpp>

int main() {
    git_update obj;
    obj.set_dll_path(); //set dll path
    obj.pipeline();  //update
    auto ret = obj.run();  //watch process
    if (ret == false)
        std::cerr << "Creat watch process failed" << std::endl;
    return 0;
}