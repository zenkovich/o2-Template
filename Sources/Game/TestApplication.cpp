#include "TestApplication.h"

#include "o2/Render/Render.h"


void TestApplication::OnStarted()
{
	cocos2d::Application::getInstance()->initGLContextAttrs();
}

void TestApplication::OnUpdate(float dt)
{
}

void TestApplication::OnDraw()
{
	o2Render.Clear();
	o2Render.SetCamera(Camera::Default());
}

