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

	// ショット開始
	virtual void start(Vec2 pos);
	// 更新
	virtual void update();
};