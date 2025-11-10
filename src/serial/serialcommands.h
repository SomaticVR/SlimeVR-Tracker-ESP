/*
	SlimeVR Code is placed under the MIT license
	Copyright (c) 2021 Eiren Rain

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in
	all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
	THE SOFTWARE.
*/

#ifndef SLIMEVR_SERIALCOMMANDS_H_
#define SLIMEVR_SERIALCOMMANDS_H_

namespace SerialCommands {
/**
 * @brief Unclear what exactly the function from <CmdCallback.hpp> is doing. Need
 * to investigate that documentation. [Is it this?](https://github.com/pvizeli/CmdParser/blob/master/src/CmdCallback.hpp)
 */
void setUp();
/**
 * @brief Calls upon 'cmdCallback' class method updateCmdProcessing(&cmdParser, 
 *  &cmdBuffer, &Serial), need to see class to understand this.
 */
void update();
/**
 * @brief Calls upon 'Logger' class method info(const char* str, ...) from 
 * "logging/Logger.h" which takes variable number of strings and ints to print.
 */
void printState();
}  // namespace SerialCommands

#endif  // SLIMEVR_SERIALCOMMANDS_H_
