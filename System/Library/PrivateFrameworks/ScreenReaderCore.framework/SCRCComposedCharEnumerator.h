/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSEnumerator.h>

@class NSString;

@interface SCRCComposedCharEnumerator : NSEnumerator {

	BOOL _done;
	NSString* _string;
	unsigned long long _indexOfCurrentComposedCharacter;

}
-(id)nextObject;
-(id)initWithString:(id)arg1 ;
-(id)allObjects;
@end
