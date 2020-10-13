#include <string>

#pragma once
#ifndef TRANSPORT_H
#define TRANSPORT_H

namespace transp
{
	class Transport
	{
	protected:
		unsigned int maxSpeed;
		unsigned int maxLoad;
		unsigned int weight;
	public:
		Transport();

		void set_maxSpeed(int maxSpeed);

		unsigned int get_maxSpeed();

		void set_maxLoad(int maxLoad);

		unsigned int get_maxLoad();

		void set_weight(int weight);

		unsigned int get_weight();

		virtual void hit_the_road();
	};


	class Air_Transport : public Transport
	{
	protected:
		unsigned int maxHeight;
		bool haveEngine;
	public:
		Air_Transport();

		void set_maxHeight(int maxHeight);

		unsigned int get_maxHeight();

		void set_haveEngine(int maxLoad);

		bool get_haveEngine();
	};


	class Ground_Transport : public Transport
	{
	protected:
		unsigned int wheelsCount;
		std::string engineType;
	public:
		Ground_Transport();

		void set_wheelsCount(unsigned int wheelsCount);

		int get_wheelsCount();

		void set_engineType(std::string engineType);

		std::string get_engineType();
	};
