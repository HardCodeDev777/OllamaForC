#include <stdio.h>
#include "OllamaForC.h"

int main(void) {
	// Path to the OllamaNET.dll file
	// Example: "C:\\Users\\YourName\\Desktop\\OllamaNET.dll"
	const char* pathToOllamaLibrary = "";

	// The name of the model you want to use (must already be downloaded)
	const char* modelName = "deepseek-r1:7b";

	// Load the OllamaNET library and initialize the chat client
	init_ollama(pathToOllamaLibrary, modelName);

	// The prompt to send to the model
	const char* prompt = "When was GitHub created?";

	// Send the prompt and receive the response from Ollama
	const char* response = prompt_ollama(prompt);

	// Print the model's response to the console
	printf(response);

	// ALWAYS free the response memory after using it to prevent memory leaks
	free_ollama(response);

	return 0;
}