#include "stdafx.h"
#include <iostream>
#include "transport.h"

transp::Transport::Transport()
{
	maxSpeed = 0;
	maxLoad = 0;
	weight = 0;
}

void transp::Transport::set_maxSpeed(int maxSpeed)
{
	Transport::maxSpeed = maxSpeed;
}

unsigned int transp::Transport::get_maxSpeed()
{
	return transp::Transport::maxSpeed;
}

void transp::Transport::set_maxLoad(int maxLoad)
{
	Transport::maxLoad = maxLoad;
}

unsigned int transp::Transport::get_maxLoad()
{
	return maxLoad;
}

void transp::Transport::set_weight(int weight)
{
	Transport::weight = weight;
}

unsigned int transp::Transport::get_weight()
{
	return weight;
}

void transp::Transport::hit_the_road()
{
	std::cout << "Let's go!" << std::endl;
}


transp::Air_Transport::Air_Transport() : 
	transp::Transport::Transport()
{
	maxHeight = 0;
	haveEngine = false;
}

void transp::Air_Transport::set_maxHeight(int maxHeight)
{
	Air_Transport::maxHeight = maxHeight;
}

unsigned int transp::Air_Transport::get_maxHeight()
{
	return maxHeight;
}

void transp::Air_Transport::set_haveEngine(int maxLoad)
{
	Air_Transport::weight = weight;
}

bool transp::Air_Transport::get_haveEngine()
{
	return haveEngine;
}


transp::Ground_Transport::Ground_Transport() :
	transp::Transport::Transport()
{
	wheelsCount = 4;
	engineType = "diesel";
}

void transp::Ground_Transport::set_wheelsCount(unsigned int wheelsCount)
{
	Ground_Transport::wheelsCount = wheelsCount;
}

int transp::Ground_Transport::get_wheelsCount()
{
	return wheelsCount;
}

void transp::Ground_Transport::set_engineType(std::string engineType)
{
	Ground_Transport::engineType = engineType;
}

std::string transp::Ground_Transport::get_engineType()
{
	return engineType;
}


