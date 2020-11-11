/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILocalNotification.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSTimeZone, NSCalendar, CLRegion, NSString, NSData;

@interface UIConcreteLocalNotification : UILocalNotification <NSSecureCoding> {

	NSDate* fireDate;
	NSTimeZone* timeZone;
	unsigned long long repeatInterval;
	NSCalendar* repeatCalendar;
	CLRegion* region;
	BOOL regionTriggersOnce;
	NSString* alertBody;
	BOOL hasAction;
	NSString* alertAction;
	NSString* alertLaunchImage;
	NSString* alertTitle;
	NSString* soundName;
	long long applicationIconBadgeNumber;
	NSData* userInfoData;
	NSString* category;

}
+(BOOL)supportsSecureCoding;
-(void)setSoundName:(id)arg1 ;
-(id)region;
-(id)category;
-(id)userInfo;
-(id)init;
-(id)alertBody;
-(void)setTimeZone:(id)arg1 ;
-(unsigned long long)hash;
-(id)fireDate;
-(BOOL)hasAction;
-(void)setCategory:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAlertLaunchImage:(id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(void)setRegion:(id)arg1 ;
-(void)validate;
-(void)setAlertBody:(id)arg1 ;
-(id)alertAction;
-(void)setRepeatCalendar:(id)arg1 ;
-(void)setHasAction:(BOOL)arg1 ;
-(void)setAlertTitle:(id)arg1 ;
-(void)setAlertAction:(id)arg1 ;
-(void)_setUserInfoData:(id)arg1 ;
-(void)setApplicationIconBadgeNumber:(long long)arg1 ;
-(void)setRegionTriggersOnce:(BOOL)arg1 ;
-(id)repeatCalendar;
-(long long)applicationIconBadgeNumber;
-(BOOL)regionTriggersOnce;
-(id)nextFireDateForLastFireDate:(id)arg1 ;
-(BOOL)isTriggeredByDate;
-(long long)compareFireDates:(id)arg1 ;
-(id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2 ;
-(BOOL)isTriggeredByRegion;
-(id)description;
-(id)timeZone;
-(BOOL)isEqual:(id)arg1 ;
-(id)soundName;
-(void)setRepeatInterval:(unsigned long long)arg1 ;
-(id)alertLaunchImage;
-(id)initWithCoder:(id)arg1 ;
-(id)alertTitle;
-(void)setFireDate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(unsigned long long)repeatInterval;
@end
