#if ((defined(_MSC_VER) && (_MSC_VER >= 1800)) || __MINGW32__ || __MINGW64__)
#include <string>
const std::string& GetExcludedBlocksRegEx() {
static const std::string sRegExString = R"((^((?!(SimCtrl|DYNA4_Reset|DYNA4_Signal_Access|DataDir|ParameterFiles)).)*$))";
return sRegExString; }
#endif
