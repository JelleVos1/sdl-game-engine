#include "window.h"

#include "utils/log_utils.h"

namespace wase
{
	std::shared_ptr<Window> Window::instance = nullptr;

	void Window::init(const char* title, const int x, const int y, const unsigned int w, const unsigned int h, const Uint32 flags)
	{
		getInstance()->window = SDL_CreateWindow(title, x, y, w, h, flags);
		if (!getInstance()->window)
		{
			log_utils::error("Could not initialize SDL Window");
			return;
		}

		SDL_Rect& rect = getInstance()->rect;
		rect.x = x;
		rect.y = y;
		rect.w = w;
		rect.h = h;
	}

	SDL_Window* Window::getWindow()
	{
		return getInstance()->window;
	}

	SDL_Rect* Window::getRect()
	{
		return &getInstance()->rect;
	}

	std::shared_ptr<Window> Window::getInstance()
	{
		return instance = (instance != nullptr) ? instance : std::make_shared<Window>();
	}
}