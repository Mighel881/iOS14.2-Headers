/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CPLDiffTracker, NSArray;

@interface CPLRecordChangeDiffTracker : NSObject {

	CPLDiffTracker* _diffTracker;
	unsigned long long _trackingChangeType;

}

@property (nonatomic,readonly) NSArray * updatedProperties; 
-(id)redactedDescription;
-(id)init;
-(id)description;
-(NSArray *)updatedProperties;
-(void)withTrackerForChangeType:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithTrackingChangeTypeMask:(unsigned long long)arg1 ;
-(BOOL)areObjectsDifferentOnProperty:(id)arg1 changeType:(unsigned long long)arg2 ;
@end

