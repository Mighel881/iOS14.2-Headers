/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CommonUtilities/CUTCheckpointRange.h>

@class NSMutableArray;

@interface CUTCheckpointTrace : CUTCheckpointRange {

	NSMutableArray* _mutableCheckpoints;

}

@property (nonatomic,retain) NSMutableArray * mutableCheckpoints;              //@synthesize mutableCheckpoints=_mutableCheckpoints - In the implementation block
-(void)freeze;
-(void)_appendReportToMutableString:(id)arg1 indentation:(long long)arg2 paddedNameLength:(long long)arg3 ;
-(void)setAssertsUseAfterFreeze:(BOOL)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4 ;
-(NSMutableArray *)mutableCheckpoints;
-(id)checkpoints;
-(id)instantCheckpointWithName:(id)arg1 extraIdentifier:(id)arg2 ;
-(id)_identifierWithExtraIdentifier:(id)arg1 ;
-(id)appendCheckpoint:(id)arg1 ;
-(id)rangeCheckpointWithName:(id)arg1 extraIdentifier:(id)arg2 ;
-(id)instantCheckpointWithName:(id)arg1 ;
-(id)rangeCheckpointWithName:(id)arg1 ;
-(void)setMutableCheckpoints:(NSMutableArray *)arg1 ;
-(id)description;
@end
