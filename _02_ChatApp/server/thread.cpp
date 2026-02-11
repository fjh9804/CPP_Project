#include "thread.h"
#include <thread>
#include <vector>
#include <mutex>

int thread_count = 3;
std::vector<std::thread> thread_pool;

void worker_task(int id){
    
    std::cout << "Thread " << id << " is running!" << std::endl;
}

void thread_launch(){
    for(int i = 0; i < thread_count; ++i){
        thread_pool.emplace_back(worker_task, i);
    }
}

void thread_join(){
    for(auto &t : thread_pool){
        t.join();
    }
}




