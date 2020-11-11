/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, PKVerificationChannel, NSArray, NSDictionary;

@interface PKVerificationRequestRecord : NSObject <NSSecureCoding> {

	NSString* _currentStepIdentifier;
	NSString* _previousStepIdentifier;
	long long _verificationStatus;
	NSString* _passUniqueID;
	NSDate* _date;
	PKVerificationChannel* _channel;
	NSArray* _allChannels;
	NSDictionary* _requiredFieldData;

}

@property (nonatomic,copy) NSString * currentStepIdentifier;               //@synthesize currentStepIdentifier=_currentStepIdentifier - In the implementation block
@property (nonatomic,copy) NSString * previousStepIdentifier;              //@synthesize previousStepIdentifier=_previousStepIdentifier - In the implementation block
@property (assign,nonatomic) long long verificationStatus;                 //@synthesize verificationStatus=_verificationStatus - In the implementation block
@property (nonatomic,copy) NSString * passUniqueID;                        //@synthesize passUniqueID=_passUniqueID - In the implementation block
@property (nonatomic,copy) NSDate * date;                                  //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) PKVerificationChannel * channel;                //@synthesize channel=_channel - In the implementation block
@property (nonatomic,copy) NSArray * allChannels;                          //@synthesize allChannels=_allChannels - In the implementation block
@property (nonatomic,copy) NSDictionary * requiredFieldData;               //@synthesize requiredFieldData=_requiredFieldData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)verificationRequestRecordForPass:(id)arg1 ;
-(PKVerificationChannel *)channel;
-(long long)verificationStatus;
-(void)setDate:(NSDate *)arg1 ;
-(void)setChannel:(PKVerificationChannel *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)previousStepIdentifier;
-(void)setPreviousStepIdentifier:(NSString *)arg1 ;
-(void)setAllChannels:(NSArray *)arg1 ;
-(void)setVerificationStatus:(long long)arg1 ;
-(NSString *)passUniqueID;
-(void)setCurrentStepIdentifier:(NSString *)arg1 ;
-(void)setRequiredFieldData:(NSDictionary *)arg1 ;
-(NSArray *)allChannels;
-(void)setPassUniqueID:(NSString *)arg1 ;
-(NSDictionary *)requiredFieldData;
-(NSString *)currentStepIdentifier;
-(id)requiredVerificationFields;
@end
