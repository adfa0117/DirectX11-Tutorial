#pragma once

class InputClass
{
public:
	InputClass();
	InputClass(const InputClass&) = delete;
	~InputClass();

	void Initialize();

	void KeyDown(unsigned int);
	void KeyUp(unsigned int);

	bool IsKeyDown(unsigned int);

private:
	bool m_keys[256];
};

