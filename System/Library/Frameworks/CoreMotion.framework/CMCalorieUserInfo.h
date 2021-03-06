/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMCalorieUserInfo : CMLogItem {

	double fAge;
	long long fGender;
	double fHeight;
	double fWeight;
	long long fCondition;
	BOOL fBetaBlockerUse;

}

@property (nonatomic,readonly) long long gender; 
@property (nonatomic,readonly) double age; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double weight; 
@property (nonatomic,readonly) long long condition; 
@property (nonatomic,readonly) BOOL betaBlockerUse; 
+(BOOL)supportsSecureCoding;
+(id)genderString:(long long)arg1 ;
-(long long)condition;
-(double)height;
-(double)weight;
-(void)encodeWithCoder:(id)arg1 ;
-(double)age;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)betaBlockerUse;
-(id)initWithAge:(double)arg1 gender:(long long)arg2 height:(double)arg3 weight:(double)arg4 condition:(long long)arg5 betaBlockerUse:(BOOL)arg6 ;
-(id)initWithAge:(double)arg1 gender:(long long)arg2 height:(double)arg3 weight:(double)arg4 ;
-(id)initWithAge:(double)arg1 gender:(long long)arg2 height:(double)arg3 weight:(double)arg4 condition:(long long)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(long long)gender;
@end

