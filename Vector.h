#pragma once

#include "base.h"

//‰ÁZ
Vector3 Add(const Vector3& v1, const Vector3& v2);
//Œ¸Z
Vector3 Subtract(const Vector3& v1, const Vector3& v2);
//ƒXƒJƒ‰[”{
Vector3 Multiply(float scalar, const Vector3& v);
//“àÏ
float Dot(const Vector3& v1, const Vector3& v2);
//’·‚³
float Length(const Vector3& v);
//³‹K‰»
Vector3 Normalize(const Vector3& v);

//•¶šo—Í
void VectorScreenPrintf(int x, int y, Vector3& vector, const char* label);