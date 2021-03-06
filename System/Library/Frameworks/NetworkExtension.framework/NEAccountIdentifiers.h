/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface NEAccountIdentifiers : NSObject {

	NSArray* _mailAccountIdentifiers;
	NSArray* _calendarAccountIdentifiers;
	NSArray* _contactsAccountIdentifiers;

}

@property (copy) NSArray * mailAccountIdentifiers;                  //@synthesize mailAccountIdentifiers=_mailAccountIdentifiers - In the implementation block
@property (copy) NSArray * calendarAccountIdentifiers;              //@synthesize calendarAccountIdentifiers=_calendarAccountIdentifiers - In the implementation block
@property (copy) NSArray * contactsAccountIdentifiers;              //@synthesize contactsAccountIdentifiers=_contactsAccountIdentifiers - In the implementation block
-(void)setMailAccountIdentifiers:(NSArray *)arg1 ;
-(void)setCalendarAccountIdentifiers:(NSArray *)arg1 ;
-(void)setContactsAccountIdentifiers:(NSArray *)arg1 ;
-(NSArray *)mailAccountIdentifiers;
-(NSArray *)contactsAccountIdentifiers;
-(NSArray *)calendarAccountIdentifiers;
@end

