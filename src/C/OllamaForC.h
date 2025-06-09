__declspec(dllimport) void init_ollama(const char* path, const char* modelName);
__declspec(dllimport) const char* prompt_ollama(const char* prompt);
__declspec(dllimport) void free_ollama(const char* response);