#pragma once
#pragma once
#include <Novice.h>
#define _USE_MATH_DEFIENS
#include <math.h>
#include <cmath>
#include <assert.h>

#define kWindowWidth 1280
#define kWindowHeight 720

static const int kRowHeight = 20;
static const int kColumnWidth = 60;

struct Vector2 {
	float x;
	float y;
};
struct Vector3 {
	float x;
	float y;
	float z;
};
struct Vector4 {
	float x;
	float y;
	float z;
	float w;
};

struct Matrix2x2 {
	float m[2][2];
};
struct Matrix3x3 {
	float m[3][3];
};
struct Matrix4x4 {
	float m[4][4];
};