// Copyright (c) 2019, Zpalmtree
//
// Please see the included LICENSE file for more information.

#pragma once

#include <tuple>
#include <string>
#include <vector>

std::vector<std::tuple<std::string, bool, int>> getNvidiaDevicesActual();

void printNvidiaHeader();

uint32_t getNoncesPerRun(const size_t scratchpadSize, const uint32_t gpuIndex);
