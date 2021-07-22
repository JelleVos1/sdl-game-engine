#include "label.h"

#include "../../../core/managers/resource_manager.h"
#include "../../../core/renderer.h"

#include <SDL_ttf.h>

namespace wase
{
	Label::Label(const char* text, const char* font, const SDL_Color& color)
	{
		this->text = text;
		this->font = font;
		this->color = color;
		updateText();
	}

	void Label::start()
	{
		transform = owner->getComponent<Transform>();
		camera = &transform->owner->entityManager->camera;
	}

	void Label::update(float dt)
	{
		if (owner->parent && !parentTransform)
			parentTransform = owner->parent->getComponent<Transform>();

		if (!owner->parent)
			parentTransform = nullptr;

		position.x = !parentTransform ? (int)(transform->position.x - camera->position.x) : (int)(transform->position.x + parentTransform->position.x - camera->position.x);
		position.y = !parentTransform ? (int)(transform->position.y - camera->position.y) : (int)(transform->position.y + parentTransform->position.y - camera->position.y);
	}

	void Label::render()
	{
		SDL_RenderCopy(Renderer::getRenderer(), texture, NULL, &position);
	}

	void Label::setText(const std::string& text)
	{
		this->text = text;

		updateText();
	}

	void Label::setFont(const char* font)
	{
		this->font = font;

		updateText();
	}

	void Label::setColor(SDL_Color& color)
	{
		this->color = color;

		updateText();
	}

	Size Label::getSize()
	{
		Size size;

		TTF_SizeText(ResourceManager::getFont(font), text.c_str(), &size.w, &size.h);

		return size;
	}

	void Label::updateText()
	{
		SDL_Surface* surface = TTF_RenderText_Blended(ResourceManager::getFont(font), text.c_str(), color);

		texture = SDL_CreateTextureFromSurface(Renderer::getRenderer(), surface);

		SDL_FreeSurface(surface);

		SDL_QueryTexture(texture, nullptr, nullptr, &position.w, &position.h);
	}
}