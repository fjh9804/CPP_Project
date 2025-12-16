#pragma once
#include <iostream>
#include <vector>

//定义日志等级
enum class LogLevel {
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

//定义日志类
class Logger {
private:
	LogLevel logLv;
	std::vector<std::shared_ptr<>>;
};
