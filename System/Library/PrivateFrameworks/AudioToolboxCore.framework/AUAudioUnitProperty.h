/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AUAudioUnitProperty : NSObject <NSSecureCoding> {

	NSString* _key;
	unsigned _v2propID;
	unsigned _scope;
	unsigned _element;

}
+(id)propertyWithKey:(id)arg1 ;
+(id)propertyWithKey:(id)arg1 scope:(unsigned)arg2 element:(unsigned)arg3 ;
+(id)propertyWithKey:(id)arg1 v2propID:(unsigned)arg2 scope:(unsigned)arg3 element:(unsigned)arg4 ;
+(BOOL)supportsSecureCoding;
-(id)initWithKey:(id)arg1 scope:(unsigned)arg2 element:(unsigned)arg3 ;
-(id)initWithKey:(id)arg1 v2propID:(unsigned)arg2 scope:(unsigned)arg3 element:(unsigned)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end
