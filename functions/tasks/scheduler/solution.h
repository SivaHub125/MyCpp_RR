#pragma once
#include<iostream>
#include<functional>
#include<vector>

// Write your solution here
class Scheduler{
    public:
        void addTask(std::function<void()> task){
            tasks_.push_back(task);
        }
        void runAll() {
            for (const auto& task : tasks_) {
                task();
            }
        }
    private:
        std::vector<std::function<void()>> tasks_;
};