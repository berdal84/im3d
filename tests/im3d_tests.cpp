#include "common.h"
#include "TestApp.h"

#include <cstdio>

using namespace Im3d;

template <typename T>
int GetSize();
	template <> int GetSize<Vec2>() { return 2;  }
	template <> int GetSize<Vec3>() { return 3;  }
	template <> int GetSize<Vec4>() { return 4;  }

void Print(const Vec2& _v)  { printf("(%f, %f)",         _v.x, _v.y);                  }
void Print(const Vec3& _v)  { printf("(%f, %f, %f)",     _v.x, _v.y, _v.z);            }
void Print(const Vec4& _v)  { printf("(%f, %f, %f, %f)", _v.x, _v.y, _v.z, _v.w);      }
void Print(Color _c)        { printf("%.8x = ", _c.v); Print(Vec4(_c)); printf("\n"); }

int main(int, char**)
{
	TestApp app;
	app.init(-1, -1, "Im3d Tests");
	Sleep(1000);
	app.shutdown();

	return 0;
}