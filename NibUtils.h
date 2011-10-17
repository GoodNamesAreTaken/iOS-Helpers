/*
 *  NibUtils.h
 *  iOS Helpers
 *
 *  Created by Sergej Tatarincev on 15.03.11.
 *  Copyright 2011 GoodNamesAreTaken. All rights reserved.
 *
 */

#ifndef NIB_UTILS_H
#define NIB_UTILS_H

inline static id loadObjectFormNib(NSString* nibName, Class cls) {
	id nib = [[NSBundle mainBundle] loadNibNamed:nibName owner:nil options:nil];
	
	for (id object in nib) {
		if ([object isKindOfClass:cls]) {
			return object;
		}
	}
	return nil;
}
#endif