#pragma once

#include "ShotBase.h"

class ShotUp : public ShotBase
{
public:
	ShotUp()
	{
	}
	virtual ~ShotUp()
	{
	}

	// �V���b�g�J�n
	virtual void start(Vec2 pos);
	// �X�V
	virtual void update();
};