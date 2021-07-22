#pragma once

#include <memory>
#include <string>
#include <SDL.h>

namespace wase
{
	class Engine
	{
	public:
		static std::shared_ptr<Engine> getInstance();

		void init(const char* title, const int x, const int y, const unsigned int w, const unsigned int h, const Uint32 flags);
		void run(const char* sceneName);
		void quit();
		void terminate(const std::string& message);

	private:
		static std::shared_ptr<Engine> instance;

		bool isRunning = false;

	private:
		void events();
		void update(float dt);
		void render();
		void destroy();
	};
}