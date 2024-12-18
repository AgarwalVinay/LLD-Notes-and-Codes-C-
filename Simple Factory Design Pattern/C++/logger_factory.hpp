#pragma once
#include "ilogger.hpp"
#include "debug_logger.hpp"
#include "info_logger.hpp"
#include "error_logger.hpp"

class LoggerFactory {
    public:
          ILogger* createLogger(LogLevel pLogLevel);
};