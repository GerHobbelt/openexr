//
// SPDX-License-Identifier: BSD-3-Clause
// Copyright (c) Contributors to the OpenEXR Project.
//

#include "generalInterfaceExamples.h"
#include "generalInterfaceTiledExamples.h"
#include "lowLevelIoExamples.h"
#include "previewImageExamples.h"
#include "rgbaInterfaceExamples.h"
#include "rgbaInterfaceTiledExamples.h"
#include "deepExamples.h"
#include "deepTiledExamples.h"
#include "multipartExamples.h"

#include <iostream>
#include <stdexcept>

#if defined(BUILD_MONOLITHIC)
#    define main OpenEXR_examples_main
#endif

extern "C" int
main (int argc, const char** argv)
{
    try
    {
        rgbaInterfaceExamples ();
        generalInterfaceExamples ();

        rgbaInterfaceTiledExamples ();
        generalInterfaceTiledExamples ();

        deepExamples ();
        deepTiledExamples ();

        lowLevelIoExamples ();

        previewImageExamples ();

        // This example uses the files created by
        //   generalInterfaceExamples,
        //   generalInterfaceTiledExamples,
        //   deepExamples,
        //   deepTiledExamples
        multipartExamples ();
    }
    catch (const std::exception& exc)
    {
        std::cerr << exc.what () << std::endl;
        return 1;
    }

    return 0;
}
