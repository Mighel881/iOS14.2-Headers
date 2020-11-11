/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface PXContentFilterGroup : NSObject <NSCopying> {

	NSString* _name;
	NSArray* _filterIdentifiers;

}

@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * filterIdentifiers;              //@synthesize filterIdentifiers=_filterIdentifiers - In the implementation block
+(id)groupWithName:(id)arg1 filterIdentifiers:(id)arg2 ;
-(id)init;
-(unsigned long long)hash;
-(NSString *)name;
-(id)initWithName:(id)arg1 filterIdentifiers:(id)arg2 ;
-(NSArray *)filterIdentifiers;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
