/*
 *  FileUtils.h
 *  iOS Helpers
 *
 *  Created by Sergej Tatarincev on 01.11.10.
 *  Copyright 2010 GoodNamesAreTaken. All rights reserved.
 *
 */
#ifndef FILE_UTILS_H
#define FILE_UTILS_H


inline static NSString* filePathInDirectory(NSString* fileName, NSSearchPathDirectory directory) {
    NSArray* paths = NSSearchPathForDirectoriesInDomains(directory, NSUserDomainMask, YES);
	return [[paths objectAtIndex:0] stringByAppendingPathComponent:fileName];
}

inline static NSString* documentsFilePath(NSString* fileName) {
	return filePathInDirectory(fileName, NSDocumentDirectory);
}

inline static NSString* cachesFilePath(NSString* fileName) {
    return filePathInDirectory(fileName, NSCachesDirectory);
}

inline static NSString* bundlePath(NSString* fileName) {
	return [[NSBundle mainBundle] pathForResource:[fileName stringByDeletingPathExtension] ofType:[fileName pathExtension]];
}

inline static BOOL createDirectory(NSString* dirName) {
	return [[NSFileManager defaultManager] createDirectoryAtPath:dirName withIntermediateDirectories:YES attributes:nil error:nil];
}

#endif
