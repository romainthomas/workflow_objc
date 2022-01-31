/*
 * Copyright (c) 2022 Jon Palmisciano. All rights reserved.
 *
 * Use of this source code is governed by the BSD 3-Clause license; the full
 * terms of the license can be found in the LICENSE.txt file.
 */

#pragma once

#include <ObjectiveNinjaCore/Analyzer.h>

namespace ObjectiveNinja {

/**
 * Basic analyzer for identifying and recording CFString instances.
 *
 * CFStringAnalyzer processes the `__cfstring` section in the binary and records
 * information about all the CFString instances present.
 */
class CFStringAnalyzer : public Analyzer {
public:
    CFStringAnalyzer(SharedAnalysisInfo, SharedAbstractFile);

    void run() override;
};

}