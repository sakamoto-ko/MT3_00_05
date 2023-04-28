#pragma once
#include"base.h"

//‰ÁZ
Matrix4x4 Add(const Matrix4x4& m1, const Matrix4x4& m2);
//Œ¸Z
Matrix4x4 Subtract(const Matrix4x4& m1, const Matrix4x4& m2);
//Ï
Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2);
//‹ts—ñ
Matrix4x4 Inverse(const Matrix4x4& m);
//“]’us—ñ
Matrix4x4 Transpose(const Matrix4x4& m);
//’PˆÊs—ñ
Matrix4x4 MakeIdenttity4x4();

//•¶šo—Í
void MatrixScreenPrintf(int x, int y, const Matrix4x4& matrix, const char* label);

// •½sˆÚ“®s—ñ
Matrix4x4 MakeTranslateMatrix(const Vector3& translate);

// X²‰ñ“]
Matrix4x4 MakeRotateXMatrix(float radian);
// Y²‰ñ“]
Matrix4x4 MakeRotateYMatrix(float radian);
// Z²‰ñ“]
Matrix4x4 MakeRotateZMatrix(float radian);
// ‰ñ“]s—ñ
Matrix4x4 MakeRotateMatrix(const Vector3& radian);

// Šg‘åk¬s—ñ
Matrix4x4 MakeScaleMatrix(const Vector3& scale);

//ƒAƒtƒBƒ“•ÏŠ·s—ñ
Matrix4x4 MakeAffineMatrix(const Vector3& scale, const Vector3& rot, const Vector3& translate);

//À•W•ÔŠÒ
Vector3 Transform(const Vector3& vector, const Matrix4x4& matrix);