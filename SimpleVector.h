#pragma once
#include<cmath>

class Vector2D
{
public:
	/// @brief ベクトルの横成分
	double x;
	/// @brief ベクトルの縦成分
	double y;

	/// @brief ベクトルの成分を設定します
	/// @param x 
	/// @param y 
	Vector2D(double x, double y) noexcept;

	/// @brief ベクトルの成分を一つの値で設定します
	/// @param xy
	Vector2D(double xy) noexcept;
	
	/// @brief ベクトルの大きさが1になるベクトルを求めます
	/// @return 
	Vector2D normalize() const;

	/// @brief ベクトルの大きさを求めます
	/// @return 
	double magnitude() const;

	Vector2D operator+=(const Vector2D& in);
	Vector2D operator-=(const Vector2D& in);
	Vector2D operator*=(const Vector2D& in);
	
	friend Vector2D operator+(const Vector2D& a, const Vector2D& b);
	friend Vector2D operator-(const Vector2D& a, const Vector2D& b);
	friend Vector2D operator*(const Vector2D& a, const Vector2D& b);
};


