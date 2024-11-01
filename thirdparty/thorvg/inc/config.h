#ifndef THORVG_CONFIG_H
#define THORVG_CONFIG_H

#define THORVG_SW_RASTER_SUPPORT
#define THORVG_SVG_LOADER_SUPPORT
#define THORVG_PNG_LOADER_SUPPORT
#define THORVG_JPG_LOADER_SUPPORT
#ifndef WEB_ENABLED
#define THORVG_THREAD_SUPPORT
#endif

// Added conditionally if webp module is enabled.
//#define THORVG_WEBP_LOADER_SUPPORT

// For internal debugging:
//#define THORVG_LOG_ENABLED

<<<<<<< HEAD
#define THORVG_VERSION_STRING "0.14.9"
=======
#define THORVG_VERSION_STRING "0.14.10"
>>>>>>> fe559082795c8e0f733d66dd8b99633121e2533a
#endif
