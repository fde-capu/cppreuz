#include "error.hpp"

void	___die(bool condition, std::string message, char err_code)
{
  if (condition)
  {
    perror(message.c_str());
    exit(err_code);
  }
}
