/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuickLook/QLPXNumberFilter.h>

@class NSArray;

@interface QLPXCompoundNumberFilter : QLPXNumberFilter {

	NSArray* _filters;

}

@property (nonatomic,copy) NSArray * filters;              //@synthesize filters=_filters - In the implementation block
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
-(double)updatedOutput;
@end

