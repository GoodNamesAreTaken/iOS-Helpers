//
//  UUID.h
//  SocialFramework
//
//  Created by Sergej Tatarincev on 10.11.11.
//  Copyright (c) 2011 GoodNamesAreTaken. All rights reserved.
//

#ifndef UUID_h
#define UUID_h

inline static NSString* generateUUID() {
    CFUUIDRef uuidRef = CFUUIDCreate(NULL);
    
    CFStringRef uuidString = CFUUIDCreateString(NULL, uuidRef);
    
    NSString* result = [[(NSString*)uuidString copy] autorelease];
    CFRelease(uuidString);
    CFRelease(uuidRef);
    return result;
}


#endif
