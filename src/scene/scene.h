#pragma once

#include <scene/scene_context.h>

namespace wase::scene
{
	class Scene
	{
	public:
		/**
		 * Initialize the scene with a context
		 */
		void initialize(const SceneContext& context);
		
		/**
		 * Gets called once on the first update
		 */
		virtual void start();

		/**
		 * Gets called every frame
		 */
		virtual void update(const float deltaTime);

	protected:
		Scene() = default;
		Scene(const Scene&) = default;
		Scene& operator=(const Scene&) = delete;
		Scene(Scene&&) = default;
		Scene& operator=(Scene&&) = default;

		SceneContext m_Context;
	};
}