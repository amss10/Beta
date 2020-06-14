#pragma once

#include "Beta/Core/Core.h"

#include "Beta/Core/Window.h"
#include "Beta/Core/LayerStack.h"
#include "Beta/Events/Event.h"
#include "Beta/Events/ApplicationEvent.h"

#include "Beta/Core/Timestep.h"

#include "Beta/ImGui/ImGuiLayer.h"

int main(int argc, char** argv);

namespace Beta {

	class Application
	{
	public:
		Application();
		virtual ~Application();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);

		Window& GetWindow() { return *m_Window; }

		static Application& Get() { return *s_Instance; }
	private:
		void Run();
		bool OnWindowClose(WindowCloseEvent& e);
		bool OnWindowResize(WindowResizeEvent& e);
	private:
		std::unique_ptr<Window> m_Window;
		ImGuiLayer* m_ImGuiLayer;
		bool m_Running = true;
		bool m_Minimized = false;
		LayerStack m_LayerStack;
		float m_LastFrameTime = 0.0f;
	private:
		static Application* s_Instance;
		friend int ::main(int argc, char** argv);
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}