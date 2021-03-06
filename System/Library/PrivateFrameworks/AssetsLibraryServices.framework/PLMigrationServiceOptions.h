/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PLMigrationServiceOptions : NSObject <NSCopying, NSSecureCoding> {

	unsigned short _option;
	NSString* _clientBundleId;
	NSString* _suggestedDestinationName;

}

@property (readonly) NSString * clientBundleId;                    //@synthesize clientBundleId=_clientBundleId - In the implementation block
@property (copy) NSString * suggestedDestinationName;              //@synthesize suggestedDestinationName=_suggestedDestinationName - In the implementation block
@property (assign) unsigned short option;                          //@synthesize option=_option - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(unsigned short)option;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOption:(unsigned short)arg1 ;
-(NSString *)clientBundleId;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isPMSOption:(unsigned short)arg1 ;
-(id)nameForOption:(unsigned short)arg1 ;
-(NSString *)suggestedDestinationName;
-(void)setSuggestedDestinationName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

