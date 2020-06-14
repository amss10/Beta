#include "btpch.h"
#include "Platform/OpenGL/OpenGLContext.h"

#include <GLFW/glfw3.h>
#include <glad/glad.h>
#include <GL/GL.h>

namespace Beta {

	OpenGLContext::OpenGLContext(GLFWwindow* windowHandle)
		: m_WindowHandle(windowHandle)
	{
		BT_CORE_ASSERT(windowHandle, "Window handle is null!")
	}

	void OpenGLContext::Init()
	{
		BT_PROFILE_FUNCTION();

		glfwMakeContextCurrent(m_WindowHandle);
		int status = gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
		BT_CORE_ASSERT(status, "Failed to initialize Glad!");

		BT_CORE_INFO("OpenGL Info:");
		BT_CORE_INFO("  Vendor: {0}", glGetString(GL_VENDOR));
		BT_CORE_INFO("  Renderer: {0}", glGetString(GL_RENDERER));
		BT_CORE_INFO("  Version: {0}", glGetString(GL_VERSION));

	#ifdef BT_ENABLE_ASSERTS
		int versionMajor;
		int versionMinor;
		glGetIntegerv(GL_MAJOR_VERSION, &versionMajor);
		glGetIntegerv(GL_MINOR_VERSION, &versionMinor);

		BT_CORE_ASSERT(versionMajor > 4 || (versionMajor == 4 && versionMinor >= 5), "Beta requires at least OpenGL version 4.5!");
	#endif
	}

	void OpenGLContext::SwapBuffers()
	{
		BT_PROFILE_FUNCTION();

		glfwSwapBuffers(m_WindowHandle);
	}

}