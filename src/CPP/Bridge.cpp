#include "OllamaPlusPlus.h"

extern "C" {
	__declspec(dllexport)
		void init_ollama(const char* path, const char* modelName) {
		InitOllama(path, modelName);
	}

	__declspec(dllexport)
		const char* prompt_ollama(const char* prompt) {
		return PromptOllama(prompt);
	}

	__declspec(dllexport)
		void free_ollama(const char* response) {
		FreeOllama(response);
	}
}