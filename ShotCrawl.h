#pragma once

#include "ShotBase.h"

class ShotCrawl : public ShotBase
{
public:
	ShotCrawl()
	{
	}
	virtual ~ShotCrawl()
	{
	}

	// �V���b�g�J�n
	virtual void start(Vec2 pos);
	// �X�V
	virtual void update();
};