/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXUserDefaultsDataSource.h>

@protocol OS_dispatch_queue;
@class NSDate, NSObject;

@interface PXUserDefaultsStandardDataSource : NSObject <PXUserDefaultsDataSource> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSDate * currentDate; 
-(NSDate *)currentDate;
-(id)init;
-(void)setPersistedValue:(id)arg1 forKey:(id)arg2 ;
-(id)persistedValueForKey:(id)arg1 ;
@end

