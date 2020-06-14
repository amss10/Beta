#include "Sandbox2D.h"
#include <imgui/imgui.h>

#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

Sandbox2D::Sandbox2D()
	: Layer("Sandbox2D"), m_CameraController(1280.0f / 720.0f,true)
{
}

void Sandbox2D::OnAttach()
{
	BT_PROFILE_FUNCTION();

	m_CheckerboardTexture = Beta::Texture2D::Create("assets/textures/Checkerboard.png");
	m_BetaLogoTexture = Beta::Texture2D::Create("assets/textures/Beta.png");
}

void Sandbox2D::OnDetach()
{
	BT_PROFILE_FUNCTION();
}

void Sandbox2D::OnUpdate(Beta::Timestep ts)
{
	BT_PROFILE_FUNCTION();

	// Update
	m_CameraController.OnUpdate(ts);

	// Render
	{
		BT_PROFILE_SCOPE("Renderer Prep");
		Beta::RenderCommand::SetClearColor({ 0.1f, 0.1f, 0.1f, 1 });
		Beta::RenderCommand::Clear();
	}

	{
		static float rotation = 0.0f;
		rotation += ts * 50.0f;

		BT_PROFILE_SCOPE("Renderer Draw");
		Beta::Renderer2D::BeginScene(m_CameraController.GetCamera());
		Beta::Renderer2D::DrawRotatedQuad({ 1.5f, -1.0f }, { 0.8f, 0.8f }, -45.0f, { 0.8f, 0.2f, 0.3f, 1.0f });
		Beta::Renderer2D::DrawQuad({ 2.0f, 0.2f }, { 0.8f, 0.8f }, m_BetaLogoTexture);
		Beta::Renderer2D::DrawQuad({ 1.0f, 0.5f }, { 0.8f, 0.8f }, m_SquareColor2);
		Beta::Renderer2D::DrawQuad({ 0.5f, -0.5f }, { 0.5f, 0.75f }, m_SquareColor);
		Beta::Renderer2D::DrawQuad({ 0.0f, 0.0f, -0.1f }, { 10.0f, 10.0f }, m_CheckerboardTexture, 10.0f);
		Beta::Renderer2D::DrawRotatedQuad({ -2.0f, 0.0f, 0.0f }, { 3.0f, 2.0f }, -rotation, m_BetaLogoTexture, 1.0f);
		Beta::Renderer2D::EndScene();
	}
}

void Sandbox2D::OnImGuiRender()
{
	BT_PROFILE_FUNCTION();
	ImGui::Begin("INFO");
	ImGui::Text("Abdelrahman Mohamed Soliman");
	ImGui::Text("18200019");
	ImGui::TextColored({ 1.0f, 0.4f, 0.8f, 1.0f }, "Beta Game Engine");
	ImGui::End();
	ImGui::Begin("Settings");
	ImGui::ColorEdit4("Square 1 Color", glm::value_ptr(m_SquareColor));
	ImGui::ColorEdit4("Square 2 Color", glm::value_ptr(m_SquareColor2));
	ImGui::End();
}

void Sandbox2D::OnEvent(Beta::Event& e)
{
	m_CameraController.OnEvent(e);
}