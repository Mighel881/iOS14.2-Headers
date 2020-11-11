/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSPDigest, NSString;

@interface TSPDataUniqueIdentifier : NSObject <NSCopying> {

	TSPDigest* _digest;

}

@property (nonatomic,readonly) TSPDigest * digest;                   //@synthesize digest=_digest - In the implementation block
@property (nonatomic,readonly) NSString * digestString; 
-(id)init;
-(unsigned long long)hash;
-(TSPDigest *)digest;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDigest:(id)arg1 ;
-(NSString *)digestString;
@end
