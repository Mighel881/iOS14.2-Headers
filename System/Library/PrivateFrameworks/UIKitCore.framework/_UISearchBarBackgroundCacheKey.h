/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UISearchBarBackgroundCacheKey : NSObject <NSCopying> {

	long long _barPosition;
	BOOL _usesContiguousBarBackground;
	double _scale;
	double _alpha;
	double _height;
	double _statusBarHeight;
	CGColorRef _backgroundColor;
	CGColorRef _strokeColor;

}
-(id)initWithBarPosition:(long long)arg1 usesContiguousBarBackground:(BOOL)arg2 scale:(double)arg3 alpha:(double)arg4 height:(double)arg5 statusBarHeight:(double)arg6 backgroundColor:(CGColorRef)arg7 strokeColor:(CGColorRef)arg8 ;
-(unsigned long long)hash;
-(BOOL)isEqualToCacheKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end
