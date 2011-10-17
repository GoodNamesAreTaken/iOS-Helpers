//
//  Logging.h
//  iOS Helpers
//
//  Created by Sergej Tatarincev on 19.04.11.
//  Copyright 2011 GoodNamesAreTaken. All rights reserved.
//


//Macro to prevent logging output in release builds
#ifdef DEBUG

#define AppLog NSLog

#else

#define AppLog(args...)

#endif