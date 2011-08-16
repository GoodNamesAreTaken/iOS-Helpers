//
//  Logging.h
//  Hess EMF
//
//  Created by Sergei Tatarintsev on 19.04.11.
//  Copyright 2011 Appital Mobile. All rights reserved.
//


//Macro to prevent logging output in release builds
#ifdef DEBUG

#define AppLog NSLog
#define APIXMLLogs YES

#else

#define AppLog(args...)
#define APIXMLLogs NO
#endif