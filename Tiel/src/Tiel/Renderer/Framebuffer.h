#pragma once

namespace Tiel
{
	struct FramebufferSpecs
	{
		uint32_t Width, Height;
		uint32_t samples;
		bool swapChainTarget = false;
	};

	class Framebuffer
	{
	public:
		virtual ~Framebuffer() {}
		virtual void Bind() = 0;
		virtual void Unbind() = 0;

		virtual void Resize(uint32_t width, uint32_t height) = 0;

		virtual uint32_t GetColorAttachmentRendererID() const = 0;
		virtual const FramebufferSpecs& GetSpecification() const = 0;

		static Ref<Framebuffer> Create(const FramebufferSpecs& specs);

	};
}