#include "btpch.h"
#include "Beta/Renderer/RenderCommand.h"

namespace Beta {

	Scope<RendererAPI> RenderCommand::s_RendererAPI = RendererAPI::Create();

}