#pragma once
#ifdef TEST
#define PRINT(message) std::cout << message << "\n";
#else
#define PRINT(message)
#endif