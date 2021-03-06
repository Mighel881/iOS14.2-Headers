/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableArray;

@interface PXDateRangeSet : NSObject <NSCopying, NSMutableCopying> {

	NSMutableArray* __dateRanges;

}

@property (nonatomic,retain) NSMutableArray * _dateRanges;              //@synthesize _dateRanges=__dateRanges - In the implementation block
@property (nonatomic,readonly) long long count; 
+(id)dateRangeSetWithDateRange:(id)arg1 ;
+(id)dateRangeSet;
-(id)init;
-(id)dateRanges;
-(long long)count;
-(NSMutableArray *)_dateRanges;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithDateRange:(id)arg1 ;
-(void)set_dateRanges:(NSMutableArray *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

