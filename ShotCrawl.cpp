#include "game.h"
#include "ShotCrawl.h"

namespace
{
	constexpr float kShotSpeedX = 8.0f;
	constexpr float kShotSpeedY = 0.5f;
	// èdóÕ
	constexpr float kGrabity = 0.5f;
}

void ShotCrawl::start(Vec2 pos)
{
	ShotBase::start(pos);

	m_vec.x = kShotSpeedX;
	m_vec.y = kShotSpeedY;
}

void ShotCrawl::update()
{
	if (!m_isExist) return;
	m_pos += m_vec;

	if (m_isExist)
	{
		m_vec.y += kGrabity;
		if (m_pos.y < 0)
		{
			m_vec.y = 0;
			m_vec.x = -kShotSpeedX;
		}
		else if (m_pos.x > Game::kScreenWidth - 16)
		{
			m_vec.y = -8.0f;
			m_vec.x = 0;
		}
		else if (m_pos.y > Game::kScreenHeight - 16)
		{
			m_vec.y = 0;
		}
	}

	if (m_pos.x < 0)
	{
		m_isExist = false;
	}
}