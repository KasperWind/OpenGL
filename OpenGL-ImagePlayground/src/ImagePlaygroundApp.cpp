#include "GLCore.h"
#include "ImagePlaygroundLayer.h"

using namespace GLCore;

class ImagePlayground : public Application
{
public:
	ImagePlayground()
	{
		PushLayer(new ImagePlaygroundLayer());
	}
};

int main()
{
	std::unique_ptr<ImagePlayground> app = std::make_unique<ImagePlayground>();
	app->Run();
}