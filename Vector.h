#pragma once

#include "base.h"

//���Z
Vector3 Add(const Vector3& v1, const Vector3& v2);
//���Z
Vector3 Subtract(const Vector3& v1, const Vector3& v2);
//�X�J���[�{
Vector3 Multiply(float scalar, const Vector3& v);
//����
float Dot(const Vector3& v1, const Vector3& v2);
//����
float Length(const Vector3& v);
//���K��
Vector3 Normalize(const Vector3& v);

//�����o��
void VectorScreenPrintf(int x, int y, Vector3& vector, const char* label);