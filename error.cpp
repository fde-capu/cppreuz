#include "error.hpp"

void	___die(bool condition, std::string message, char err_code, void(*callback)())
{
  if (condition)
  {
    perror(message.c_str());
    if (callback) callback();
    exit(err_code);
  }
}
