#pragma once

#include <exception>
#include <string>

namespace wase
{
	class TerminateException : public std::exception
	{
	private:
		std::string message;

	public:
		TerminateException(const std::string& message) : message(message) {}

		const char* what() const noexcept override
		{
			return message.c_str();
		}
	};
}