#pragma once

#include "Beta.h"

class ExampleLayer : public Beta::Layer
{
public:
	ExampleLayer();
	virtual ~ExampleLayer() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(Beta::Timestep ts) override;
	virtual void OnImGuiRender() override;
	void OnEvent(Beta::Event& e) override;
private:
	Beta::ShaderLibrary m_ShaderLibrary;
	Beta::Ref<Beta::Shader> m_Shader;
	Beta::Ref<Beta::VertexArray> m_VertexArray;

	Beta::Ref<Beta::Shader> m_FlatColorShader;
	Beta::Ref<Beta::VertexArray> m_SquareVA;

	Beta::Ref<Beta::Texture2D> m_Texture, m_ChernoLogoTexture;

	Beta::OrthographicCameraController m_CameraController;
	glm::vec3 m_SquareColor = { 0.2f, 0.3f, 0.8f };
};

