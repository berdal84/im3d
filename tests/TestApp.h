#pragma once
#ifndef im3d_TestApp_h
#define im3d_TestApp_h

namespace Im3d {

class TestApp
{
public:
	TestApp();

	bool        init(int _width, int _height, const char* _title);
	void        shutdown();

	bool        update();
	bool        draw();

	int         getWidth() const    { return m_width;  }
	int         getHeight() const   { return m_height; }
	const char* getTitle() const    { return m_title;  }

private:
	int         m_width, m_height; // viewport size (pixels)
	const char* m_title;
	float       m_deltaTime;

 
	struct      Impl;
	Impl*       m_impl;
};


} // namespace Im3d


#endif // im3d_TestApp_h
