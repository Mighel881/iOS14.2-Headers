/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BookDataStore/BCMutableCloudData.h>
#import <libobjc.A.dylib/BCReadingNowDetail.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, CKRecord, NSData;

@interface BCMutableReadingNowDetail : BCMutableCloudData <BCReadingNowDetail, NSSecureCoding> {

	BOOL _isTrackedAsRecent;
	NSString* _assetID;
	NSDate* _lastEngagedDate;

}

@property (nonatomic,copy) NSString * assetID;                                                   //@synthesize assetID=_assetID - In the implementation block
@property (assign,nonatomic) BOOL isTrackedAsRecent;                                             //@synthesize isTrackedAsRecent=_isTrackedAsRecent - In the implementation block
@property (nonatomic,copy) NSDate * lastEngagedDate;                                             //@synthesize lastEngagedDate=_lastEngagedDate - In the implementation block
@property (nonatomic,readonly) BOOL deletedFlag; 
@property (nonatomic,copy,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) long long editGeneration; 
@property (nonatomic,readonly) long long syncGeneration; 
@property (nonatomic,copy,readonly) CKRecord * systemFields; 
@property (nonatomic,copy,readonly) NSData * ckSystemFields; 
@property (assign,nonatomic,__weak) id<BCCloudDataPrivacyDelegate> privacyDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)zoneName;
-(void)setAssetID:(NSString *)arg1 ;
-(id)recordType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)identifier;
-(void)setLastEngagedDate:(NSDate *)arg1 ;
-(NSDate *)lastEngagedDate;
-(id)initWithRecord:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)assetID;
-(id)initWithCloudData:(id)arg1 ;
-(id)configuredRecordFromAttributes;
-(id)initWithAssetID:(id)arg1 ;
-(BOOL)isTrackedAsRecent;
-(void)setIsTrackedAsRecent:(BOOL)arg1 ;
@end

