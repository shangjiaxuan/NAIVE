#pragma once

#include "..\Shader.h"

namespace Engine {
	namespace Graphics {
		namespace Shaders {
			class Naive: public Shader {
			public:
				Naive(Managers::Shader& given_manager): Shader(given_manager) {
					CreateProgram();
				}
				GLuint CreateProgram() override;
				const char* fragment_shader_path = ".\\Engine\\Graphics\\Shaders\\Naive\\Naive.frag";
				const char* vertex_shader_path = ".\\Engine\\Graphics\\Shaders\\Naive\\Naive.vert";
			};
		}
	}
}
