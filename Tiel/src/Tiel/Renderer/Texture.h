// --- Texture ----------------------------------------------------------------
// Texture interfaces. 2D. 3D in the future.
// Create() creates a RendererAPI specific texture object.

#pragma once

#include "Tiel/Core/Core.h"

#include <string>

namespace Tiel
{
	class Texture
	{
	public:
		virtual ~Texture() {};

		virtual uint32_t GetWidth() const = 0;
		virtual uint32_t GetHeight() const = 0;

		virtual void Bind(uint32_t slot = 0) const = 0;
	};
	
	class Texture2D : public Texture
	{
	public:
		static Ref<Texture2D> Create(const std::string& path);
	};
}