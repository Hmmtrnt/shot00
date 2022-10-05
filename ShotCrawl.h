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

	// ショット開始
	virtual void start(Vec2 pos);
	// 更新
	virtual void update();
};