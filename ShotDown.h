#pragma once

#include "ShotBase.h"

class ShotDown : public ShotBase
{
public:
	ShotDown()
	{
	}
	virtual ~ShotDown()
	{
	}

	// �V���b�g�J�n
	virtual void start(Vec2 pos);
	// �X�V
	virtual void update();
};