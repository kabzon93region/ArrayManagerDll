#pragma once
#include <string>

using namespace std;

#ifdef ARRAYMANAGERLIBRARY_EXPORTS
#define ARRAYMANAGERLIBRARY_API __declspec(dllexport)
#else
#define ARRAYMANAGERLIBRARY_API __declspec(dllimport)
#endif


extern "C" ARRAYMANAGERLIBRARY_API void amsUP(string *a[], string c[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amsDOWN(string *a[], string c[], int size_a_current, int size_a_new);

extern "C" ARRAYMANAGERLIBRARY_API void amiUP(int *a[], int c[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amiDOWN(int *a[], int c[], int size_a_current, int size_a_new);

extern "C" ARRAYMANAGERLIBRARY_API void amfUP(float *a[], float c[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amfDOWN(float *a[], float c[], int size_a_current, int size_a_new);

extern "C" ARRAYMANAGERLIBRARY_API void amdUP(double *a[], double c[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amdDOWN(double *a[], double c[], int size_a_current, int size_a_new);

extern "C" ARRAYMANAGERLIBRARY_API void amcUP(char *a[], char c[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amcDOWN(char *a[], char c[], int size_a_current, int size_a_new);

extern "C" ARRAYMANAGERLIBRARY_API void ambUP(bool *a[], bool c[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void ambDOWN(bool *a[], bool c[], int size_a_current, int size_a_new);

extern "C" ARRAYMANAGERLIBRARY_API void amwUP(wchar_t *a[], wchar_t c[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amwDOWN(wchar_t *a[], wchar_t c[], int size_a_current, int size_a_new);

extern "C" ARRAYMANAGERLIBRARY_API void amstUP(short *a[], short c[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amstDOWN(short *a[], short c[], int size_a_current, int size_a_new);

extern "C" ARRAYMANAGERLIBRARY_API void amlUP(long *a[], long c[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amlDOWN(long *a[], long c[], int size_a_current, int size_a_new);

