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

	// ショット開始
	virtual void start(Vec2 pos);
	// 更新
	virtual void update();
};