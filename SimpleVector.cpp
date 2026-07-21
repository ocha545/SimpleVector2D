#include"SimpleVector.h"

Vector2D::Vector2D(double x, double y) noexcept
	: x(x), y(y)
{
}
Vector2D::Vector2D(double xy) noexcept
	: x(xy), y(xy)
{
}

Vector2D Vector2D::normalize() const
{
	return Vector2D{ x / magnitude(), y / magnitude() };
}
double Vector2D::magnitude() const
{
	return std::sqrt(x * x + y * y);
}

Vector2D Vector2D::operator+=(const Vector2D& in)
{
	return (*this) + in;
}
Vector2D Vector2D::operator-=(const Vector2D& in)
{
	return (*this) - in;
}
Vector2D Vector2D::operator*=(const Vector2D& in)
{
	return (*this) * in;
}

Vector2D operator+(const Vector2D& a, const Vector2D& b)
{
	return Vector2D {
		a.x + b.x,
		a.y + b.y
	};
}
Vector2D operator-(const Vector2D& a, const Vector2D& b)
{
	return Vector2D {
		a.x - b.x,
		a.y - b.y
	};
}
Vector2D operator*(const Vector2D& a, const Vector2D& b)
{
	return Vector2D{
		a.x * b.x,
		a.y * b.y
	};
}
