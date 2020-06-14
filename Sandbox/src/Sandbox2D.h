#pragma once

#include "Beta.h"

class Sandbox2D : public Beta::Layer
{
public:
	Sandbox2D();
	virtual ~Sandbox2D() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(Beta::Timestep ts) override;
	virtual void OnImGuiRender() override;
	void OnEvent(Beta::Event& e) override;
private:
	Beta::OrthographicCameraController m_CameraController;
	
	// Temp
	Beta::Ref<Beta::VertexArray> m_SquareVA;
	Beta::Ref<Beta::Shader> m_FlatColorShader;

	Beta::Ref<Beta::Texture2D> m_CheckerboardTexture;
	Beta::Ref<Beta::Texture2D> m_BetaLogoTexture;

	glm::vec4 m_SquareColor = { 0.2f, 0.3f, 0.8f, 1.0f };
	glm::vec4 m_SquareColor2 = { 0.5f, 1.0f, 0.4f, 1.0f };
};