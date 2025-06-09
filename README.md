![Ollama](https://img.shields.io/badge/Ollama-%23000000?logo=Ollama)
![C++](https://img.shields.io/badge/C%2B%2B-%2300599C?logo=C%2B%2B)
![C#](https://img.shields.io/badge/C%23-%23512BD4?logo=.NET)
![C](https://img.shields.io/badge/C-%23A8B9CC?logo=C&logoColor=%23ffffff)
![License](https://img.shields.io/github/license/HardCodeDev777/OllamaForC?color=%2305991d)
![Last commit](https://img.shields.io/github/last-commit/HardCodeDev777/OllamaForC?color=%2305991d)
![Tag](https://img.shields.io/github/v/tag/HardCodeDev777/OllamaForC)
![Top lang](https://img.shields.io/github/languages/top/HardCodeDev777/OllamaForC)

> [!NOTE]  
> This library based on my [Ollama library for C++](https://github.com/HardCodeDev777/OllamaPlusPlus), so README will be very similar.

# 🦙 OllamaForC

## 👀 Introduction

**OllamaForC** is a very unique libary: core logic is written in C#, then added in C++, and then added in C🤯 
It's also lightweight and very simple way to use Ollama in C.

---

## 🚀 Overview

**OllamaForC** is a lightweight and incredibly simple library for using [Ollama](https://ollama.com) from C.  
The base logic is implemented in C# and C++. In C just exports the functions.

This means you can talk to LLM models from C using just a few lines of code:

```c
#include "OllamaForC.h"

init_ollama("OllamaNET.dll", modelName);

const char* response = prompt_ollama("When was GitHub created?");

printf(response);

free_ollama(response);
```

It works with any model downloaded via the [Ollama CLI](https://ollama.com/library).

---

## 🚀 Quick start

> **Requirement:** [Download and install Ollama](https://ollama.com) first.

1. Download the latest `.zip` archive from the **Releases** page  
2. Extract it in your project  
3. Open Demo.c to see example of usage

---

## 📋 API

OllamaForC is a very simple C library, so it contains only three methods to communicate with Ollama. Here you see what you can do with this library:

- [Initialize Ollama](#initialize-ollama)
- [Send prompt to Ollama](#prompt-ollama)
- [Free memory from Ollama's response](#free-ollama)

### Initialize Ollama

To initialize Ollama and load OllamaNET.dll library, use the `InitOllama()` method:

```c
init_ollama("OllamaNET.dll", modelName);
```

This method has signature:

```c
void init_ollama(const char* path, const char* modelName);
```

#### Parameters:
- `path` – Path to the `OllamaNET.dll`
- `modelName` – Name of the model you want to use

> [!NOTE]  
> If `OllamaNET.dll` is in the same folder as your `.cpp` file, you can just write `"OllamaNET.dll"`. Otherwise, specify the full path like: `"C:\Users\YourName\Desktop\OllamaNET.dll"`

### Prompt Ollama
To send a prompt to the model and receive a response, use the `prompt_ollama` method.

```c
const char* response = prompt_ollama("When was GitHub created?");
```

This method has signature:

```c
const char* prompt_ollama(const char* prompt);
```

#### Parameters:
- `prompt` – The prompt to send to the model

**It returns the LLM response.**

### Free Ollama
To free the allocated memory and unload the library, use the `free_ollama` method.

```c
free_ollama(response);
```

This method has signature:

```c
void free_ollama(const char* response);
```

#### Parameters:
- `response` – The response returned by `prompt_ollama()`

---

## 📄 License

This project is licensed under the **MIT License**.  
See LICENSE for full terms.

---

## 👨‍💻 Author

**HardCodeDev**  
- [GitHub](https://github.com/HardCodeDev777)  
- [Itch.io](https://hardcodedev.itch.io/)

---

> 💬 Got feedback, found a bug, or want to contribute? Open an issue or fork the repo on GitHub!
