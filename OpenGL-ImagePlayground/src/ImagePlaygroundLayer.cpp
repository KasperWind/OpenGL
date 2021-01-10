#include "ImagePlaygroundLayer.h"

using namespace GLCore;
using namespace GLCore::Utils;

ImagePlaygroundLayer::ImagePlaygroundLayer()
{
}

ImagePlaygroundLayer::~ImagePlaygroundLayer()
{
}

void ImagePlaygroundLayer::OnAttach()
{
	EnableGLDebugging();

	// Init here
}

void ImagePlaygroundLayer::OnDetach()
{
	// Shutdown here
}

void ImagePlaygroundLayer::OnEvent(Event& event)
{
	// Events here
}

void ImagePlaygroundLayer::OnUpdate(Timestep ts)
{
	// Render here
}

void ImagePlaygroundLayer::OnImGuiRender()
{
	// ImGui here
}
