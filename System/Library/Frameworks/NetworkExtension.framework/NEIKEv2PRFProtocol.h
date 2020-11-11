/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEIKEv2PRFProtocol : NSObject <NSCopying> {

	unsigned long long _type;

}

@property (readonly) unsigned length; 
@property (assign) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(unsigned long long)hash;
-(unsigned)length;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
