/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class NSUUID, NSDate, NSNumber;

@interface CMNatalieData : CMLogItem {

	long long fRecordId;
	double fStartDate;
	long long fActivityType;
	double fMets;
	double fNatalies;
	double fBasalNatalies;
	NSUUID* fSourceId;

}

@property (nonatomic,readonly) long long recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSNumber * mets; 
@property (nonatomic,readonly) NSNumber * natalies; 
@property (nonatomic,readonly) NSNumber * basalNatalies; 
@property (nonatomic,readonly) long long activityType; 
+(BOOL)supportsSecureCoding;
+(id)maxNatalieEntries;
-(NSNumber *)mets;
-(long long)activityType;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)sourceId;
-(NSDate *)startDate;
-(id)description;
-(long long)recordId;
-(NSNumber *)natalies;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStartDate:(double)arg1 recordId:(long long)arg2 activityType:(long long)arg3 mets:(double)arg4 natalies:(double)arg5 basalNatalies:(double)arg6 sourceId:(id)arg7 ;
-(NSNumber *)basalNatalies;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

