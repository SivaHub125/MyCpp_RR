#pragma once
#include <chrono> 
#include <future> 
#include <iostream> 

class TokenHolder{
    private:
        std::string token;
        std::promise<std::string> tokenPromise_;
    public:
        void setToken(const std::string& t){
            token=t;
        }
        std::future<std::string> getToken() {
        tokenPromise_ = std::promise<std::string>();
        auto fut = tokenPromise_.get_future();
        return fut;
    }
};