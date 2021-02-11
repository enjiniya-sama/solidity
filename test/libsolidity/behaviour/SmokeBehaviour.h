/*
	This file is part of solidity.
	solidity is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.
	solidity is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.
	You should have received a copy of the GNU General Public License
	along with solidity.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include <iostream>
#include <test/libsolidity/Behaviour.h>

namespace solidity::frontend::test
{
class SmokeBehaviour: public Behaviour
{
public:
	SmokeBehaviour() = default;
	~SmokeBehaviour() override = default;

	void begin() override {}
	void before([[maybe_unused]] TestFunctionCall const& _call) override {}
	void after([[maybe_unused]] TestFunctionCall const& _call) override {}
	void end() override {}

	bool isValid([[maybe_unused]] TestFunctionCall const& _call) override { return true; }

	std::string format(
		[[maybe_unused]] TestFunctionCall const& _call,
		[[maybe_unused]] ErrorReporter& _errorReporter,
		[[maybe_unused]] std::string const& _linePrefix,
		[[maybe_unused]] const bool _renderResult,
		[[maybe_unused]] const bool _highlight) const override
	{
		return "";
	}
};

} // namespace  solidity::frontend::test
