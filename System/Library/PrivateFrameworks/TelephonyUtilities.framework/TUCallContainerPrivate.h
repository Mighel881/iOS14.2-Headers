/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, TUCall;


@protocol TUCallContainerPrivate <TUCallContainer>
@property (nonatomic,copy,readonly) NSArray * _allCalls; 
@property (nonatomic,readonly) TUCall * displayedCall; 
@property (nonatomic,readonly) TUCall * conferenceCall; 
@property (nonatomic,readonly) TUCall * frontmostCall; 
@property (nonatomic,retain,readonly) TUCall * frontmostAudioOrVideoCall; 
@property (nonatomic,readonly) BOOL existingCallsHaveMultipleProviders; 
@required
-(TUCall *)conferenceCall;
-(TUCall *)displayedCall;
-(BOOL)existingCallsHaveMultipleProviders;
-(NSArray *)_allCalls;
-(id)callPassingTest:(/*^block*/id)arg1 sortedUsingComparator:(/*^block*/id)arg2;
-(TUCall *)frontmostAudioOrVideoCall;
-(TUCall *)frontmostCall;

@end

