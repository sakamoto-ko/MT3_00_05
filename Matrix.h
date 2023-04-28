#pragma once
#include"base.h"

//���Z
Matrix4x4 Add(const Matrix4x4& m1, const Matrix4x4& m2);
//���Z
Matrix4x4 Subtract(const Matrix4x4& m1, const Matrix4x4& m2);
//��
Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2);
//�t�s��
Matrix4x4 Inverse(const Matrix4x4& m);
//�]�u�s��
Matrix4x4 Transpose(const Matrix4x4& m);
//�P�ʍs��
Matrix4x4 MakeIdenttity4x4();

//�����o��
void MatrixScreenPrintf(int x, int y, const Matrix4x4& matrix, const char* label);

// ���s�ړ��s��
Matrix4x4 MakeTranslateMatrix(const Vector3& translate);

// X����]
Matrix4x4 MakeRotateXMatrix(float radian);
// Y����]
Matrix4x4 MakeRotateYMatrix(float radian);
// Z����]
Matrix4x4 MakeRotateZMatrix(float radian);
// ��]�s��
Matrix4x4 MakeRotateMatrix(const Vector3& radian);

// �g��k���s��
Matrix4x4 MakeScaleMatrix(const Vector3& scale);

//�A�t�B���ϊ��s��
Matrix4x4 MakeAffineMatrix(const Vector3& scale, const Vector3& rot, const Vector3& translate);

//���W�Ԋ�
Vector3 Transform(const Vector3& vector, const Matrix4x4& matrix);