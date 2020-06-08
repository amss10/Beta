#include "btpch.h"
#include "Application.h"
#include "Beta/Events/ApplicationEvent.h"
#include "Beta/Log.h"
#include <GLFW/glfw3.h>

namespace Beta {

	Application::Application()
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		while (m_Running)
		{
			glClearColor(1, 0, 0, 1);
			glClear(GL_COLOR_BUFFER_BIT);
			m_Window->OnUpdate();
		}
	}

}