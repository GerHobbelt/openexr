
#pragma once

#if defined(BUILD_MONOLITHIC)

#ifdef __cplusplus
extern "C" {
#endif

int OpenEXR_b44ExpLogTable_tool_main (void);
int OpenEXR_deepIdSelect_example_main (int argc, const char** argv);
int OpenEXR_deepId_example_main (int argc, const char** argv);
int OpenEXR_examples_main (int argc, const char** argv);
int OpenEXR_exr2aces_main (int argc, const char** argv);
int OpenEXR_exrcheck_main (int argc, const char** argv);
int OpenEXR_exrenvmap_main (int argc, const char** argv);
int OpenEXR_exrheader_main (int argc, const char** argv);
int OpenEXR_exrinfo_main (int argc, const char** argv);
int OpenEXR_exrmakepreview_main (int argc, const char** argv);
int OpenEXR_exrmaketiled_main (int argc, const char** argv);
int OpenEXR_exrmanifest_main (int argc, const char** argv);
int OpenEXR_exrmetrics_main (int argc, const char** argv);
int OpenEXR_exrmultipart_main (int argc, const char** argv);
int OpenEXR_exrmultiview_main (int argc, const char** argv);
int OpenEXR_exrstdattr_main (int argc, const char** argv);

#ifdef __cplusplus
}
#endif

#endif
