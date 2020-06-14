#pragma once

#include "Beta/Core/Layer.h"

#include "Beta/Events/ApplicationEvent.h"
#include "Beta/Events/KeyEvent.h"
#include "Beta/Events/MouseEvent.h"

namespace Beta {

	class ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer() = default;

		virtual void OnAttach() override;
		virtual void OnDetach() override;

		void Begin();
		void End();
	private:
		float m_Time = 0.0f;
	};

}