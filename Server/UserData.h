#pragma once

struct Position2D 
{
	UINT8 x;
	UINT8 y;

	Position2D(const UINT8 inPositionX, const UINT8 inPositionY) noexcept;
};

/*
	UserData
	 - 유저 데이터를 정의합니다.

	#0. Position2D
		- 해당 객체의 위치값을 정의합니다.
*/
class UserData 
{
	Position2D position;

public:
	UserData(const UINT8 inPositionX, const UINT8 inPositionY) noexcept;
	~UserData() = default;

public:
	
public:
	/*_NODISCARD*/ inline Position2D GetPosition() const noexcept { return position; }
	inline void SetPosition(const Position2D& inNewPosition) noexcept { position = inNewPosition; }
	inline void SetPosition(const UINT8 inNewPositionX, const UINT8 inNewPositionY) noexcept 
	{
		position.x = inNewPositionX; position.y = inNewPositionY;
	}
};