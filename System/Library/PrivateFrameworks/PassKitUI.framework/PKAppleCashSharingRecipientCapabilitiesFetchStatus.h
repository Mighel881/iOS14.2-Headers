/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSDate, NSError, PKFamilyMember, NSArray;

@interface PKAppleCashSharingRecipientCapabilitiesFetchStatus : NSObject {

	NSMutableArray* _fetchedCapabilities;
	BOOL _fetchInProgress;
	long long _maximumPossibleDevices;
	NSDate* _fetchStartDate;
	NSError* _fetchError;
	PKFamilyMember* _familyMember;

}

@property (nonatomic,copy) NSArray * fetchedCapabilities;                   //@synthesize fetchedCapabilities=_fetchedCapabilities - In the implementation block
@property (assign,nonatomic) long long maximumPossibleDevices;              //@synthesize maximumPossibleDevices=_maximumPossibleDevices - In the implementation block
@property (assign,nonatomic) BOOL fetchInProgress;                          //@synthesize fetchInProgress=_fetchInProgress - In the implementation block
@property (nonatomic,copy) NSError * fetchError;                            //@synthesize fetchError=_fetchError - In the implementation block
@property (nonatomic,copy,readonly) NSDate * fetchStartDate;                //@synthesize fetchStartDate=_fetchStartDate - In the implementation block
@property (nonatomic,readonly) PKFamilyMember * familyMember;               //@synthesize familyMember=_familyMember - In the implementation block
-(NSError *)fetchError;
-(NSDate *)fetchStartDate;
-(id)description;
-(BOOL)fetchInProgress;
-(long long)secondsPassedSinceFetchStart;
-(void)setFetchInProgress:(BOOL)arg1 ;
-(void)addAppleCashSharingRecipientCapabilities:(id)arg1 ;
-(id)initWithFamilyMember:(id)arg1 fetchStartDate:(id)arg2 ;
-(void)setMaximumPossibleDevices:(long long)arg1 ;
-(long long)maximumPossibleDevices;
-(void)setFetchedCapabilities:(NSArray *)arg1 ;
-(BOOL)allPossibleCapabilitiesFetched;
-(NSArray *)fetchedCapabilities;
-(void)setFetchError:(NSError *)arg1 ;
-(PKFamilyMember *)familyMember;
@end

