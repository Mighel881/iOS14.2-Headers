/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKInkKey : NSObject <NSCopying> {

	NSString* _identifier;
	unsigned long long _version;
	NSString* _variant;

}

@property (nonatomic,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSString * variant;                 //@synthesize variant=_variant - In the implementation block
-(unsigned long long)hash;
-(unsigned long long)version;
-(NSString *)identifier;
-(NSString *)variant;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 version:(unsigned long long)arg2 variant:(id)arg3 ;
@end
